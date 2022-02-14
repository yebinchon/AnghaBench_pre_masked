
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdn_dp_port {int phy_enabled; scalar_t__ lanes; int phy; } ;
struct cdn_dp_device {int active_port; int dev; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct cdn_dp_device *VAR_0,
         struct cdn_dp_port *VAR_1)
{
 int VAR_2;

 if (VAR_1->phy_enabled) {
  VAR_2 = FUNC_1(VAR_1->phy);
  if (VAR_2) {
   FUNC_0(VAR_0->dev, "phy power off failed: %d", VAR_2);
   return VAR_2;
  }
 }

 VAR_1->phy_enabled = 0;
 VAR_1->lanes = 0;
 VAR_0->active_port = -1;
 return 0;
}
