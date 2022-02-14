
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,char*,scalar_t__) ;

int FUNC_1 (char *VAR_2) {
  char *VAR_3 = VAR_2;
  *VAR_3++ = '#';
  if (VAR_1 > 0) {
    if (VAR_0 & 8) {
      if (VAR_0 & 4) {
        *VAR_3++ = 'R';
      } else {
        *VAR_3++ = 'r';
      }
    } else {
      if (VAR_0 & 4) {
        *VAR_3++ = 'I';
      } else {
        *VAR_3++ = 'i';
      }
    }
    VAR_3 += FUNC_0 (VAR_3, "%d", VAR_1);
  }
  *VAR_3++ = '%';
  *VAR_3++ = ')';
  *VAR_3 = 0;
  return VAR_3 - VAR_2;
}
