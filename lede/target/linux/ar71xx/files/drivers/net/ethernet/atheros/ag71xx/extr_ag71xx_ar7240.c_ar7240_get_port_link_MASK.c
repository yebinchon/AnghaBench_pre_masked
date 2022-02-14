
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct switch_port_link {int aneg; int link; int duplex; int tx_flow; int rx_flow; int speed; } ;
struct switch_dev {int dummy; } ;
struct mii_bus {int dummy; } ;
struct ar7240sw {struct mii_bus* mii_bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct mii_bus*,int ) ;
 struct ar7240sw* FUNC_2 (struct switch_dev*) ;

__attribute__((used)) static int
FUNC_3(struct switch_dev *VAR_11, int VAR_12,
       struct switch_port_link *VAR_13)
{
 struct ar7240sw *VAR_14 = FUNC_2(VAR_11);
 struct mii_bus *VAR_15 = VAR_14->mii_bus;
 u32 VAR_16;

 if (VAR_12 >= VAR_0)
  return -VAR_7;

 VAR_16 = FUNC_1(VAR_15, FUNC_0(VAR_12));
 VAR_13->aneg = !!(VAR_16 & VAR_2);
 if (VAR_13->aneg) {
  VAR_13->link = !!(VAR_16 & VAR_3);
  if (!VAR_13->link)
   return 0;
 } else {
  VAR_13->link = 1;
 }

 VAR_13->duplex = !!(VAR_16 & VAR_1);
 VAR_13->tx_flow = !!(VAR_16 & VAR_6);
 VAR_13->rx_flow = !!(VAR_16 & VAR_4);
 switch (VAR_16 & VAR_5) {
 case 130:
  VAR_13->speed = VAR_8;
  break;
 case 129:
  VAR_13->speed = VAR_9;
  break;
 case 128:
  VAR_13->speed = VAR_10;
  break;
 }

 return 0;
}
