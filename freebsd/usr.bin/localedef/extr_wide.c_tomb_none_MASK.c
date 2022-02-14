
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int uint8_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;

int
FUNC_1(char *VAR_1, wchar_t VAR_2)
{
 if (VAR_0 != 1) {
  FUNC_0("invalid or unsupported multibyte locale");
  return (-1);
 }
 *(uint8_t *)VAR_1 = (VAR_2 & 0xff);
 VAR_1[1] = 0;
 return (1);
}
