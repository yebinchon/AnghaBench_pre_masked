
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
typedef int gzFile ;
typedef int dyn_mark_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int,char*) ;
 int FUNC_8 (int ,char*,int) ;
 int FUNC_9 (char*,int ,int) ;
 int FUNC_10 (char const* const,int,int) ;
 int FUNC_11 (int ,char const* const,char*,struct stat*) ;
 int FUNC_12 (char*,char*,int) ;
 scalar_t__ FUNC_13 (char const* const,struct stat*) ;
 int FUNC_14 (char*,char*) ;

int FUNC_15 (const char *const VAR_7, const char *const VAR_8, int VAR_9) {
  char VAR_10[8];
  if (VAR_9 >= 1 && VAR_9 <= 9) {
    FUNC_12 (VAR_10, "wb%d", VAR_9);
  } else {
    FUNC_14 (VAR_10, "wb");
  }

  int VAR_11 = FUNC_10 (VAR_7, VAR_0 | VAR_2 | VAR_3 | VAR_1, 0660);
  if (VAR_11 < 0) { return VAR_5; }
  int VAR_12 = FUNC_2 (VAR_11);
  if (VAR_12 < 0) {
    FUNC_0 (FUNC_1 (VAR_11) >= 0);
    return VAR_4;
  }

  gzFile VAR_13 = FUNC_7 (VAR_12, VAR_10);
  struct stat VAR_14;
  if (FUNC_13 (VAR_8, &VAR_14)) {
    return -1;
  }
  dyn_mark_t VAR_15;
  FUNC_3 (VAR_15);
  int VAR_16 = FUNC_11 (VAR_13, VAR_8, "", &VAR_14);
  FUNC_4 (VAR_15);
  char VAR_17[1024];
  FUNC_9 (VAR_17, 0 , 1024);
  FUNC_0 (FUNC_8 (VAR_13, VAR_17, 1024) == 1024);
  FUNC_0 (FUNC_6 (VAR_13) == VAR_6);
  FUNC_0 (FUNC_5 (VAR_11) >= 0);
  FUNC_0 (FUNC_1 (VAR_11) >= 0);
  return VAR_16;
}
