
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_ahci_drv_data {scalar_t__ pwr; } ;
struct device {int dummy; } ;
struct ata_host {struct device* dev; struct ahci_host_priv* private_data; } ;
struct ahci_host_priv {struct st_ahci_drv_data* plat_data; } ;


 int FUNC_0 (struct ahci_host_priv*) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct ata_host *VAR_0)
{
 struct ahci_host_priv *VAR_1 = VAR_0->private_data;
 struct st_ahci_drv_data *VAR_2 = VAR_1->plat_data;
 struct device *VAR_3 = VAR_0->dev;
 int VAR_4;

 if (VAR_2->pwr) {
  VAR_4 = FUNC_2(VAR_2->pwr);
  if (VAR_4)
   FUNC_1(VAR_3, "unable to pwrdwn\n");
 }

 FUNC_0(VAR_1);
}
