
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int,char*,int) ;
 int FUNC_5 (char*,char*,int*) ;
 char* FUNC_6 (char*,char*) ;
 int FUNC_7 (int,char*,...) ;

int FUNC_8 (void) {
  int VAR_3 = FUNC_3 ("/proc/stat", VAR_2);
  if (VAR_3 < 0) {
    FUNC_2 ("get_booting_time: open (\"/proc/stat\", O_RDONLY) failed. %m\n");
    FUNC_0 (1);
  }
  VAR_1[0] = '\n';
  int VAR_4 = FUNC_4 (VAR_3, VAR_1 + 1, VAR_0 - 1);
  if (VAR_4 < 0) {
    FUNC_1 (&VAR_3);
    FUNC_2 ("get_booting_time: read failed. %m\n");
    FUNC_0 (1);
  }
  FUNC_1 (&VAR_3);
  if (VAR_4 == VAR_0 - 1) {
    FUNC_2 ("get_booting_time: BUFFSIZE (%d) too small.\n", VAR_0);
    FUNC_0 (1);
  }
  VAR_1[VAR_4] = 0;
  char *VAR_5;
  VAR_5 = VAR_1;
  do {
    VAR_5 = FUNC_6 (VAR_5, "\nbtime");
    if (VAR_5 == ((void*)0)) {
      FUNC_7 (1, "%s\n", VAR_1);
      FUNC_2 ("get_booting_time: btime substring didn't find.\n");
      FUNC_0 (1);
    }
    int VAR_6;
    if (FUNC_5 (VAR_5 + 6, "%d", &VAR_6) == 1) {
      FUNC_7 (2, "booting time is %d.\n", VAR_6);
      return VAR_6;
    }
    VAR_5 += 6;
  } while (1);
  return 0;
}
