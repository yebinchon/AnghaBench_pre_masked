
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(uint8_t *VAR_0, char *VAR_1, size_t VAR_2)
{
 int VAR_3;
 size_t VAR_4 = 0;

 while((VAR_3 = *VAR_1++) != '\0') {
  if (VAR_3 == '\\') {

   switch (*VAR_1) {
   case '\\':
    *VAR_0++ = '\\';
    break;

   case 'x':
    VAR_1++;
    VAR_3 = FUNC_1(*VAR_1++);
    *VAR_0 = (VAR_3 - (FUNC_0(VAR_3) ? '0' : ('A' - 10))) << 4;
    VAR_3 = FUNC_1(*VAR_1++);
    *VAR_0++ |= VAR_3 - (FUNC_0(VAR_3) ? '0' : ('A' - 10));
    break;

   default:
    return (-1);
   }
  } else
   *VAR_0++ = VAR_3;

  if (++VAR_4 > VAR_2)
   return (-1);
 }

 return (VAR_4);
}
