
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (int,int ) ;
 int FUNC_4 (char*,int,int) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 char* VAR_10 ;
 scalar_t__ VAR_11 ;

__attribute__((used)) static int FUNC_5 (char *VAR_12, int VAR_13, int VAR_14) {
  VAR_6 = VAR_13;
  VAR_10 = VAR_12;
  VAR_7 = VAR_8 = VAR_1 + VAR_0;
  VAR_11 = 0;
  if (VAR_14 < 0) {
    VAR_14 = FUNC_4 (VAR_12, VAR_3 | VAR_5 | VAR_4, 0640);
    if (VAR_14 < 0) {
      FUNC_2 ("open (%s, O_CREAT | O_WRONLY | O_EXCL, 0640) failed. %m\n", VAR_12);
      return -1;
    }
    FUNC_0 (VAR_14 > 1);
    if (FUNC_3 (VAR_14, VAR_2) <= 0) {
      FUNC_2 ("cannot lock file '%s' for writing\n", VAR_12);
      FUNC_0 (!FUNC_1 (VAR_14));
      return -1;
    }
  } else {
    FUNC_0 (VAR_14 == 1);
  }
  return VAR_9 = VAR_14;
}
