
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct winsize {int ws_row; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,struct winsize*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;

void
FUNC_3(void)
{
 int VAR_7;
 struct winsize VAR_8;

 for (;;) {
  VAR_7 = FUNC_2(FUNC_1(VAR_4), VAR_2, &VAR_8);
  if (VAR_7 == -1 && VAR_3 == VAR_0)
   continue;
  else if (VAR_7 == -1)
   FUNC_0(1, "ioctl");
  if (VAR_8.ws_row > 3)
   VAR_6 = VAR_8.ws_row - 3;
  else
   VAR_6 = VAR_1;
  break;
 }




 VAR_5 = 0;
}
