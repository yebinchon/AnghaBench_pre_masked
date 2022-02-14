
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int * VAR_0 ;
 int FUNC_0 (char*,char const*,int) ;
 scalar_t__ VAR_1 ;

void FUNC_1 (char *VAR_2, const char *VAR_3, int VAR_4) {
  if (VAR_1) {
    FUNC_0 (VAR_2, VAR_3, VAR_4);
    return;
  }
  while (VAR_4 > 0) {
    *VAR_2++ = VAR_0[(unsigned char) *VAR_3++];
    VAR_4--;
  }
  *VAR_2 = 0;
}
