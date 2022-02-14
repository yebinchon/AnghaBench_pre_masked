
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ssize_t ;
struct TYPE_3__ {int * stdout_file; int name; scalar_t__ pid; scalar_t__ status; scalar_t__ terminated; } ;
typedef TYPE_1__ process_info_t ;
typedef scalar_t__ pid_t ;
typedef int fdstr ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 char* VAR_5 ;
 int FUNC_4 (char*,char**,int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (int ,char*) ;
 char* FUNC_8 (char*) ;
 int FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (int*) ;
 int FUNC_11 (int,int*,int) ;
 scalar_t__ FUNC_12 (char*,char*,int) ;
 int FUNC_13 (char*,int,char*,int) ;
 int VAR_6 ;
 int FUNC_14 (char*) ;
 int * FUNC_15 () ;
 int FUNC_16 (char*) ;

int FUNC_17(char* VAR_7, char* VAR_8, process_info_t* VAR_9, int VAR_10) {
  FILE* VAR_11;
  int VAR_12;
  const char* VAR_13;
  char* VAR_14[16];
  int VAR_15[2];
  char VAR_16[8];
  ssize_t VAR_17;
  int VAR_18;
  pid_t VAR_19;

  VAR_13 = FUNC_8("UV_USE_VALGRIND");
  VAR_18 = 0;




  if (VAR_10 == 0 && VAR_13 != ((void*)0) && FUNC_1(VAR_13) != 0) {
    VAR_14[VAR_18++] = "valgrind";
    VAR_14[VAR_18++] = "--quiet";
    VAR_14[VAR_18++] = "--leak-check=full";
    VAR_14[VAR_18++] = "--show-reachable=yes";
    VAR_14[VAR_18++] = "--error-exitcode=125";
  }

  VAR_14[VAR_18++] = VAR_5;
  VAR_14[VAR_18++] = VAR_7;
  VAR_14[VAR_18++] = VAR_8;
  VAR_14[VAR_18++] = ((void*)0);

  VAR_11 = FUNC_15();
  VAR_12 = FUNC_5(VAR_11);
  if (!VAR_11) {
    FUNC_9("tmpfile");
    return -1;
  }

  if (VAR_10) {
    if (FUNC_10(VAR_15)) {
      FUNC_9("pipe");
      return -1;
    }

    FUNC_13(VAR_16, sizeof(VAR_16), "%d", VAR_15[1]);
    if (FUNC_12("UV_TEST_RUNNER_FD", VAR_16, 1)) {
      FUNC_9("setenv");
      return -1;
    }
  }

  VAR_9->terminated = 0;
  VAR_9->status = 0;

  VAR_19 = FUNC_6();

  if (VAR_19 < 0) {
    FUNC_9("fork");
    return -1;
  }

  if (VAR_19 == 0) {

    if (VAR_10)
      FUNC_2(VAR_15[0]);
    FUNC_3(VAR_12, VAR_2);
    FUNC_3(VAR_12, VAR_1);
    FUNC_4(VAR_14[0], VAR_14, VAR_3);
    FUNC_9("execve()");
    FUNC_0(127);
  }


  VAR_9->pid = VAR_19;
  VAR_9->name = FUNC_14(VAR_7);
  VAR_9->stdout_file = VAR_11;

  if (!VAR_10)
    return 0;

  FUNC_2(VAR_15[1]);
  FUNC_16("UV_TEST_RUNNER_FD");

  do
    VAR_17 = FUNC_11(VAR_15[0], &VAR_18, 1);
  while (VAR_17 == -1 && VAR_4 == VAR_0);

  FUNC_2(VAR_15[0]);

  if (VAR_17 == -1) {
    FUNC_9("read");
    return -1;
  }

  if (VAR_17 > 0) {
    FUNC_7(VAR_6, "EOF expected but got data.\n");
    return -1;
  }

  return 0;
}
