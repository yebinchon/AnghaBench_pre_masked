
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct winsize {scalar_t__ ws_col; scalar_t__ ws_row; } ;
struct termios {int dummy; } ;
typedef scalar_t__ speed_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct termios*) ;
 scalar_t__ FUNC_1 (int,int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_2 (int,struct termios*) ;

void
FUNC_3(void)
{
 struct termios VAR_6;
 struct winsize VAR_7;
 speed_t VAR_8;

 if (FUNC_1(1, VAR_2, (char *)&VAR_7) < 0)
  VAR_7.ws_col = VAR_7.ws_row = 0;
 if (FUNC_2(1, &VAR_6) < 0)
  VAR_8 = VAR_1;
 else
  VAR_8 = FUNC_0(&VAR_6);
 if (VAR_8 < VAR_0)
  VAR_4 = 9;
 else if (VAR_8 == VAR_0)
  VAR_4 = 14;
 else if (VAR_7.ws_row != 0)
  VAR_4 = VAR_7.ws_row;
 else
  VAR_4 = 24;
 if ((VAR_3 = VAR_7.ws_row) == 0)
  VAR_3 = 24;
 if ((VAR_5 = VAR_7.ws_col) == 0)
  VAR_5 = 80;
}
