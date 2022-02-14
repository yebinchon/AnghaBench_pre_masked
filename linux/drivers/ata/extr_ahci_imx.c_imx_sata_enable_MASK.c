
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct imx_ahci_priv {scalar_t__ type; int phy_params; int sata_ref_clk; int gpr; scalar_t__ no_device; TYPE_1__* ahci_pdev; } ;
struct device {int dummy; } ;
struct ahci_host_priv {struct imx_ahci_priv* plat_data; } ;
struct TYPE_2__ {struct device dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct ahci_host_priv*) ;
 int FUNC_1 (struct ahci_host_priv*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct device*,char*,int) ;
 int FUNC_5 (struct ahci_host_priv*) ;
 int FUNC_6 (struct ahci_host_priv*) ;
 int FUNC_7 (int ,int ,int,int) ;
 int FUNC_8 (int,int) ;

__attribute__((used)) static int FUNC_9(struct ahci_host_priv *VAR_14)
{
 struct imx_ahci_priv *VAR_15 = VAR_14->plat_data;
 struct device *VAR_16 = &VAR_15->ahci_pdev->dev;
 int VAR_17;

 if (VAR_15->no_device)
  return 0;

 VAR_17 = FUNC_1(VAR_14);
 if (VAR_17)
  return VAR_17;

 VAR_17 = FUNC_3(VAR_15->sata_ref_clk);
 if (VAR_17 < 0)
  goto disable_regulator;

 if (VAR_15->type == VAR_0 || VAR_15->type == VAR_1) {






  FUNC_7(VAR_15->gpr, VAR_13,
       VAR_6 |
       VAR_7 |
       VAR_5 |
       VAR_8 |
       VAR_4 |
       VAR_9 |
       VAR_10 |
       VAR_12 |
       VAR_3 |
       VAR_11,
       VAR_15->phy_params);
  FUNC_7(VAR_15->gpr, VAR_13,
       VAR_3,
       VAR_3);

  FUNC_8(100, 200);

  VAR_17 = FUNC_6(VAR_14);
  if (VAR_17) {
   FUNC_4(VAR_16, "failed to reset phy: %d\n", VAR_17);
   goto disable_clk;
  }
 } else if (VAR_15->type == VAR_2) {
  VAR_17 = FUNC_5(VAR_14);
 }

 FUNC_8(1000, 2000);

 return 0;

disable_clk:
 FUNC_2(VAR_15->sata_ref_clk);
disable_regulator:
 FUNC_0(VAR_14);

 return VAR_17;
}
