
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct of_device_id {scalar_t__ data; } ;
struct device_node {int dummy; } ;
struct ahci_qoriq_priv {int type; int is_dmacoherent; struct ahci_host_priv* ecc_addr; } ;
struct ahci_host_priv {struct ahci_qoriq_priv* plat_data; } ;
typedef enum ahci_qoriq_type { ____Placeholder_ahci_qoriq_type } ahci_qoriq_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct ahci_host_priv*) ;
 int FUNC_1 (struct ahci_host_priv*) ;
 int FUNC_2 (struct ahci_host_priv*) ;
 int FUNC_3 (struct ahci_host_priv*) ;
 struct ahci_host_priv* FUNC_4 (struct platform_device*,int ) ;
 int FUNC_5 (struct platform_device*,struct ahci_host_priv*,int *,int *) ;
 int VAR_4 ;
 int FUNC_6 (struct ahci_host_priv*) ;
 int VAR_5 ;
 int VAR_6 ;
 struct ahci_host_priv* FUNC_7 (struct device*,struct resource*) ;
 struct ahci_qoriq_priv* FUNC_8 (struct device*,int,int ) ;
 int VAR_7 ;
 int FUNC_9 (struct device_node*) ;
 struct of_device_id* FUNC_10 (int ,struct device_node*) ;
 struct resource* FUNC_11 (struct platform_device*,int ,char*) ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_8)
{
 struct device_node *VAR_9 = VAR_8->dev.of_node;
 struct device *VAR_10 = &VAR_8->dev;
 struct ahci_host_priv *VAR_11;
 struct ahci_qoriq_priv *VAR_12;
 const struct of_device_id *VAR_13;
 struct resource *VAR_14;
 int VAR_15;

 VAR_11 = FUNC_4(VAR_8, 0);
 if (FUNC_0(VAR_11))
  return FUNC_1(VAR_11);

 VAR_13 = FUNC_10(VAR_4, VAR_9);
 if (!VAR_13)
  return -VAR_0;

 VAR_12 = FUNC_8(VAR_10, sizeof(*VAR_12), VAR_2);
 if (!VAR_12)
  return -VAR_1;

 VAR_12->type = (enum ahci_qoriq_type)VAR_13->data;

 if (FUNC_12(!VAR_7)) {
  VAR_14 = FUNC_11(VAR_8,
         VAR_3,
         "sata-ecc");
  if (VAR_14) {
   VAR_12->ecc_addr =
    FUNC_7(VAR_10, VAR_14);
   if (FUNC_0(VAR_12->ecc_addr))
    return FUNC_1(VAR_12->ecc_addr);
  }
 }

 VAR_12->is_dmacoherent = FUNC_9(VAR_9);

 VAR_15 = FUNC_3(VAR_11);
 if (VAR_15)
  return VAR_15;

 VAR_11->plat_data = VAR_12;
 VAR_15 = FUNC_6(VAR_11);
 if (VAR_15)
  goto disable_resources;

 VAR_15 = FUNC_5(VAR_8, VAR_11, &VAR_5,
         &VAR_6);
 if (VAR_15)
  goto disable_resources;

 return 0;

disable_resources:
 FUNC_2(VAR_11);

 return VAR_15;
}
