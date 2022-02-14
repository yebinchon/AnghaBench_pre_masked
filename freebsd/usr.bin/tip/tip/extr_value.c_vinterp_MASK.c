
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static char *
FUNC_0(char *VAR_0, int VAR_1)
{
 char *VAR_2 = VAR_0, VAR_3;
 int VAR_4;

 while ((VAR_3 = *VAR_0++) && VAR_3 != VAR_1) {
  switch (VAR_3) {

  case '^':
   if (*VAR_0)
    *VAR_2++ = *VAR_0++ - 0100;
   else
    *VAR_2++ = VAR_3;
   break;

  case '\\':
   VAR_4 = 0;
   VAR_3 = *VAR_0++;
   if (VAR_3 >= '0' && VAR_3 <= '7')
    VAR_4 = (VAR_4<<3)+(VAR_3-'0');
   else {
    char *VAR_5 = "n\nr\rt\tb\bf\f";

    for (; *VAR_5; VAR_5++)
     if (VAR_3 == *VAR_5++) {
      *VAR_2++ = *VAR_5;
      goto cont;
     }
    *VAR_2++ = VAR_3;
   cont:
    break;
   }
   if ((VAR_3 = *VAR_0++) >= '0' && VAR_3 <= '7') {
    VAR_4 = (VAR_4<<3)+(VAR_3-'0');
    if ((VAR_3 = *VAR_0++) >= '0' && VAR_3 <= '7')
     VAR_4 = (VAR_4<<3)+(VAR_3-'0');
    else
     VAR_0--;
   } else
    VAR_0--;
   *VAR_2++ = VAR_4;
   break;

  default:
   *VAR_2++ = VAR_3;
  }
 }
 *VAR_2 = '\0';
 return (VAR_3 == VAR_1 ? VAR_0-1 : ((void*)0));
}
