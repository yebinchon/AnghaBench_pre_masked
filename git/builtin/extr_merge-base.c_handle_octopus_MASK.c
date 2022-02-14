
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
 struct commit_list* FUNC_3 (struct commit_list*) ;
 char* FUNC_4 (int *) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (struct commit_list**) ;

__attribute__((used)) static int FUNC_7(int VAR_0, const char **VAR_1, int VAR_2)
{
 struct commit_list *VAR_3 = ((void*)0);
 struct commit_list *VAR_4, *VAR_5;
 int VAR_6;

 for (VAR_6 = VAR_0 - 1; VAR_6 >= 0; VAR_6--)
  FUNC_0(FUNC_2(VAR_1[VAR_6]), &VAR_3);

 VAR_4 = FUNC_3(VAR_3);
 FUNC_1(VAR_3);
 FUNC_6(&VAR_4);

 if (!VAR_4)
  return 1;

 for (VAR_5 = VAR_4; VAR_5; VAR_5 = VAR_5->next) {
  FUNC_5("%s\n", FUNC_4(&VAR_5->item->object.oid));
  if (!VAR_2)
   break;
 }

 FUNC_1(VAR_4);
 return 0;
}
