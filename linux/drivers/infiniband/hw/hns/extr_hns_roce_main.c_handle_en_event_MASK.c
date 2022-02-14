
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct net_device {int dev_addr; } ;
struct TYPE_2__ {struct net_device** netdevs; } ;
struct hns_roce_dev {TYPE_1__ iboe; struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;





 int FUNC_0 (struct device*,char*,int ) ;
 int FUNC_1 (struct device*,char*,size_t) ;
 int FUNC_2 (struct hns_roce_dev*,size_t,int ) ;

__attribute__((used)) static int FUNC_3(struct hns_roce_dev *VAR_1, u8 VAR_2,
      unsigned long VAR_3)
{
 struct device *VAR_4 = VAR_1->dev;
 struct net_device *VAR_5;
 int VAR_6 = 0;

 VAR_5 = VAR_1->iboe.netdevs[VAR_2];
 if (!VAR_5) {
  FUNC_1(VAR_4, "port(%d) can't find netdev\n", VAR_2);
  return -VAR_0;
 }

 switch (VAR_3) {
 case 128:
 case 132:
 case 129:
 case 131:
  VAR_6 = FUNC_2(VAR_1, VAR_2, VAR_5->dev_addr);
  break;
 case 130:



  break;
 default:
  FUNC_0(VAR_4, "NETDEV event = 0x%x!\n", (u32)(VAR_3));
  break;
 }

 return VAR_6;
}
