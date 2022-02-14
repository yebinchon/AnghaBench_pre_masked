
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ssize_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 () ;
 size_t FUNC_6 (char*,char*,int) ;
 int FUNC_7 (char*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_8 (int,int *,int ) ;

void FUNC_9 (void) {
  char VAR_2[30];
  FUNC_7 (VAR_2, "%d", FUNC_5());
  char VAR_3[512];
  ssize_t VAR_4 = FUNC_6 ("/proc/self/exe", VAR_3, 511);
  if (VAR_4 >= 0) {
    VAR_3[VAR_4] = 0;
    int VAR_5 = FUNC_3();
    if (VAR_5 < 0) {
      FUNC_4 (VAR_0, "Can't fork() to run gdb\n");
      FUNC_0 (0);
    }
    if (!VAR_5) {
      FUNC_1 (2, 1);
      FUNC_4 (VAR_1, "stack trace for %s pid = %s\n", VAR_3, VAR_2);
      FUNC_2 ("gdb", "gdb", "--batch", "-n", "-ex", "thread", "-ex", "bt", VAR_3, VAR_2, ((void*)0));
      FUNC_0 (0);
    } else {
      FUNC_8 (VAR_5, ((void*)0), 0);
    }
  } else {
    FUNC_4 (VAR_0, "can't get name of executable file to pass to gdb\n");
  }
}
