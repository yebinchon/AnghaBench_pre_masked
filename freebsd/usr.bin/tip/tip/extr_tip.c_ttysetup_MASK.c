
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct termios {int c_cflag; int c_iflag; int c_lflag; int* c_cc; int c_oflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct termios*,int) ;
 scalar_t__ FUNC_2 (int ,struct termios*) ;
 int FUNC_3 (int ,int ,struct termios*) ;
 int FUNC_4 (int ) ;

int
FUNC_5(int VAR_20)
{
 struct termios VAR_21;

 if (FUNC_2(VAR_6, &VAR_21))
  return (-1);
 FUNC_1(&VAR_21, VAR_20);
 VAR_21.c_cflag &= ~(VAR_3|VAR_15);
 VAR_21.c_cflag |= VAR_2;
 if (FUNC_0(FUNC_4(VAR_4)))
  VAR_21.c_cflag |= VAR_0;
 if (FUNC_0(FUNC_4(VAR_7)))
  VAR_21.c_cflag |= VAR_1;
 VAR_21.c_iflag &= ~(VAR_12|VAR_9);
 VAR_21.c_oflag &= ~VAR_14;
 VAR_21.c_lflag &= ~(VAR_8|VAR_11|VAR_10|VAR_5);
 VAR_21.c_cc[VAR_18] = 1;
 VAR_21.c_cc[VAR_19] = 0;
 if (FUNC_0(FUNC_4(VAR_16)))
  VAR_21.c_iflag |= VAR_13;
 return (FUNC_3(VAR_6, VAR_17, &VAR_21));
}
