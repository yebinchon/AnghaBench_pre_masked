
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct repository {TYPE_1__* objects; } ;
struct multi_pack_index {struct multi_pack_index* next; int object_dir; } ;
struct TYPE_2__ {struct multi_pack_index* multi_pack_index; } ;


 int GIT_TEST_MULTI_PACK_INDEX ;
 int git_env_bool (int ,int ) ;
 struct multi_pack_index* load_multi_pack_index (char const*,int) ;
 scalar_t__ repo_config_get_bool (struct repository*,char*,int*) ;
 int strcmp (char const*,int ) ;

int prepare_multi_pack_index_one(struct repository *r, const char *object_dir, int local)
{
 struct multi_pack_index *m;
 struct multi_pack_index *m_search;
 int config_value;
 static int env_value = -1;

 if (env_value < 0)
  env_value = git_env_bool(GIT_TEST_MULTI_PACK_INDEX, 0);

 if (!env_value &&
     (repo_config_get_bool(r, "core.multipackindex", &config_value) ||
     !config_value))
  return 0;

 for (m_search = r->objects->multi_pack_index; m_search; m_search = m_search->next)
  if (!strcmp(object_dir, m_search->object_dir))
   return 1;

 m = load_multi_pack_index(object_dir, local);

 if (m) {
  m->next = r->objects->multi_pack_index;
  r->objects->multi_pack_index = m;
  return 1;
 }

 return 0;
}
