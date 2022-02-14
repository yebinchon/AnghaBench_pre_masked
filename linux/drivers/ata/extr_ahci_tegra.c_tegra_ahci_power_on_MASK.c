
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_ahci_priv {int supplies; TYPE_1__* soc; int sata_clk; int sata_oob_rst; int sata_cold_rst; int sata_rst; } ;
struct ahci_host_priv {struct tegra_ahci_priv* plat_data; } ;
struct TYPE_2__ {int num_supplies; } ;


 int VAR_0 ;
 int FUNC_0 (struct ahci_host_priv*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct ahci_host_priv *VAR_1)
{
 struct tegra_ahci_priv *VAR_2 = VAR_1->plat_data;
 int VAR_3;

 VAR_3 = FUNC_3(VAR_2->soc->num_supplies,
        VAR_2->supplies);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_7(VAR_0,
      VAR_2->sata_clk,
      VAR_2->sata_rst);
 if (VAR_3)
  goto disable_regulators;

 FUNC_4(VAR_2->sata_oob_rst);
 FUNC_4(VAR_2->sata_cold_rst);

 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3)
  goto disable_power;

 FUNC_5(VAR_2->sata_cold_rst);
 FUNC_5(VAR_2->sata_oob_rst);

 return 0;

disable_power:
 FUNC_1(VAR_2->sata_clk);

 FUNC_6(VAR_0);

disable_regulators:
 FUNC_2(VAR_2->soc->num_supplies, VAR_2->supplies);

 return VAR_3;
}
