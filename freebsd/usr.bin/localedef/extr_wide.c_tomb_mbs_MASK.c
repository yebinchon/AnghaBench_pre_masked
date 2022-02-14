
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int uint8_t ;



int
FUNC_0(char *VAR_0, wchar_t VAR_1)
{
 uint8_t *VAR_2 = (uint8_t *)VAR_0;
 int VAR_3 = 0, VAR_4;

 if ((VAR_1 & 0xff000000U) != 0) {
  VAR_3 = 4;
 } else if ((VAR_1 & 0x00ff0000U) != 0) {
  VAR_3 = 3;
 } else if ((VAR_1 & 0x0000ff00U) != 0) {
  VAR_3 = 2;
 } else {
  VAR_3 = 1;
 }
 VAR_4 = VAR_3;
 while (VAR_3) {
  VAR_3--;
  VAR_2[VAR_3] = VAR_1 & 0xff;
  VAR_1 >>= 8;
 }

 VAR_2[VAR_4] = 0;
 return (VAR_4);
}
