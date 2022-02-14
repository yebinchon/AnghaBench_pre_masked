
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_ahci_drv_data {int dummy; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct ahci_host_priv {int force_port_map; int mmio; struct st_ahci_drv_data* plat_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ahci_host_priv*) ;
 int FUNC_1 (struct ahci_host_priv*) ;
 int FUNC_2 (struct ahci_host_priv*) ;
 int FUNC_3 (struct ahci_host_priv*) ;
 struct ahci_host_priv* FUNC_4 (struct platform_device*,int ) ;
 int FUNC_5 (struct platform_device*,struct ahci_host_priv*,int *,int *) ;
 int VAR_2 ;
 struct st_ahci_drv_data* FUNC_6 (struct device*,int,int ) ;
 int FUNC_7 (int ,char*,int *) ;
 int FUNC_8 (int ) ;
 int VAR_3 ;
 int FUNC_9 (struct ahci_host_priv*,struct device*) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_4)
{
 struct device *VAR_5 = &VAR_4->dev;
 struct st_ahci_drv_data *VAR_6;
 struct ahci_host_priv *VAR_7;
 int VAR_8;

 VAR_6 = FUNC_6(&VAR_4->dev, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_4(VAR_4, 0);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);
 VAR_7->plat_data = VAR_6;

 VAR_8 = FUNC_9(VAR_7, &VAR_4->dev);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_3(VAR_7);
 if (VAR_8)
  return VAR_8;

 FUNC_8(VAR_7->mmio);

 FUNC_7(VAR_5->of_node,
        "ports-implemented", &VAR_7->force_port_map);

 VAR_8 = FUNC_5(VAR_4, VAR_7, &VAR_3,
          &VAR_2);
 if (VAR_8) {
  FUNC_2(VAR_7);
  return VAR_8;
 }

 return 0;
}
