
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct ata_port_info {int dummy; } ;
struct ahci_host_priv {int flags; int force_port_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct ahci_host_priv*) ;
 int FUNC_1 (struct ahci_host_priv*) ;
 struct ata_port_info* FUNC_2 (struct device*) ;
 int FUNC_3 (struct ahci_host_priv*) ;
 int FUNC_4 (struct ahci_host_priv*) ;
 struct ahci_host_priv* FUNC_5 (struct platform_device*,int ) ;
 int FUNC_6 (struct platform_device*,struct ahci_host_priv*,struct ata_port_info const*,int *) ;
 int VAR_3 ;
 struct ata_port_info VAR_4 ;
 scalar_t__ FUNC_7 (int ,char*) ;
 int FUNC_8 (int ,char*,int *) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_5)
{
 struct device *VAR_6 = &VAR_5->dev;
 struct ahci_host_priv *VAR_7;
 const struct ata_port_info *VAR_8;
 int VAR_9;

 VAR_7 = FUNC_5(VAR_5,
         VAR_2);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 VAR_9 = FUNC_4(VAR_7);
 if (VAR_9)
  return VAR_9;

 FUNC_8(VAR_6->of_node,
        "ports-implemented", &VAR_7->force_port_map);

 if (FUNC_7(VAR_6->of_node, "hisilicon,hisi-ahci"))
  VAR_7->flags |= VAR_0 | VAR_1;

 VAR_8 = FUNC_2(VAR_6);
 if (!VAR_8)
  VAR_8 = &VAR_4;

 VAR_9 = FUNC_6(VAR_5, VAR_7, VAR_8,
         &VAR_3);
 if (VAR_9)
  goto disable_resources;

 return 0;
disable_resources:
 FUNC_3(VAR_7);
 return VAR_9;
}
