
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_ahci_priv {int supplies; TYPE_1__* soc; int sata_clk; int sata_cold_rst; int sata_oob_rst; int sata_rst; } ;
struct ahci_host_priv {struct tegra_ahci_priv* plat_data; } ;
struct TYPE_2__ {int num_supplies; } ;


 int VAR_0 ;
 int FUNC_0 (struct ahci_host_priv*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct ahci_host_priv *VAR_1)
{
 struct tegra_ahci_priv *VAR_2 = VAR_1->plat_data;

 FUNC_0(VAR_1);

 FUNC_3(VAR_2->sata_rst);
 FUNC_3(VAR_2->sata_oob_rst);
 FUNC_3(VAR_2->sata_cold_rst);

 FUNC_1(VAR_2->sata_clk);
 FUNC_4(VAR_0);

 FUNC_2(VAR_2->soc->num_supplies, VAR_2->supplies);
}
