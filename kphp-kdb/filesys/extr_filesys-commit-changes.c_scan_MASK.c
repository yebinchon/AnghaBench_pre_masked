
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char const* const,double) ;
 scalar_t__ FUNC_2 (char const* const) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (char const* const) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (int) ;
 scalar_t__ VAR_5 ;
 int FUNC_7 (char*,...) ;
 scalar_t__ FUNC_8 (double,int) ;
 double FUNC_9 () ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_10 () ;
 int FUNC_11 (double,char const* const) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int,int,int*) ;
 int FUNC_14 (double,char const* const) ;
 scalar_t__ FUNC_15 (double) ;
 scalar_t__ VAR_10 ;
 int FUNC_16 (int ,char const* const) ;
 int FUNC_17 (char const* const) ;
 double VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_18 (int,char*,double) ;

__attribute__((used)) static int FUNC_19 (const char *const VAR_13, const char *const VAR_14) {
  VAR_5 = 0;
  if (!VAR_10) {
    if (FUNC_2 (VAR_13) < 0) {
      FUNC_7 ("compute_tmp_dir_name fail.\n");
      FUNC_6 (1);
    }
    FUNC_18 (1, "Temporary directory name: %s\n", VAR_11);
    if (VAR_12) {
      double VAR_15 = -FUNC_9 ();
      int VAR_16 = FUNC_1 (VAR_13, VAR_11);
      if (VAR_16 < 0) {
        FUNC_7 ("clone_file (%s, %s) returns error code %d.\n", VAR_13, VAR_11, VAR_16);
        FUNC_6 (1);
      }
      VAR_15 += FUNC_9 ();
      FUNC_18 (1, "Cloning master copy time = %.6lf seconds.\n", VAR_15);
      VAR_1 = VAR_2;
    } else {
      FUNC_11 (VAR_11, VAR_13);
      FUNC_12 (0);
      if (FUNC_8 (VAR_11, 0770) < 0) {
        FUNC_7 ("mkdir (%s, 0770) failed. %m\n", VAR_11);
        FUNC_6 (1);
      }
      VAR_1 = VAR_3;
    }
    FUNC_4 ();
  }
  VAR_9 = FUNC_17 (VAR_13);
  FUNC_0 (VAR_9 < VAR_0-1);
  FUNC_16 (VAR_8, VAR_13);
  VAR_7 = FUNC_17 (VAR_14);
  FUNC_0 (VAR_7 < VAR_0-1);
  FUNC_16 (VAR_6, VAR_14);
  int VAR_17;
  FUNC_13 (VAR_9, VAR_7, &VAR_17);

  if (!VAR_10) {
    FUNC_5 ();
    if (!VAR_5) {
      if (VAR_12) {
        int VAR_18 = FUNC_3 (VAR_13);
        if (VAR_18) {
          FUNC_7 ("delete_file (%s) returns error code %d.\n", VAR_13, VAR_18);
          return -1;
        }
        VAR_18 = FUNC_14 (VAR_11, VAR_13);
        if (VAR_18) {
          FUNC_7 ("rename (%s, %s) returns error code %d.\n", VAR_11, VAR_13, VAR_18);
          return -2;
        }
      } else {
        FUNC_10 ();
        if (FUNC_15 (VAR_11) < 0) {
          FUNC_7 ("rmdir (%s) failed. %m\n", VAR_11);
        }
      }
    }
  }
  return (VAR_5 == 0 && (VAR_10 || VAR_4 > 0)) ? 0 : -1;
}
