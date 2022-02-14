
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int uint8_t ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static int
FUNC_2(wchar_t *VAR_0, const char *VAR_1, unsigned VAR_2)
{
 wchar_t VAR_3;

 VAR_3 = *(const uint8_t *)VAR_1;

 if ((VAR_3 & 0x80) == 0) {

  *VAR_0 = VAR_3;
  return (1);
 }
 if (VAR_2 < 2) {
  FUNC_1("incomplete character sequence (%s)", FUNC_0(VAR_1));
  return (-1);
 }


 VAR_3 <<= 8;
 VAR_3 |= (uint8_t)(VAR_1[1]);
 *VAR_0 = VAR_3;
 return (2);
}
