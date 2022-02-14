
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct submodule_entry {struct submodule const* config; int ent; } ;
struct submodule_cache {int for_path; } ;
typedef struct submodule {char const* path; int gitmodules_oid; } const submodule ;
struct object_id {int dummy; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct object_id const*,char const*) ;
 int FUNC_1 (int *,unsigned int) ;
 struct submodule_entry* FUNC_2 (int *,struct submodule_entry*,int ,int *) ;
 int FUNC_3 (int *,struct object_id const*) ;

__attribute__((used)) static const struct submodule *FUNC_4(struct submodule_cache *VAR_1,
  const struct object_id *VAR_2, const char *VAR_3)
{
 struct submodule_entry *VAR_4;
 unsigned int VAR_5 = FUNC_0(VAR_2, VAR_3);
 struct submodule_entry VAR_6;
 struct submodule VAR_7;

 FUNC_3(&VAR_7.gitmodules_oid, VAR_2);
 VAR_7.path = VAR_3;

 FUNC_1(&VAR_6.ent, VAR_5);
 VAR_6.config = &VAR_7;

 VAR_4 = FUNC_2(&VAR_1->for_path, &VAR_6, VAR_0, ((void*)0));
 if (VAR_4)
  return VAR_4->config;
 return ((void*)0);
}
