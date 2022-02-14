
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct child_process {int * argv; scalar_t__ use_shell; scalar_t__ git_cmd; } ;
struct argv_array {char** argv; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_1 (struct argv_array*) ;
 int FUNC_2 (struct argv_array*,char*) ;
 int FUNC_3 (struct argv_array*,int *) ;
 int VAR_2 ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char*) ;
 int FUNC_6 (struct argv_array*,int *) ;
 int FUNC_7 (char*,char) ;

__attribute__((used)) static int FUNC_8(struct argv_array *VAR_3, const struct child_process *VAR_4)
{
 if (!VAR_4->argv[0])
  FUNC_0("command is empty");





 FUNC_2(VAR_3, VAR_1);

 if (VAR_4->git_cmd) {
  FUNC_2(VAR_3, "git");
  FUNC_3(VAR_3, VAR_4->argv);
 } else if (VAR_4->use_shell) {
  FUNC_6(VAR_3, VAR_4->argv);
 } else {
  FUNC_3(VAR_3, VAR_4->argv);
 }







 if (!FUNC_7(VAR_3->argv[1], '/')) {
  char *VAR_5 = FUNC_5(VAR_3->argv[1]);
  if (VAR_5) {
   FUNC_4((char *)VAR_3->argv[1]);
   VAR_3->argv[1] = VAR_5;
  } else {
   FUNC_1(VAR_3);
   VAR_2 = VAR_0;
   return -1;
  }
 }

 return 0;
}
