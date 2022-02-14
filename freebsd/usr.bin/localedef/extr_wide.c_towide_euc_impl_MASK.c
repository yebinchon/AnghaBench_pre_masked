
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int uint8_t ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static int
FUNC_2(wchar_t *VAR_0, const char *VAR_1, unsigned VAR_2,
    uint8_t VAR_3, uint8_t VAR_4, uint8_t VAR_5, uint8_t VAR_6)
{
 int VAR_7;
 int VAR_8 = 2;
 wchar_t VAR_9;

 VAR_9 = *(const uint8_t *)VAR_1;





 if ((VAR_9 & 0x80) == 0) {

  *VAR_0 = VAR_9;
  return (1);
 }







 if (VAR_9 >= 0xa1) {
  VAR_8 = 2;
 } else if (VAR_9 == VAR_3) {
  VAR_8 = VAR_4;
 } else if (VAR_9 == VAR_5) {
  VAR_8 = VAR_6;
 }

 if ((int)VAR_2 < VAR_8) {
  FUNC_1("incomplete character sequence (%s)", FUNC_0(VAR_1));
  return (-1);
 }

 for (VAR_7 = 1; VAR_7 < VAR_8; VAR_7++) {

  VAR_9 <<= 8;
  VAR_9 |= (uint8_t)(VAR_1[VAR_7]);
 }

 *VAR_0 = VAR_9;
 return (VAR_8);
}
