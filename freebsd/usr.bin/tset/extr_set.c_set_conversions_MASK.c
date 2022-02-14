
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int c_iflag; int c_lflag; int c_oflag; int c_cflag; } ;


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
 TYPE_1__ VAR_13 ;
 scalar_t__ FUNC_0 (char*) ;

void
FUNC_1(int VAR_14)
{
 if (FUNC_0("UC") || VAR_14) {




 } else if (FUNC_0("LC")) {




 }
 VAR_13.c_iflag &= ~(VAR_11 | VAR_5);
 VAR_13.c_lflag |= VAR_3;
 if (FUNC_0("EP")) {
  VAR_13.c_cflag |= VAR_10;
  VAR_13.c_cflag &= ~VAR_12;
 }
 if (FUNC_0("OP")) {
  VAR_13.c_cflag |= VAR_10;
  VAR_13.c_cflag |= VAR_12;
 }




 VAR_13.c_iflag |= VAR_4;
 VAR_13.c_lflag |= VAR_0;
 VAR_13.c_oflag |= VAR_9;
 if (FUNC_0("NL")) {



  VAR_13.c_iflag &= ~VAR_4;
 }
 if (FUNC_0("HD"))
  VAR_13.c_lflag &= ~VAR_0;
 if (FUNC_0("pt"))
  VAR_13.c_oflag &= ~VAR_9;
 VAR_13.c_lflag |= (VAR_1 | VAR_2);
}
