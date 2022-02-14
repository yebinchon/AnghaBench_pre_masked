
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ps2dev {int nak; int flags; int wait; scalar_t__ cmdcnt; TYPE_1__* serio; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct ps2dev*,int) ;
 int FUNC_2 (int *) ;

bool FUNC_3(struct ps2dev *VAR_6, u8 VAR_7)
{
 switch (VAR_7) {
 case 130:
  VAR_6->nak = 0;
  break;

 case 128:
  VAR_6->flags |= VAR_4;
  VAR_6->nak = 128;
  break;

 case 129:
  if (VAR_6->flags & VAR_4) {
   VAR_6->flags &= ~VAR_4;
   VAR_6->nak = 129;
   break;
  }






 case 0x00:
 case 0x03:
 case 0x04:
  if (VAR_6->flags & VAR_5) {
   VAR_6->nak = 0;
   break;
  }

 default:
  FUNC_0(&VAR_6->serio->dev, "unexpected %#02x\n", VAR_7);
  VAR_6->flags &= ~VAR_5;
  return VAR_6->flags & VAR_1;
 }

 if (!VAR_6->nak) {
  VAR_6->flags &= ~VAR_4;
  if (VAR_6->cmdcnt)
   VAR_6->flags |= VAR_2 | VAR_3;
 }

 VAR_6->flags &= ~VAR_0;
 FUNC_2(&VAR_6->wait);

 if (VAR_7 != 130)
  FUNC_1(VAR_6, VAR_7);

 return 1;
}
