
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int ta_fgcolor; unsigned int ta_bgcolor; int ta_format; } ;
struct TYPE_5__ {TYPE_1__ t_curattr; TYPE_1__ t_defattr; } ;
typedef TYPE_2__ teken_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,unsigned int) ;

__attribute__((used)) static void
FUNC_1(teken_t *VAR_4, unsigned int VAR_5,
    const unsigned int VAR_6[])
{
 unsigned int VAR_7, VAR_8;


 if (VAR_5 == 0) {
  VAR_4->t_curattr = VAR_4->t_defattr;
  return;
 }

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  VAR_8 = VAR_6[VAR_7];

  switch (VAR_8) {
  case 0:
   VAR_4->t_curattr = VAR_4->t_defattr;
   break;
  case 1:
   VAR_4->t_curattr.ta_format |= VAR_1;
   break;
  case 4:
   VAR_4->t_curattr.ta_format |= VAR_3;
   break;
  case 5:
   VAR_4->t_curattr.ta_format |= VAR_0;
   break;
  case 7:
   VAR_4->t_curattr.ta_format |= VAR_2;
   break;
  case 22:
   VAR_4->t_curattr.ta_format &= ~VAR_1;
   break;
  case 24:
   VAR_4->t_curattr.ta_format &= ~VAR_3;
   break;
  case 25:
   VAR_4->t_curattr.ta_format &= ~VAR_0;
   break;
  case 27:
   VAR_4->t_curattr.ta_format &= ~VAR_2;
   break;
  case 30:
  case 31:
  case 32:
  case 33:
  case 34:
  case 35:
  case 36:
  case 37:
   VAR_4->t_curattr.ta_fgcolor = VAR_8 - 30;
   break;
  case 38:
   if (VAR_7 + 2 >= VAR_5 || VAR_6[VAR_7 + 1] != 5)
    continue;
   VAR_4->t_curattr.ta_fgcolor = VAR_6[VAR_7 + 2];
   VAR_7 += 2;
   break;
  case 39:
   VAR_4->t_curattr.ta_fgcolor = VAR_4->t_defattr.ta_fgcolor;
   break;
  case 40:
  case 41:
  case 42:
  case 43:
  case 44:
  case 45:
  case 46:
  case 47:
   VAR_4->t_curattr.ta_bgcolor = VAR_8 - 40;
   break;
  case 48:
   if (VAR_7 + 2 >= VAR_5 || VAR_6[VAR_7 + 1] != 5)
    continue;
   VAR_4->t_curattr.ta_bgcolor = VAR_6[VAR_7 + 2];
   VAR_7 += 2;
   break;
  case 49:
   VAR_4->t_curattr.ta_bgcolor = VAR_4->t_defattr.ta_bgcolor;
   break;
  case 90:
  case 91:
  case 92:
  case 93:
  case 94:
  case 95:
  case 96:
  case 97:
   VAR_4->t_curattr.ta_fgcolor = (VAR_8 - 90) + 8;
   break;
  case 100:
  case 101:
  case 102:
  case 103:
  case 104:
  case 105:
  case 106:
  case 107:
   VAR_4->t_curattr.ta_bgcolor = (VAR_8 - 100) + 8;
   break;
  default:
   FUNC_0("unsupported attribute %u\n", VAR_8);
  }
 }
}
