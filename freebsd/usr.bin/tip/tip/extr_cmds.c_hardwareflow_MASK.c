
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

__attribute__((used)) static void
FUNC_3(char *VAR_3)
{
 struct termios VAR_4;

 FUNC_1(VAR_1, &VAR_4);
 if (FUNC_0(VAR_3, "on") == 0)
  VAR_4.c_iflag |= VAR_0;
 else
  VAR_4.c_iflag &= ~VAR_0;
 FUNC_2(VAR_1, VAR_2, &VAR_4);
}
