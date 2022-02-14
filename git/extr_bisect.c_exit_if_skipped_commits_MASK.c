
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct object_id {int dummy; } ;
struct commit_list {TYPE_2__* item; struct commit_list* next; } ;
struct TYPE_3__ {struct object_id const oid; } ;
struct TYPE_4__ {TYPE_1__ object; } ;


 char* FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 char* FUNC_2 (struct object_id const*) ;
 int FUNC_3 (char*,...) ;
 char* VAR_0 ;

__attribute__((used)) static void FUNC_4(struct commit_list *VAR_1,
        const struct object_id *VAR_2)
{
 if (!VAR_1)
  return;

 FUNC_3("There are only 'skip'ped commits left to test.\n"
        "The first %s commit could be any of:\n", VAR_0);

 for ( ; VAR_1; VAR_1 = VAR_1->next)
  FUNC_3("%s\n", FUNC_2(&VAR_1->item->object.oid));

 if (VAR_2)
  FUNC_3("%s\n", FUNC_2(VAR_2));
 FUNC_3(FUNC_0("We cannot bisect more!\n"));
 FUNC_1(2);
}
