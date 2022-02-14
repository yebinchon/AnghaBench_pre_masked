
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

int FUNC_2(int VAR_0, char* VAR_1) {
  FUNC_0(VAR_0 >= 0 && VAR_0 <= 0x10FFFF);
  char* VAR_2 = VAR_1;
  if (VAR_0 <= 0x7F) {
    *VAR_1++ = VAR_0;
  } else if (VAR_0 <= 0x7FF) {
    *VAR_1++ = 0xC0 + ((VAR_0 & 0x7C0) >> 6);
    *VAR_1++ = 0x80 + ((VAR_0 & 0x03F));
  } else if(VAR_0 <= 0xFFFF) {
    *VAR_1++ = 0xE0 + ((VAR_0 & 0xF000) >> 12);
    *VAR_1++ = 0x80 + ((VAR_0 & 0x0FC0) >> 6);
    *VAR_1++ = 0x80 + ((VAR_0 & 0x003F));
  } else {
    *VAR_1++ = 0xF0 + ((VAR_0 & 0x1C0000) >> 18);
    *VAR_1++ = 0x80 + ((VAR_0 & 0x03F000) >> 12);
    *VAR_1++ = 0x80 + ((VAR_0 & 0x000FC0) >> 6);
    *VAR_1++ = 0x80 + ((VAR_0 & 0x00003F));
  }
  FUNC_0(VAR_1 - VAR_2 == FUNC_1(VAR_0));
  return VAR_1 - VAR_2;
}
