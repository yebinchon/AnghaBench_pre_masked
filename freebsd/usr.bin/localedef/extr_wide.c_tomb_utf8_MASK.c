
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int uint8_t ;


 int FUNC_0 (char*,int) ;

int
FUNC_1(char *VAR_0, wchar_t VAR_1)
{
 uint8_t *VAR_2 = (uint8_t *)VAR_0;
 uint8_t VAR_3;
 int VAR_4;
 int VAR_5;

 if (VAR_1 <= 0x7f) {
  VAR_2[0] = VAR_1 & 0x7f;
  VAR_2[1] = 0;
  return (1);
 }
 if (VAR_1 <= 0x7ff) {
  VAR_4 = 2;
  VAR_3 = 0xc0;
 } else if (VAR_1 <= 0xffff) {
  VAR_4 = 3;
  VAR_3 = 0xe0;
 } else if (VAR_1 <= 0x1fffff) {
  VAR_4 = 4;
  VAR_3 = 0xf0;
 } else {
  FUNC_0("illegal uf8 char (%x)", VAR_1);
  return (-1);
 }
 for (VAR_5 = VAR_4 - 1; VAR_5; VAR_5--) {
  VAR_2[VAR_5] = (VAR_1 & 0x3f) | 0x80;
  VAR_1 >>= 6;
 }
 VAR_2[0] = (VAR_3) | VAR_1;
 VAR_2[VAR_4] = 0;
 return (VAR_4);
}
