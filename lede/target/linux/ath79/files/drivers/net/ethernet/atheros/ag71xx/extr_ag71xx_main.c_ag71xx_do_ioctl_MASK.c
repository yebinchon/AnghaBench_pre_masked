
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dev_addr; } ;
struct ifreq {scalar_t__ ifr_data; } ;
struct ag71xx {int * phy_dev; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;






 int FUNC_0 (int ,scalar_t__,int) ;
 int FUNC_1 (scalar_t__,int ,int) ;
 struct ag71xx* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *,void*) ;
 int FUNC_4 (int *,struct ifreq*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_2, struct ifreq *VAR_3, int VAR_4)
{
 struct ag71xx *VAR_5 = FUNC_2(VAR_2);
 int VAR_6;

 switch (VAR_4) {
 case 133:
  if (VAR_5->phy_dev == ((void*)0))
   break;

  FUNC_5(&VAR_5->lock);
  VAR_6 = FUNC_3(VAR_5->phy_dev, (void *) VAR_3->ifr_data);
  FUNC_6(&VAR_5->lock);
  return VAR_6;

 case 129:
  if (FUNC_0
   (VAR_2->dev_addr, VAR_3->ifr_data, sizeof(VAR_2->dev_addr)))
   return -VAR_0;
  return 0;

 case 132:
  if (FUNC_1
   (VAR_3->ifr_data, VAR_2->dev_addr, sizeof(VAR_2->dev_addr)))
   return -VAR_0;
  return 0;

 case 131:
 case 130:
 case 128:
  if (VAR_5->phy_dev == ((void*)0))
   break;

  return FUNC_4(VAR_5->phy_dev, VAR_3, VAR_4);

 default:
  break;
 }

 return -VAR_1;
}
