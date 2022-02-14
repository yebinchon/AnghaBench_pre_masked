
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union extcon_property_value {int intval; } ;
struct cdn_dp_port {int phy_enabled; int phy; int id; int lanes; int extcon; } ;
struct cdn_dp_device {int dev; int active_port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct cdn_dp_device*) ;
 int FUNC_2 (struct cdn_dp_port*) ;
 int FUNC_3 (struct cdn_dp_device*,int ,int) ;
 int FUNC_4 (struct cdn_dp_device*,int ,int ) ;
 int FUNC_5 (int ,int ,int ,union extcon_property_value*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct cdn_dp_device *VAR_6, struct cdn_dp_port *VAR_7)
{
 union extcon_property_value VAR_8;
 int VAR_9;

 if (!VAR_7->phy_enabled) {
  VAR_9 = FUNC_7(VAR_7->phy);
  if (VAR_9) {
   FUNC_0(VAR_6->dev, "phy power on failed: %d\n",
          VAR_9);
   goto err_phy;
  }
  VAR_7->phy_enabled = 1;
 }

 VAR_9 = FUNC_3(VAR_6, VAR_5,
          VAR_2 | VAR_1);
 if (VAR_9) {
  FUNC_0(VAR_6->dev, "Failed to write HPD_SEL %d\n", VAR_9);
  goto err_power_on;
 }

 VAR_9 = FUNC_1(VAR_6);
 if (VAR_9 <= 0) {
  if (!VAR_9)
   FUNC_0(VAR_6->dev, "hpd does not exist\n");
  goto err_power_on;
 }

 VAR_9 = FUNC_5(VAR_7->extcon, VAR_3,
      VAR_4, &VAR_8);
 if (VAR_9) {
  FUNC_0(VAR_6->dev, "get property failed\n");
  goto err_power_on;
 }

 VAR_7->lanes = FUNC_2(VAR_7);
 VAR_9 = FUNC_4(VAR_6, VAR_7->lanes, VAR_8.intval);
 if (VAR_9) {
  FUNC_0(VAR_6->dev, "set host capabilities failed: %d\n",
         VAR_9);
  goto err_power_on;
 }

 VAR_6->active_port = VAR_7->id;
 return 0;

err_power_on:
 if (FUNC_6(VAR_7->phy))
  FUNC_0(VAR_6->dev, "phy power off failed: %d", VAR_9);
 else
  VAR_7->phy_enabled = 0;

err_phy:
 FUNC_3(VAR_6, VAR_5,
    VAR_2 | VAR_0);
 return VAR_9;
}
