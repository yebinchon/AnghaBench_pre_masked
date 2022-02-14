
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int kill; int cerase; int werase; int x_col; int x_win; int x_line; } ;
typedef TYPE_1__ xwin_t ;
typedef int wchar_t ;
struct TYPE_6__ {int x_col; int x_win; int x_line; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int) ;
 TYPE_3__ VAR_2 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int ) ;
 TYPE_1__ VAR_3 ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,char) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int*,int) ;

void
FUNC_13(xwin_t *VAR_4, wchar_t *VAR_5)
{





 if (*VAR_5 == VAR_4->kill)
  goto kill;
 else if (*VAR_5 == VAR_4->cerase)
  goto cerase;
 else if (*VAR_5 == VAR_4->werase)
  goto werase;

 switch (*VAR_5) {
 case L'\n':
 case L'\r':
  FUNC_6(VAR_4->x_win, FUNC_3(L'\n'));
  FUNC_1(VAR_4->x_win, VAR_4->x_line, VAR_4->x_col);
  FUNC_11(VAR_4->x_win);
  return;

 case 004:
  if (VAR_4 == &VAR_3) {

   FUNC_9(VAR_3.x_win);
   FUNC_1(VAR_3.x_win, VAR_3.x_line, VAR_3.x_col);
   FUNC_11(VAR_3.x_win);
   FUNC_9(VAR_2.x_win);
   FUNC_1(VAR_2.x_win, VAR_2.x_line, VAR_2.x_col);
   FUNC_11(VAR_2.x_win);
  }
  return;


 case 010:
 case 0177:
cerase:
  FUNC_10(VAR_4->x_win, VAR_4->x_line, FUNC_4(--VAR_4->x_col, 0));
  FUNC_1(VAR_4->x_win, VAR_4->x_line, VAR_4->x_col);
  FUNC_7(VAR_4->x_win, ' ');
  FUNC_10(VAR_4->x_win, VAR_4->x_line, VAR_4->x_col);
  FUNC_1(VAR_4->x_win, VAR_4->x_line, VAR_4->x_col);
  FUNC_11(VAR_4->x_win);
  return;

 case 027:
werase:
     {





  int VAR_6, VAR_7, VAR_8;

  VAR_6 = VAR_4->x_col;
  VAR_7 = VAR_6 - 1;
  while (VAR_7 >= 0) {
   VAR_8 = FUNC_5(VAR_4->x_win, VAR_4->x_line, VAR_7);
   if (VAR_8 != ' ')
    break;
   VAR_7--;
  }
  while (VAR_7 >= 0) {
   VAR_8 = FUNC_5(VAR_4->x_win, VAR_4->x_line, VAR_7);
   if (VAR_8 == ' ')
    break;
   VAR_7--;
  }
  FUNC_10(VAR_4->x_win, VAR_4->x_line, VAR_7 + 1);
  for (int VAR_9 = VAR_7 + 1; VAR_9 < VAR_6; VAR_9++)
   FUNC_7(VAR_4->x_win, ' ');
  FUNC_10(VAR_4->x_win, VAR_4->x_line, VAR_7 + 1);
  FUNC_1(VAR_4->x_win, VAR_4->x_line, VAR_4->x_col);
  FUNC_11(VAR_4->x_win);
  return;
     }

 case 025:
kill:
  FUNC_10(VAR_4->x_win, VAR_4->x_line, 0);
  FUNC_8(VAR_4->x_win);
  FUNC_1(VAR_4->x_win, VAR_4->x_line, VAR_4->x_col);
  FUNC_11(VAR_4->x_win);
  return;

 case L'\f':
  if (VAR_4 == &VAR_3)
   FUNC_11(VAR_1);
  return;

 case L'\7':
  FUNC_12(VAR_0, VAR_5, sizeof(*VAR_5));
  return;
 }


 if (FUNC_2(*VAR_5) || *VAR_5 == L'\t')
  FUNC_6(VAR_4->x_win, FUNC_3(*VAR_5));
 else
  FUNC_0();

 FUNC_1(VAR_4->x_win, VAR_4->x_line, VAR_4->x_col);
 FUNC_11(VAR_4->x_win);
}
