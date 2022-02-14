
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct winsize {int ws_row; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,struct winsize*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int,char*) ;

void
FUNC_3(void)
{
 struct winsize VAR_7;
 int VAR_8;

 for (;;) {
  VAR_8 = FUNC_1(FUNC_0(VAR_4), VAR_1, &VAR_7);
  if (VAR_8 == -1 && VAR_3 == VAR_0)
   continue;
  else if (VAR_8 == -1)
   FUNC_2(1, "ioctl");
  if (VAR_7.ws_row > 3)
   VAR_5 = VAR_7.ws_row - 3;
  else
   VAR_5 = VAR_2;
  break;
 }




 VAR_6 = 0;
}
