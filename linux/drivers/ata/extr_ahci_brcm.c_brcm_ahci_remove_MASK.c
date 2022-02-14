
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct brcm_ahci_priv {int dummy; } ;
struct ata_host {struct ahci_host_priv* private_data; } ;
struct ahci_host_priv {struct brcm_ahci_priv* plat_data; } ;


 int FUNC_0 (struct platform_device*) ;
 int FUNC_1 (struct brcm_ahci_priv*) ;
 struct ata_host* FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct ata_host *VAR_1 = FUNC_2(&VAR_0->dev);
 struct ahci_host_priv *VAR_2 = VAR_1->private_data;
 struct brcm_ahci_priv *VAR_3 = VAR_2->plat_data;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0);
 if (VAR_4)
  return VAR_4;

 FUNC_1(VAR_3);

 return 0;
}
