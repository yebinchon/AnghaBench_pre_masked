
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct commit_list {TYPE_2__* item; struct commit_list* next; } ;
struct TYPE_3__ {int oid; } ;
struct TYPE_4__ {TYPE_1__ object; } ;


 int FUNC_0 (int ,struct commit_list**) ;
 int FUNC_1 (struct commit_list*) ;
 int FUNC_2 (char const*) ;
 char* FUNC_3 (int *) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (struct commit_list**) ;

__attribute__((used)) static int FUNC_6(int VAR_0, const char **VAR_1)
{
 struct commit_list *VAR_2 = ((void*)0), *VAR_3;
 int VAR_4;

 for (VAR_4 = VAR_0 - 1; VAR_4 >= 0; VAR_4--)
  FUNC_0(FUNC_2(VAR_1[VAR_4]), &VAR_2);

 FUNC_5(&VAR_2);

 if (!VAR_2)
  return 1;

 for (VAR_3 = VAR_2; VAR_3; VAR_3 = VAR_3->next)
  FUNC_4("%s\n", FUNC_3(&VAR_3->item->object.oid));

 FUNC_1(VAR_2);
 return 0;
}
