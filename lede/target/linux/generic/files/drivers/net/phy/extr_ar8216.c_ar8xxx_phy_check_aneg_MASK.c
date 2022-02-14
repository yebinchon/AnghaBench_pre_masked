
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct phy_device {scalar_t__ autoneg; TYPE_1__ mdio; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct phy_device*,int ) ;
 int FUNC_2 (struct phy_device*,int ,int) ;

__attribute__((used)) static int
FUNC_3(struct phy_device *VAR_4)
{
 int VAR_5;

 if (VAR_4->autoneg != VAR_0)
  return 0;





 VAR_5 = FUNC_1(VAR_4, VAR_3);
 if (VAR_5 < 0)
  return VAR_5;
 if (VAR_5 & VAR_1)
  return 0;

 FUNC_0(&VAR_4->mdio.dev, "ANEG disabled, re-enabling ...\n");
 VAR_5 |= VAR_1 | VAR_2;
 return FUNC_2(VAR_4, VAR_3, VAR_5);
}
