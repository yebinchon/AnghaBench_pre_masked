
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imx_ahci_priv {int sata_clk; } ;
struct ata_host {struct ahci_host_priv* private_data; } ;
struct ahci_host_priv {struct imx_ahci_priv* plat_data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ahci_host_priv*) ;

__attribute__((used)) static void FUNC_2(struct ata_host *VAR_0)
{
 struct ahci_host_priv *VAR_1 = VAR_0->private_data;
 struct imx_ahci_priv *VAR_2 = VAR_1->plat_data;

 FUNC_1(VAR_1);
 FUNC_0(VAR_2->sata_clk);
}
