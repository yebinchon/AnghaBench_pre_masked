
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct device_node {int dummy; } ;
struct ceva_ahci_priv {int is_cci_enabled; int * pp5c; int * pp4c; int * pp3c; int * pp2c; int flags; struct platform_device* ahci_pdev; } ;
struct ahci_host_priv {struct ceva_ahci_priv* plat_data; } ;
typedef enum dev_dma_attr { ____Placeholder_dev_dma_attr } dev_dma_attr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct ahci_host_priv*) ;
 int FUNC_1 (struct ahci_host_priv*) ;
 int VAR_5 ;
 int FUNC_2 (struct ahci_host_priv*) ;
 int FUNC_3 (struct ahci_host_priv*) ;
 int FUNC_4 (struct ahci_host_priv*) ;
 struct ahci_host_priv* FUNC_5 (struct platform_device*,int ) ;
 int FUNC_6 (struct platform_device*,struct ahci_host_priv*,int *,int *) ;
 int VAR_6 ;
 int FUNC_7 (struct device*,char*) ;
 int FUNC_8 (struct device*) ;
 struct ceva_ahci_priv* FUNC_9 (struct device*,int,int ) ;
 scalar_t__ FUNC_10 (struct device_node*,char*) ;
 scalar_t__ FUNC_11 (struct device_node*,char*,int *,int) ;
 scalar_t__ FUNC_12 (struct device_node*,char*,int *,int) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_7)
{
 struct device_node *VAR_8 = VAR_7->dev.of_node;
 struct device *VAR_9 = &VAR_7->dev;
 struct ahci_host_priv *VAR_10;
 struct ceva_ahci_priv *VAR_11;
 enum dev_dma_attr VAR_12;
 int VAR_13;

 VAR_11 = FUNC_9(VAR_9, sizeof(*VAR_11), VAR_4);
 if (!VAR_11)
  return -VAR_3;

 VAR_11->ahci_pdev = VAR_7;

 VAR_10 = FUNC_5(VAR_7, 0);
 if (FUNC_0(VAR_10))
  return FUNC_1(VAR_10);

 VAR_13 = FUNC_4(VAR_10);
 if (VAR_13)
  return VAR_13;

 if (FUNC_10(VAR_8, "ceva,broken-gen2"))
  VAR_11->flags = VAR_0;


 if (FUNC_12(VAR_8, "ceva,p0-cominit-params",
     (u8 *)&VAR_11->pp2c[0], 4) < 0) {
  FUNC_7(VAR_9, "ceva,p0-cominit-params property not defined\n");
  return -VAR_2;
 }

 if (FUNC_12(VAR_8, "ceva,p1-cominit-params",
     (u8 *)&VAR_11->pp2c[1], 4) < 0) {
  FUNC_7(VAR_9, "ceva,p1-cominit-params property not defined\n");
  return -VAR_2;
 }


 if (FUNC_12(VAR_8, "ceva,p0-comwake-params",
     (u8 *)&VAR_11->pp3c[0], 4) < 0) {
  FUNC_7(VAR_9, "ceva,p0-comwake-params property not defined\n");
  return -VAR_2;
 }

 if (FUNC_12(VAR_8, "ceva,p1-comwake-params",
     (u8 *)&VAR_11->pp3c[1], 4) < 0) {
  FUNC_7(VAR_9, "ceva,p1-comwake-params property not defined\n");
  return -VAR_2;
 }


 if (FUNC_12(VAR_8, "ceva,p0-burst-params",
     (u8 *)&VAR_11->pp4c[0], 4) < 0) {
  FUNC_7(VAR_9, "ceva,p0-burst-params property not defined\n");
  return -VAR_2;
 }

 if (FUNC_12(VAR_8, "ceva,p1-burst-params",
     (u8 *)&VAR_11->pp4c[1], 4) < 0) {
  FUNC_7(VAR_9, "ceva,p1-burst-params property not defined\n");
  return -VAR_2;
 }


 if (FUNC_11(VAR_8, "ceva,p0-retry-params",
     (u16 *)&VAR_11->pp5c[0], 2) < 0) {
  FUNC_7(VAR_9, "ceva,p0-retry-params property not defined\n");
  return -VAR_2;
 }

 if (FUNC_11(VAR_8, "ceva,p1-retry-params",
     (u16 *)&VAR_11->pp5c[1], 2) < 0) {
  FUNC_7(VAR_9, "ceva,p1-retry-params property not defined\n");
  return -VAR_2;
 }





 VAR_12 = FUNC_8(VAR_9);
 VAR_11->is_cci_enabled = (VAR_12 == VAR_1);

 VAR_10->plat_data = VAR_11;


 FUNC_2(VAR_10);

 VAR_13 = FUNC_6(VAR_7, VAR_10, &VAR_5,
     &VAR_6);
 if (VAR_13)
  goto disable_resources;

 return 0;

disable_resources:
 FUNC_3(VAR_10);
 return VAR_13;
}
