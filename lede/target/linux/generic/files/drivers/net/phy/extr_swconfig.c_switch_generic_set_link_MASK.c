
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct switch_port_link {int speed; scalar_t__ duplex; scalar_t__ aneg; } ;
struct switch_dev {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* phy_write16 ) (struct switch_dev*,int,int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct switch_dev*,int,int ,int) ;
 int FUNC_2 (struct switch_dev*,int,int ,int) ;
 int FUNC_3 (struct switch_dev*,int,int ,int) ;

int
FUNC_4(struct switch_dev *VAR_7, int VAR_8,
   struct switch_port_link *VAR_9)
{
 if (FUNC_0(!VAR_7->ops->phy_write16))
  return -VAR_5;


 if (VAR_9->aneg) {
  VAR_7->ops->phy_write16(VAR_7, VAR_8, VAR_6, 0x0000);
  VAR_7->ops->phy_write16(VAR_7, VAR_8, VAR_6, VAR_0 | VAR_1);
 } else {
  u16 VAR_10 = 0;

  if (VAR_9->duplex)
   VAR_10 |= VAR_2;

  switch (VAR_9->speed) {
  case 130:
   break;
  case 129:
   VAR_10 |= VAR_3;
   break;
  case 128:
   VAR_10 |= VAR_4;
   break;
  default:
   return -VAR_5;
  }

  VAR_7->ops->phy_write16(VAR_7, VAR_8, VAR_6, VAR_10);
 }

 return 0;
}
