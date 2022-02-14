
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct switch_port_link {int link; int aneg; int duplex; int tx_flow; int rx_flow; int speed; } ;
struct switch_dev {int dummy; } ;
struct adm6996_priv {int dummy; } ;


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
 int FUNC_0 (struct adm6996_priv*,int ) ;
 struct adm6996_priv* FUNC_1 (struct switch_dev*) ;

__attribute__((used)) static int
FUNC_2(struct switch_dev *VAR_11, int VAR_12,
  struct switch_port_link *VAR_13)
{
 struct adm6996_priv *VAR_14 = FUNC_1(VAR_11);

 u16 VAR_15 = 0;

 if (VAR_12 >= VAR_0)
  return -VAR_8;

 switch (VAR_12) {
 case 0:
  VAR_15 = FUNC_0(VAR_14, VAR_1);
  break;
 case 1:
  VAR_15 = FUNC_0(VAR_14, VAR_1);
  VAR_15 = VAR_15 >> 8;
  break;
 case 2:
  VAR_15 = FUNC_0(VAR_14, VAR_2);
  break;
 case 3:
  VAR_15 = FUNC_0(VAR_14, VAR_2);
  VAR_15 = VAR_15 >> 8;
  break;
 case 4:
  VAR_15 = FUNC_0(VAR_14, VAR_2);
  VAR_15 = VAR_15 >> 12;
  break;
 case 5:
  VAR_15 = FUNC_0(VAR_14, VAR_3);

  VAR_15 = (VAR_15 & 3) | ((VAR_15 & 24) >> 1);
  break;
 default:
  return -VAR_8;
 }

 VAR_13->link = VAR_15 & VAR_6;
 if (!VAR_13->link)
  return 0;
 VAR_13->aneg = 1;
 VAR_13->duplex = VAR_15 & VAR_4;
 VAR_13->tx_flow = VAR_15 & VAR_5;
 VAR_13->rx_flow = VAR_15 & VAR_5;
 if (VAR_15 & VAR_7)
  VAR_13->speed = VAR_10;
 else
  VAR_13->speed = VAR_9;

 return 0;
}
