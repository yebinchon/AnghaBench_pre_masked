
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
typedef enum todo_command { ____Placeholder_todo_command } todo_command ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int * FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,char*,char*) ;
 int FUNC_4 (int) ;
 char* FUNC_5 (struct object_id*) ;
 int FUNC_6 () ;

__attribute__((used)) static void FUNC_7(struct object_id *VAR_0,
  enum todo_command VAR_1)
{
 FILE *VAR_2 = FUNC_2(FUNC_6(), "a");

 if (!VAR_2)
  return;

 FUNC_3(VAR_2, "%s\n", FUNC_5(VAR_0));
 FUNC_0(VAR_2);

 if (!FUNC_4(VAR_1))
  FUNC_1();
}
