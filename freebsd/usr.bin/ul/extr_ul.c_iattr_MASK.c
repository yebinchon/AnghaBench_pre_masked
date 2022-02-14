
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char wchar_t ;
struct TYPE_2__ {int c_mode; } ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (char) ;

__attribute__((used)) static void
FUNC_1(void)
{
 int VAR_2;
 wchar_t VAR_3[256];
 wchar_t *VAR_4 = VAR_3;

 for (VAR_2=0; VAR_2<VAR_0; VAR_2++)
  switch (VAR_1[VAR_2].c_mode) {
  case 131: *VAR_4++ = ' '; break;
  case 133: *VAR_4++ = 'g'; break;
  case 129: *VAR_4++ = '^'; break;
  case 130: *VAR_4++ = 'v'; break;
  case 128: *VAR_4++ = '_'; break;
  case 132: *VAR_4++ = '!'; break;
  default: *VAR_4++ = 'X'; break;
  }
 for (*VAR_4=' '; *VAR_4==' '; VAR_4--)
  *VAR_4 = 0;
 for (VAR_4=VAR_3; *VAR_4; VAR_4++)
  FUNC_0(*VAR_4);
 FUNC_0('\n');
}
