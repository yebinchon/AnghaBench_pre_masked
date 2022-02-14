
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {unsigned int c_cflag; } ;
struct tty_struct {TYPE_3__ termios; struct ipoctal_channel* driver_data; } ;
struct ktermios {int dummy; } ;
struct ipoctal_channel {int board_id; TYPE_2__* regs; scalar_t__ rx_enable; } ;
typedef int speed_t ;
struct TYPE_4__ {int cr; int csr; int mr; } ;
struct TYPE_5__ {TYPE_1__ w; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned char VAR_2 ;



 unsigned int VAR_3 ;
 unsigned int VAR_4 ;



 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 unsigned char VAR_9 ;
 unsigned char VAR_10 ;
 unsigned char VAR_11 ;
 unsigned char VAR_12 ;
 unsigned char VAR_13 ;
 unsigned char VAR_14 ;
 unsigned char VAR_15 ;
 unsigned char VAR_16 ;
 unsigned char VAR_17 ;
 unsigned char VAR_18 ;
 unsigned char VAR_19 ;
 unsigned char VAR_20 ;
 unsigned char VAR_21 ;
 unsigned int VAR_22 ;
 unsigned int VAR_23 ;
 unsigned char VAR_24 ;
 unsigned char VAR_25 ;
 unsigned char VAR_26 ;
 unsigned char VAR_27 ;
 unsigned char VAR_28 ;
 unsigned char VAR_29 ;
 unsigned char VAR_30 ;
 unsigned char VAR_31 ;
 unsigned char VAR_32 ;
 unsigned char VAR_33 ;
 unsigned char VAR_34 ;
 unsigned char VAR_35 ;
 unsigned char VAR_36 ;
 unsigned char VAR_37 ;
 unsigned char VAR_38 ;
 unsigned char VAR_39 ;
 unsigned char VAR_40 ;
 unsigned char VAR_41 ;
 unsigned char VAR_42 ;
 unsigned char VAR_43 ;
 unsigned char VAR_44 ;
 unsigned char VAR_45 ;
 unsigned char VAR_46 ;
 unsigned char VAR_47 ;
 unsigned char VAR_48 ;
 unsigned char VAR_49 ;
 int FUNC_0 (unsigned char,int *) ;
 int FUNC_1 (struct ipoctal_channel*) ;
 int FUNC_2 (struct tty_struct*) ;
 int FUNC_3 (TYPE_3__*,int,int) ;

__attribute__((used)) static void FUNC_4(struct tty_struct *VAR_50,
    struct ktermios *VAR_51)
{
 unsigned int VAR_52;
 unsigned char VAR_53 = 0;
 unsigned char VAR_54 = 0;
 unsigned char VAR_55 = 0;
 struct ipoctal_channel *VAR_56 = VAR_50->driver_data;
 speed_t VAR_57;

 VAR_52 = VAR_50->termios.c_cflag;


 FUNC_1(VAR_56);


 switch (VAR_52 & VAR_3) {
 case 133:
  VAR_53 |= VAR_5;
  break;
 case 132:
  VAR_53 |= VAR_6;
  break;
 case 131:
 default:
  VAR_53 |= VAR_7;

  VAR_50->termios.c_cflag = (VAR_52 & ~VAR_3) | 131;
  break;
 }


 if (VAR_52 & VAR_22)
  if (VAR_52 & VAR_23)
   VAR_53 |= VAR_12 | VAR_10;
  else
   VAR_53 |= VAR_12 | VAR_9;
 else
  VAR_53 |= VAR_11;


 VAR_50->termios.c_cflag &= ~VAR_0;


 if (VAR_52 & VAR_4)
  VAR_54 |= VAR_19;
 else
  VAR_54 |= VAR_18;


 switch (VAR_56->board_id) {
 case 130:
  if (VAR_52 & VAR_1) {
   VAR_53 |= VAR_15;
   VAR_54 |= VAR_20 | VAR_17;
  } else {
   VAR_53 |= VAR_14;
   VAR_54 |= VAR_20 | VAR_16;
  }
  break;
 case 129:
  VAR_53 |= VAR_14;
  VAR_54 |= VAR_20 | VAR_16;
  break;
 case 128:
  VAR_53 |= VAR_14;
  VAR_54 |= VAR_21 | VAR_16;
  break;
 default:
  return;
  break;
 }

 VAR_57 = FUNC_2(VAR_50);
 FUNC_3(&VAR_50->termios, VAR_57, VAR_57);


 switch (VAR_57) {
 case 75:
  VAR_55 |= VAR_48 | VAR_35;
  break;
 case 110:
  VAR_55 |= VAR_37 | VAR_24;
  break;
 case 150:
  VAR_55 |= VAR_39 | VAR_26;
  break;
 case 300:
  VAR_55 |= VAR_44 | VAR_31;
  break;
 case 600:
  VAR_55 |= VAR_47 | VAR_34;
  break;
 case 1200:
  VAR_55 |= VAR_38 | VAR_25;
  break;
 case 1800:
  VAR_55 |= VAR_40 | VAR_27;
  break;
 case 2000:
  VAR_55 |= VAR_42 | VAR_29;
  break;
 case 2400:
  VAR_55 |= VAR_43 | VAR_30;
  break;
 case 4800:
  VAR_55 |= VAR_46 | VAR_33;
  break;
 case 9600:
  VAR_55 |= VAR_49 | VAR_36;
  break;
 case 19200:
  VAR_55 |= VAR_41 | VAR_28;
  break;
 case 38400:
 default:
  VAR_55 |= VAR_45 | VAR_32;

  FUNC_3(&VAR_50->termios, 38400, 38400);
  break;
 }

 VAR_53 |= VAR_8;
 VAR_53 |= VAR_13;


 FUNC_0(VAR_53, &VAR_56->regs->w.mr);
 FUNC_0(VAR_54, &VAR_56->regs->w.mr);
 FUNC_0(VAR_55, &VAR_56->regs->w.csr);


 if (VAR_56->rx_enable)
  FUNC_0(VAR_2, &VAR_56->regs->w.cr);
}
