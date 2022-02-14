
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct commit_list {TYPE_2__* item; struct commit_list* next; } ;
struct commit {int dummy; } ;
struct TYPE_3__ {int oid; } ;
struct TYPE_4__ {TYPE_1__ object; } ;


 int FUNC_0 (struct commit_list*) ;
 struct commit_list* FUNC_1 (struct commit*,int,struct commit**) ;
 char* FUNC_2 (int *) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static int FUNC_4(struct commit **VAR_0, int VAR_1, int VAR_2)
{
 struct commit_list *VAR_3, *VAR_4;

 VAR_3 = FUNC_1(VAR_0[0], VAR_1 - 1, VAR_0 + 1);

 if (!VAR_3)
  return 1;

 for (VAR_4 = VAR_3; VAR_4; VAR_4 = VAR_4->next) {
  FUNC_3("%s\n", FUNC_2(&VAR_4->item->object.oid));
  if (!VAR_2)
   break;
 }

 FUNC_0(VAR_3);
 return 0;
}
