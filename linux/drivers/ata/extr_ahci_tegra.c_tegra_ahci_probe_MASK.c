
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tegra_ahci_priv {TYPE_2__* supplies; TYPE_1__* soc; struct ahci_host_priv* sata_clk; struct ahci_host_priv* sata_cold_rst; struct ahci_host_priv* sata_oob_rst; struct ahci_host_priv* sata_rst; struct ahci_host_priv* sata_aux_regs; struct ahci_host_priv* sata_regs; struct platform_device* pdev; } ;
struct resource {int dummy; } ;
struct platform_device {int dev; } ;
struct ahci_host_priv {struct tegra_ahci_priv* plat_data; } ;
struct TYPE_5__ {int supply; } ;
struct TYPE_4__ {unsigned int num_supplies; int * supply_names; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct ahci_host_priv*) ;
 int FUNC_1 (struct ahci_host_priv*) ;
 struct ahci_host_priv* FUNC_2 (struct platform_device*,int ) ;
 int FUNC_3 (struct platform_device*,struct ahci_host_priv*,int *,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int *,char*) ;
 struct ahci_host_priv* FUNC_5 (int *,char*) ;
 void* FUNC_6 (int *,struct resource*) ;
 TYPE_2__* FUNC_7 (int *,unsigned int,int,int ) ;
 struct tegra_ahci_priv* FUNC_8 (int *,int,int ) ;
 int FUNC_9 (int *,unsigned int,TYPE_2__*) ;
 void* FUNC_10 (int *,char*) ;
 TYPE_1__* FUNC_11 (int *) ;
 struct resource* FUNC_12 (struct platform_device*,int ,int) ;
 int FUNC_13 (struct ahci_host_priv*) ;
 int FUNC_14 (struct ahci_host_priv*) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_5)
{
 struct ahci_host_priv *VAR_6;
 struct tegra_ahci_priv *VAR_7;
 struct resource *VAR_8;
 int VAR_9;
 unsigned int VAR_10;

 VAR_6 = FUNC_2(VAR_5, 0);
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);

 VAR_7 = FUNC_8(&VAR_5->dev, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_6->plat_data = VAR_7;

 VAR_7->pdev = VAR_5;
 VAR_7->soc = FUNC_11(&VAR_5->dev);

 VAR_8 = FUNC_12(VAR_5, VAR_2, 1);
 VAR_7->sata_regs = FUNC_6(&VAR_5->dev, VAR_8);
 if (FUNC_0(VAR_7->sata_regs))
  return FUNC_1(VAR_7->sata_regs);




 VAR_8 = FUNC_12(VAR_5, VAR_2, 2);
 if (VAR_8) {
  VAR_7->sata_aux_regs = FUNC_6(&VAR_5->dev, VAR_8);
  if (FUNC_0(VAR_7->sata_aux_regs))
   return FUNC_1(VAR_7->sata_aux_regs);
 }

 VAR_7->sata_rst = FUNC_10(&VAR_5->dev, "sata");
 if (FUNC_0(VAR_7->sata_rst)) {
  FUNC_4(&VAR_5->dev, "Failed to get sata reset\n");
  return FUNC_1(VAR_7->sata_rst);
 }

 VAR_7->sata_oob_rst = FUNC_10(&VAR_5->dev, "sata-oob");
 if (FUNC_0(VAR_7->sata_oob_rst)) {
  FUNC_4(&VAR_5->dev, "Failed to get sata-oob reset\n");
  return FUNC_1(VAR_7->sata_oob_rst);
 }

 VAR_7->sata_cold_rst = FUNC_10(&VAR_5->dev, "sata-cold");
 if (FUNC_0(VAR_7->sata_cold_rst)) {
  FUNC_4(&VAR_5->dev, "Failed to get sata-cold reset\n");
  return FUNC_1(VAR_7->sata_cold_rst);
 }

 VAR_7->sata_clk = FUNC_5(&VAR_5->dev, "sata");
 if (FUNC_0(VAR_7->sata_clk)) {
  FUNC_4(&VAR_5->dev, "Failed to get sata clock\n");
  return FUNC_1(VAR_7->sata_clk);
 }

 VAR_7->supplies = FUNC_7(&VAR_5->dev,
           VAR_7->soc->num_supplies,
           sizeof(*VAR_7->supplies), VAR_1);
 if (!VAR_7->supplies)
  return -VAR_0;

 for (VAR_10 = 0; VAR_10 < VAR_7->soc->num_supplies; VAR_10++)
  VAR_7->supplies[VAR_10].supply = VAR_7->soc->supply_names[VAR_10];

 VAR_9 = FUNC_9(&VAR_5->dev,
          VAR_7->soc->num_supplies,
          VAR_7->supplies);
 if (VAR_9) {
  FUNC_4(&VAR_5->dev, "Failed to get regulators\n");
  return VAR_9;
 }

 VAR_9 = FUNC_14(VAR_6);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_3(VAR_5, VAR_6, &VAR_4,
          &VAR_3);
 if (VAR_9)
  goto deinit_controller;

 return 0;

deinit_controller:
 FUNC_13(VAR_6);

 return VAR_9;
}
