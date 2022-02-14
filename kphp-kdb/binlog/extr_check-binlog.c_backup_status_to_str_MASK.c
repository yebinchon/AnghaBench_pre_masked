
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int out ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,char*) ;

char *FUNC_2 (int VAR_4) {
  static char VAR_5[64];
  char *VAR_6 = VAR_5;
  VAR_6[0] = VAR_6[1] = 0;
  if (VAR_4 & VAR_0) {
    VAR_6 += FUNC_1 (VAR_6, "|differ");
  }
  if (VAR_4 & VAR_1) {
    VAR_6 += FUNC_1 (VAR_6, "|io_error");
  }
  if (VAR_4 & VAR_2) {
    VAR_6 += FUNC_1 (VAR_6, "|larger");
  }
  if (VAR_4 & VAR_3) {
    VAR_6 += FUNC_1 (VAR_6, "|same_inode");
  }
  FUNC_0 (VAR_6 < VAR_5 + sizeof (VAR_5));
  return VAR_5+1;
}
