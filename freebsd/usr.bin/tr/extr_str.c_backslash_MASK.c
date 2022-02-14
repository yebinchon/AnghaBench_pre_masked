
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_3__ {int state; scalar_t__* str; } ;
typedef TYPE_1__ STR ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1(STR *VAR_1, int *VAR_2)
{
 int VAR_3, VAR_4, VAR_5;

 if (VAR_2 != ((void*)0))
  *VAR_2 = 0;
 for (VAR_4 = VAR_5 = 0;;) {
  VAR_3 = (u_char)*++VAR_1->str;
  if (!FUNC_0(VAR_3) || VAR_3 > '7')
   break;
  VAR_5 = VAR_5 * 8 + VAR_3 - '0';
  if (++VAR_4 == 3) {
   ++VAR_1->str;
   break;
  }
 }
 if (VAR_4) {
  if (VAR_2 != ((void*)0))
   *VAR_2 = 1;
  return (VAR_5);
 }
 if (VAR_3 != '\0')
  ++VAR_1->str;
 switch (VAR_3) {
  case 'a':
   return ('\7');
  case 'b':
   return ('\b');
  case 'f':
   return ('\f');
  case 'n':
   return ('\n');
  case 'r':
   return ('\r');
  case 't':
   return ('\t');
  case 'v':
   return ('\13');
  case '\0':
   VAR_1->state = VAR_0;
   return ('\\');
  default:
   return (VAR_3);
 }
}
