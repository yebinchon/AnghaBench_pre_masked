
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char wchar_t ;
struct TYPE_2__ {int c_mode; int c_width; int c_char; } ;





 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (char) ;

__attribute__((used)) static void
FUNC_1(void)
{
 int VAR_2;
 wchar_t VAR_3[256];
 wchar_t *VAR_4 = VAR_3;
 int VAR_5=0;


 for (VAR_2=0; VAR_2<VAR_0; VAR_2++)
  switch (VAR_1[VAR_2].c_mode) {
  case 129:
  default:
   *VAR_4++ = ' ';
   break;
  case 128:
   *VAR_4++ = '_';
   break;
  case 130:
   *VAR_4++ = VAR_1[VAR_2].c_char;
   if (VAR_1[VAR_2].c_width > 1)
    VAR_2 += VAR_1[VAR_2].c_width - 1;
   VAR_5=1;
   break;
  }
 FUNC_0('\r');
 for (*VAR_4=' '; *VAR_4==' '; VAR_4--)
  *VAR_4 = 0;
 for (VAR_4=VAR_3; *VAR_4; VAR_4++)
  FUNC_0(*VAR_4);
 if (VAR_5) {
  FUNC_0('\r');
  for (VAR_4=VAR_3; *VAR_4; VAR_4++)
   FUNC_0(*VAR_4=='_' ? ' ' : *VAR_4);
  FUNC_0('\r');
  for (VAR_4=VAR_3; *VAR_4; VAR_4++)
   FUNC_0(*VAR_4=='_' ? ' ' : *VAR_4);
 }
}
