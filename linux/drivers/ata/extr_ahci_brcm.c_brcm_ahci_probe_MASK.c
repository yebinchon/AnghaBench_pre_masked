
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct of_device_id {scalar_t__ data; } ;
struct brcm_ahci_priv {int version; int quirks; int port_mask; int rcdev; struct ahci_host_priv* top_ctrl; struct device* dev; } ;
struct ahci_host_priv {int flags; struct brcm_ahci_priv* plat_data; } ;
typedef enum brcm_ahci_version { ____Placeholder_brcm_ahci_version } brcm_ahci_version ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (struct ahci_host_priv*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ahci_host_priv*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (struct ahci_host_priv*) ;
 struct ahci_host_priv* FUNC_4 (struct platform_device*,int ) ;
 int FUNC_5 (struct platform_device*,struct ahci_host_priv*,int *,int *) ;
 int VAR_13 ;
 int FUNC_6 (struct platform_device*,struct brcm_ahci_priv*) ;
 int FUNC_7 (struct ahci_host_priv*) ;
 int FUNC_8 (struct brcm_ahci_priv*) ;
 int FUNC_9 (struct brcm_ahci_priv*) ;
 int FUNC_10 (struct device*,char*) ;
 struct ahci_host_priv* FUNC_11 (struct device*,struct resource*) ;
 struct brcm_ahci_priv* FUNC_12 (struct device*,int,int ) ;
 int FUNC_13 (struct device*,char*) ;
 struct of_device_id* FUNC_14 (int ,int ) ;
 struct resource* FUNC_15 (struct platform_device*,int ,char*) ;
 int FUNC_16 (int ) ;

__attribute__((used)) static int FUNC_17(struct platform_device *VAR_14)
{
 const struct of_device_id *VAR_15;
 struct device *VAR_16 = &VAR_14->dev;
 struct brcm_ahci_priv *VAR_17;
 struct ahci_host_priv *VAR_18;
 struct resource *VAR_19;
 int VAR_20;

 VAR_17 = FUNC_12(VAR_16, sizeof(*VAR_17), VAR_9);
 if (!VAR_17)
  return -VAR_8;

 VAR_15 = FUNC_14(VAR_12, VAR_14->dev.of_node);
 if (!VAR_15)
  return -VAR_7;

 VAR_17->version = (enum brcm_ahci_version)VAR_15->data;
 VAR_17->dev = VAR_16;

 VAR_19 = FUNC_15(VAR_14, VAR_10, "top-ctrl");
 VAR_17->top_ctrl = FUNC_11(VAR_16, VAR_19);
 if (FUNC_0(VAR_17->top_ctrl))
  return FUNC_2(VAR_17->top_ctrl);


 VAR_17->rcdev = FUNC_13(&VAR_14->dev, "ahci");
 if (!FUNC_1(VAR_17->rcdev))
  FUNC_16(VAR_17->rcdev);

 if ((VAR_17->version == VAR_5) ||
  (VAR_17->version == VAR_6)) {
  VAR_17->quirks |= VAR_3;
  VAR_17->quirks |= VAR_4;
 }

 FUNC_8(VAR_17);

 VAR_17->port_mask = FUNC_6(VAR_14, VAR_17);
 if (!VAR_17->port_mask)
  return -VAR_7;

 FUNC_9(VAR_17);

 VAR_18 = FUNC_4(VAR_14, 0);
 if (FUNC_0(VAR_18))
  return FUNC_2(VAR_18);
 VAR_18->plat_data = VAR_17;
 VAR_18->flags = VAR_2;

 FUNC_7(VAR_18);

 VAR_20 = FUNC_3(VAR_18);
 if (VAR_20)
  return VAR_20;

 if (VAR_17->quirks & VAR_3)
  VAR_18->flags |= VAR_0;
 VAR_18->flags |= VAR_1;

 VAR_20 = FUNC_5(VAR_14, VAR_18, &VAR_11,
          &VAR_13);
 if (VAR_20)
  return VAR_20;

 FUNC_10(VAR_16, "Broadcom AHCI SATA3 registered\n");

 return 0;
}
