
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct switch_port_link {int link; int duplex; int rx_flow; int tx_flow; int aneg; int speed; } ;
struct switch_dev {int dummy; } ;
struct rtl8366_smi {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct rtl8366_smi*,int ,int*) ;
 struct rtl8366_smi* FUNC_2 (struct switch_dev*) ;

__attribute__((used)) static int FUNC_3(struct switch_dev *VAR_12,
        int VAR_13,
        struct switch_port_link *VAR_14)
{
 struct rtl8366_smi *VAR_15 = FUNC_2(VAR_12);
 u32 VAR_16 = 0;
 u32 VAR_17;

 if (VAR_13 >= VAR_1)
  return -VAR_0;

 FUNC_1(VAR_15, FUNC_0(VAR_13), &VAR_16);

 VAR_14->link = !!(VAR_16 & VAR_3);
 if (!VAR_14->link)
  return 0;

 VAR_14->duplex = !!(VAR_16 & VAR_2);
 VAR_14->rx_flow = !!(VAR_16 & VAR_5);
 VAR_14->tx_flow = !!(VAR_16 & VAR_7);
 VAR_14->aneg = !!(VAR_16 & VAR_4);

 VAR_17 = (VAR_16 & VAR_6);
 switch (VAR_17) {
 case 0:
  VAR_14->speed = VAR_8;
  break;
 case 1:
  VAR_14->speed = VAR_9;
  break;
 case 2:
  VAR_14->speed = VAR_10;
  break;
 default:
  VAR_14->speed = VAR_11;
  break;
 }

 return 0;
}
