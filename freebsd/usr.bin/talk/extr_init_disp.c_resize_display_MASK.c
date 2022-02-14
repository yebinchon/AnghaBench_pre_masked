
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct winsize {int ws_row; scalar_t__ ws_col; } ;
struct TYPE_4__ {int x_nlines; scalar_t__ x_ncols; int x_win; } ;
struct TYPE_3__ {int x_nlines; scalar_t__ x_ncols; int x_win; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char,char) ;
 int FUNC_1 (int ,int ) ;
 TYPE_2__ VAR_5 ;
 scalar_t__ FUNC_2 (int ,int ,struct winsize*) ;
 int VAR_6 ;
 int FUNC_3 (int ,int,int ) ;
 TYPE_1__ VAR_7 ;
 int FUNC_4 (int,scalar_t__) ;
 int FUNC_5 (int ,char,scalar_t__) ;
 int FUNC_6 (int ,int,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int,scalar_t__) ;

void
FUNC_9(void)
{
 struct winsize VAR_8;

 if (FUNC_2(VAR_2, VAR_3, &VAR_8) < 0 ||
     (VAR_8.ws_row == VAR_1 && VAR_8.ws_col == VAR_0))
  return;


 FUNC_4(VAR_8.ws_row, VAR_8.ws_col);





 VAR_7.x_nlines = VAR_1 / 2;
 VAR_7.x_ncols = VAR_0;
 FUNC_8(VAR_7.x_win, VAR_7.x_nlines, VAR_7.x_ncols);
 FUNC_3(VAR_7.x_win, 0, 0);
 FUNC_1(VAR_7.x_win, VAR_4);

 VAR_5.x_nlines = VAR_1 / 2 - 1;
 VAR_5.x_ncols = VAR_0;
 FUNC_8(VAR_5.x_win, VAR_5.x_nlines, VAR_5.x_ncols);
 FUNC_3(VAR_5.x_win, VAR_7.x_nlines + 1, 0);
 FUNC_1(VAR_5.x_win, VAR_4);

 FUNC_8(VAR_6, 1, VAR_0);
 FUNC_3(VAR_6, VAR_7.x_nlines, 0);



 FUNC_6(VAR_6, VAR_7.x_nlines, 0);
 FUNC_0(VAR_6, '-', '-');



 FUNC_7(VAR_5.x_win);
 FUNC_7(VAR_6);
 FUNC_7(VAR_7.x_win);
}
