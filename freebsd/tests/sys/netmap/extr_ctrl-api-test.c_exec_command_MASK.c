
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pid_t ;
typedef int av ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 char** FUNC_2 (int,int) ;
 int FUNC_3 (int) ;
 int VAR_2 ;
 int FUNC_4 (char*,char**) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (int ,char*,char*) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (char) ;
 int VAR_3 ;
 char* FUNC_12 (char const* const) ;
 char* FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (scalar_t__,int*,int ) ;

__attribute__((used)) static int
FUNC_15(int VAR_4, const char *const VAR_5[])
{
 pid_t VAR_6;
 pid_t VAR_7;
 int VAR_8;
 int VAR_9;

 FUNC_10("Executing command: ");
 for (VAR_9 = 0; VAR_9 < VAR_4 - 1; VAR_9++) {
  if (!VAR_5[VAR_9]) {

   return -1;
  }
  if (VAR_9 > 0) {
   FUNC_11(' ');
  }
  FUNC_10("%s", VAR_5[VAR_9]);
 }
 FUNC_11('\n');

 VAR_6 = FUNC_6();
 if (VAR_6 == 0) {
  char **VAR_10;
  int VAR_11[3];



  for (VAR_9 = 0; VAR_9 < 3; VAR_9++) {
   FUNC_3(VAR_9);
   VAR_11[VAR_9] = FUNC_8("/dev/null", VAR_1);
   if (VAR_11[VAR_9] < 0) {
    for (VAR_9--; VAR_9 >= 0; VAR_9--) {
     FUNC_3(VAR_11[VAR_9]);
    }
    return -1;
   }
  }


  VAR_10 = FUNC_2(VAR_4, sizeof(VAR_10[0]));
  if (!VAR_10) {
   FUNC_5(VAR_0);
  }
  for (VAR_9 = 0; VAR_9 < VAR_4 - 1; VAR_9++) {
   VAR_10[VAR_9] = FUNC_12(VAR_5[VAR_9]);
   if (!VAR_10[VAR_9]) {
    FUNC_5(VAR_0);
   }
  }
  FUNC_4(VAR_10[0], VAR_10);
  FUNC_9("execvp()");
  FUNC_5(VAR_0);
 }

 VAR_7 = FUNC_14(VAR_6, &VAR_8, 0);
 if (VAR_7 < 0) {
  FUNC_7(VAR_3, "waitpid() failed: %s\n", FUNC_13(VAR_2));
  return VAR_7;
 }
 if (FUNC_1(VAR_8)) {
  return FUNC_0(VAR_8);
 }

 return -1;
}
