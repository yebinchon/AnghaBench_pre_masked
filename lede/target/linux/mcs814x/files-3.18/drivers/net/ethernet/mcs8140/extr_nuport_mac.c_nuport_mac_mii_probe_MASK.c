
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct phy_device {int addr; TYPE_2__* drv; int supported; int advertising; } ;
struct nuport_mac_priv {int old_link; int ephy_clk; TYPE_1__* pdev; int old_duplex; struct phy_device* phydev; int phy_interface; int phy_node; int mii_bus; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int name; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct phy_device*) ;
 int VAR_2 ;
 int FUNC_1 (struct phy_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,char*,int ,int ) ;
 int FUNC_5 (struct net_device*,char*) ;
 struct nuport_mac_priv* FUNC_6 (struct net_device*) ;
 int VAR_3 ;
 struct phy_device* FUNC_7 (struct net_device*,int ,int ,int ,int ) ;
 struct phy_device* FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_4)
{
 struct nuport_mac_priv *VAR_5 = FUNC_6(VAR_4);
 struct phy_device *VAR_6 = ((void*)0);
 int VAR_7;

 VAR_7 = FUNC_3(VAR_5->ephy_clk);
 if (VAR_7) {
  FUNC_5(VAR_4, "unable to enable ePHY clk\n");
  return VAR_7;
 }

 VAR_6 = FUNC_8(VAR_5->mii_bus);
 if (!VAR_6) {
  FUNC_5(VAR_4, "no PHYs found\n");
  VAR_7 = -VAR_1;
  goto out;
 }

 VAR_6 = FUNC_7(VAR_4, VAR_5->phy_node,
   VAR_3, 0,
   VAR_5->phy_interface);
 if (FUNC_0(VAR_6)) {
  FUNC_5(VAR_4, "could not attach PHY\n");
  VAR_7 = FUNC_1(VAR_6);
  goto out;
 }

 VAR_6->supported &= VAR_2;
 VAR_6->advertising = VAR_6->supported;
 VAR_5->phydev = VAR_6;
 VAR_5->old_link = 1;
 VAR_5->old_duplex = VAR_0;

 FUNC_4(&VAR_5->pdev->dev, "attached PHY driver [%s] "
  "(mii_bus:phy_addr=%d)\n",
  VAR_6->drv->name, VAR_6->addr);

 return 0;

out:

 FUNC_2(VAR_5->ephy_clk);

 return VAR_7;
}
