
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int filename ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 char* VAR_6 ;
 scalar_t__ FUNC_1 (int,int ,int ) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (char*,int,int) ;
 int FUNC_4 (char*,int,char*,int,char*,char*) ;
 scalar_t__ FUNC_5 (char*) ;
 int FUNC_6 (int,char*,...) ;

__attribute__((used)) static int FUNC_7 (int VAR_7, char *VAR_8) {
  char VAR_9[128];
  FUNC_0 (FUNC_4 (VAR_9, sizeof (VAR_9), ".c%d.%s.%s", VAR_7, VAR_6, VAR_8) < (int) sizeof (VAR_9));
  int VAR_10 = FUNC_3 (VAR_9, VAR_4 | VAR_2 | VAR_5 | VAR_3, 0000);
  if (VAR_10 < 0) {
    FUNC_6 (1, "create_output_file: creat (%s, O_RDWR | O_CREAT | O_TRUNC | O_EXCL, 0000) failed. %m\n", VAR_9);
    return -1;
  }

  if (FUNC_5 (VAR_9) < 0) {
    FUNC_6 (1, "create_output_file: unlink (%s) failed. %m\n", VAR_9);
    FUNC_2 (&VAR_10);
    return -2;
  }

  if (FUNC_1 (VAR_10, VAR_1, VAR_0) < 0) {
    FUNC_6 (1, "create_output_file: fcntl (%d, F_SETFD, FD_CLOEXEC) failed. %m\n", VAR_10);
    FUNC_2 (&VAR_10);
    return -3;
  }

  return VAR_10;
}
