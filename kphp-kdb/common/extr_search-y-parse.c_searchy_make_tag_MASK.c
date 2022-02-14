
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*,int) ;
 unsigned long long FUNC_2 (char*,int) ;

__attribute__((used)) static unsigned long long FUNC_3 (char *VAR_0, int VAR_1, unsigned int VAR_2) {
  FUNC_0 (VAR_1 <= 16);
  char VAR_3[32];
  int VAR_4 = 1;
  VAR_3[0] = 0x1f;
  FUNC_1 (VAR_3 + 1, VAR_0, VAR_1);
  VAR_4 += VAR_1;
  while (VAR_2 >= 0x40) {
    VAR_3[VAR_4++] = (unsigned char) ((VAR_2 & 0x7f) + 0x80);
    VAR_2 >>= 7;
  }
  VAR_3[VAR_4++] = (unsigned char) ((VAR_2 & 0x3f) + 0x40);
  return FUNC_2 (VAR_3, VAR_4);
}
