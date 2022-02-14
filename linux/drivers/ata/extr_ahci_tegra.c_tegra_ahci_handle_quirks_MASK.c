
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tegra_ahci_priv {scalar_t__ sata_aux_regs; TYPE_1__* soc; } ;
struct ahci_host_priv {struct tegra_ahci_priv* plat_data; } ;
struct TYPE_2__ {int supports_devslp; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct ahci_host_priv *VAR_2)
{
 struct tegra_ahci_priv *VAR_3 = VAR_2->plat_data;
 u32 VAR_4;

 if (VAR_3->sata_aux_regs && !VAR_3->soc->supports_devslp) {
  VAR_4 = FUNC_0(VAR_3->sata_aux_regs + VAR_0);
  VAR_4 &= ~VAR_1;
  FUNC_1(VAR_4, VAR_3->sata_aux_regs + VAR_0);
 }
}
