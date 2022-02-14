
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ tcflag_t ;
struct termios {int c_iflag; int* c_cc; scalar_t__ c_cflag; scalar_t__ c_lflag; scalar_t__ c_oflag; } ;
struct TYPE_2__ {scalar_t__ rtype; int mfd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int FUNC_0 (struct termios*,int ) ;
 int FUNC_1 (struct termios*,int ) ;
 int FUNC_2 (char*) ;
 TYPE_1__ VAR_11 ;
 scalar_t__ FUNC_3 (int ,struct termios*) ;
 scalar_t__ FUNC_4 (int ,int ,struct termios*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,char const*,int) ;

__attribute__((used)) static void
FUNC_7(int VAR_12, int VAR_13, unsigned VAR_14)
{
 struct termios VAR_15;
 const char *VAR_16;

 if (FUNC_3(VAR_11.mfd, &VAR_15) < 0)
 {
  FUNC_2("unable to get status of mouse fd");
  return;
 }

 VAR_15.c_iflag = VAR_4 | VAR_5;
 VAR_15.c_oflag = 0;
 VAR_15.c_lflag = 0;
 VAR_15.c_cflag = (tcflag_t)VAR_14;
 VAR_15.c_cc[VAR_10] = 0;
 VAR_15.c_cc[VAR_9] = 1;

 switch (VAR_12)
 {
 case 9600:
  FUNC_0(&VAR_15, VAR_3);
  FUNC_1(&VAR_15, VAR_3);
  break;
 case 4800:
  FUNC_0(&VAR_15, VAR_2);
  FUNC_1(&VAR_15, VAR_2);
  break;
 case 2400:
  FUNC_0(&VAR_15, VAR_1);
  FUNC_1(&VAR_15, VAR_1);
  break;
 case 1200:
 default:
  FUNC_0(&VAR_15, VAR_0);
  FUNC_1(&VAR_15, VAR_0);
 }

 if (FUNC_4(VAR_11.mfd, VAR_8, &VAR_15) < 0)
 {
  FUNC_2("unable to set status of mouse fd");
  return;
 }

 switch (VAR_13)
 {
 case 9600:
  VAR_16 = "*q";
  FUNC_0(&VAR_15, VAR_3);
  FUNC_1(&VAR_15, VAR_3);
  break;
 case 4800:
  VAR_16 = "*p";
  FUNC_0(&VAR_15, VAR_2);
  FUNC_1(&VAR_15, VAR_2);
  break;
 case 2400:
  VAR_16 = "*o";
  FUNC_0(&VAR_15, VAR_1);
  FUNC_1(&VAR_15, VAR_1);
  break;
 case 1200:
 default:
  VAR_16 = "*n";
  FUNC_0(&VAR_15, VAR_0);
  FUNC_1(&VAR_15, VAR_0);
 }

 if (VAR_11.rtype == VAR_7
     || VAR_11.rtype == VAR_6)
 {
  if (FUNC_6(VAR_11.mfd, VAR_16, 2) != 2)
  {
   FUNC_2("unable to write to mouse fd");
   return;
  }
 }
 FUNC_5(100000);

 if (FUNC_4(VAR_11.mfd, VAR_8, &VAR_15) < 0)
  FUNC_2("unable to set status of mouse fd");
}
