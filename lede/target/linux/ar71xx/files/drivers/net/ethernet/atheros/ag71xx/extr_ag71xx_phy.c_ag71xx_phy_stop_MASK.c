
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ag71xx_platform_data {scalar_t__ switch_data; scalar_t__ mii_bus_dev; } ;
struct ag71xx {int lock; scalar_t__ link; scalar_t__ phy_dev; } ;


 int FUNC_0 (struct ag71xx*) ;
 struct ag71xx_platform_data* FUNC_1 (struct ag71xx*) ;
 int FUNC_2 (struct ag71xx*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

void FUNC_6(struct ag71xx *VAR_0)
{
 struct ag71xx_platform_data *VAR_1 = FUNC_1(VAR_0);
 unsigned long VAR_2;

 if (VAR_0->phy_dev)
  FUNC_3(VAR_0->phy_dev);
 else if (VAR_1->mii_bus_dev && VAR_1->switch_data)
  FUNC_0(VAR_0);

 FUNC_4(&VAR_0->lock, VAR_2);
 if (VAR_0->link) {
  VAR_0->link = 0;
  FUNC_2(VAR_0);
 }
 FUNC_5(&VAR_0->lock, VAR_2);
}
