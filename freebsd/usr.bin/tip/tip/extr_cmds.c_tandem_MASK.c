
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct termios {int c_iflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*,char*) ;
 int FUNC_1 (int ,struct termios*) ;
 int FUNC_2 (int ,int ,struct termios*) ;
 struct termios VAR_3 ;

__attribute__((used)) static void
FUNC_3(char *VAR_4)
{
 struct termios VAR_5;

 FUNC_1(VAR_0, &VAR_5);
 if (FUNC_0(VAR_4, "on") == 0) {
  VAR_5.c_iflag |= VAR_1;
  VAR_3.c_iflag |= VAR_1;
 } else {
  VAR_5.c_iflag &= ~VAR_1;
  VAR_3.c_iflag &= ~VAR_1;
 }
 FUNC_2(VAR_0, VAR_2, &VAR_5);
 FUNC_2(0, VAR_2, &VAR_3);
}
