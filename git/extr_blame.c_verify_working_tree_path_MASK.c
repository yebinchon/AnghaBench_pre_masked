
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct repository {TYPE_4__* index; } ;
struct object_id {int dummy; } ;
struct commit_list {TYPE_2__* item; struct commit_list* next; } ;
struct commit {struct commit_list* parents; } ;
struct TYPE_8__ {int cache_nr; TYPE_3__** cache; } ;
struct TYPE_7__ {int name; } ;
struct TYPE_5__ {struct object_id oid; } ;
struct TYPE_6__ {TYPE_1__ object; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (struct repository*,struct object_id const*,char const*,struct object_id*,unsigned short*) ;
 int FUNC_2 (TYPE_4__*,char const*,int ) ;
 scalar_t__ FUNC_3 (struct repository*,struct object_id*,int *) ;
 int FUNC_4 (int ,char const*) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static void FUNC_6(struct repository *VAR_1,
         struct commit *VAR_2, const char *VAR_3)
{
 struct commit_list *VAR_4;
 int VAR_5;

 for (VAR_4 = VAR_2->parents; VAR_4; VAR_4 = VAR_4->next) {
  const struct object_id *VAR_6 = &VAR_4->item->object.oid;
  struct object_id VAR_7;
  unsigned short VAR_8;

  if (!FUNC_1(VAR_1, VAR_6, VAR_3, &VAR_7, &VAR_8) &&
      FUNC_3(VAR_1, &VAR_7, ((void*)0)) == VAR_0)
   return;
 }

 VAR_5 = FUNC_2(VAR_1->index, VAR_3, FUNC_5(VAR_3));
 if (VAR_5 >= 0)
  ;
 else if (-1 - VAR_5 < VAR_1->index->cache_nr &&
   !FUNC_4(VAR_1->index->cache[-1 - VAR_5]->name, VAR_3))
  ;
 else
  FUNC_0("no such path '%s' in HEAD", VAR_3);
}
