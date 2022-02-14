
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reset_control {int dummy; } ;
struct phy {int dummy; } ;
struct oxnas_pcie_phy {int dev; int sys_ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct reset_control*) ;
 int FUNC_1 (struct reset_control*) ;
 int VAR_2 ;
 int FUNC_2 (int ,char*,int) ;
 struct oxnas_pcie_phy* FUNC_3 (struct phy*) ;
 int FUNC_4 (int ,int ,int) ;
 struct reset_control* FUNC_5 (int ,char*) ;
 int FUNC_6 (struct reset_control*) ;
 int FUNC_7 (struct reset_control*) ;

__attribute__((used)) static int FUNC_8(struct phy *VAR_3)
{
 struct oxnas_pcie_phy *VAR_4 = FUNC_3(VAR_3);
 struct reset_control *VAR_5;
 int VAR_6;


 FUNC_4(VAR_4->sys_ctrl, VAR_2, VAR_0|VAR_1);


 VAR_5 = FUNC_5(VAR_4->dev, "phy");
 if (FUNC_0(VAR_5)) {
  VAR_6 = FUNC_1(VAR_5);
 } else {
  VAR_6 = FUNC_7(VAR_5);
  FUNC_6(VAR_5);
 }

 if (VAR_6) {
  FUNC_2(VAR_4->dev, "phy reset failed %d\n", VAR_6);
  return VAR_6;
 }

 return 0;
}
