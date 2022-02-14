
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char*,struct stat*) ;
 scalar_t__ FUNC_4 (char*,int ) ;
 int FUNC_5 (char*,int const,int ) ;
 int FUNC_6 (char*,int,char*,char*,char*) ;
 scalar_t__ FUNC_7 (char*,char*) ;
 char* VAR_4 ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int,char*,...) ;
 int FUNC_10 (int,unsigned char*,int) ;

__attribute__((used)) static int FUNC_11 (struct stat *VAR_5, char *VAR_6, unsigned char *VAR_7, int VAR_8, int VAR_9) {
  char VAR_10[VAR_3];
  if (FUNC_6 (VAR_10, VAR_3, "%s/%s", VAR_4, VAR_6) >= VAR_3) {
    return -1;
  }
  if (!VAR_9) {
    if (FUNC_1 (VAR_5->st_mode)) {
      FUNC_8 (VAR_10);
      if (FUNC_7 ((char *) VAR_7, VAR_10) < 0) {
        FUNC_9 (1, "%m\n");
        return -7;
      }
    } else if (FUNC_0 (VAR_5->st_mode)) {
      if (FUNC_4 (VAR_10, VAR_5->st_mode) < 0) {
        FUNC_9 (1, "mkdir (%s, %d) failed. %m\n", VAR_10, VAR_5->st_mode);
        return -6;
      }
    } else {
      const int VAR_11 = VAR_0 | VAR_1 | VAR_2;
      int VAR_12 = FUNC_5 (VAR_10, VAR_11, VAR_5->st_mode);
      if (VAR_12 < 0) {
        FUNC_9 (1, "open (%s, %d, %d) fail. %m\n", VAR_10, VAR_11, VAR_5->st_mode);
        return -2;
      }
      int VAR_13 = FUNC_10 (VAR_12, VAR_7, VAR_8);
      if (VAR_13 != VAR_8) {
        FUNC_9 (1, "%d bytes of %d was written to %s. %m\n", VAR_13, VAR_8, VAR_10);
        return -3;
      }
      if (FUNC_2 (VAR_12)) {
        FUNC_9 (1, "closing %s failed. %m\n", VAR_10);
        return -4;
      }
    }
  }
  int VAR_14 = FUNC_3 (VAR_10, VAR_5);
  if (VAR_14 < 0) {
    FUNC_9 (1, "lcopy_attrs returns error code %d.\n", VAR_14);
    return -5;
  }

  return 0;
}
