
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device {scalar_t__ mmio; struct imx_ahci_priv* plat_data; } ;
struct platform_device {struct device dev; } ;
struct of_device_id {scalar_t__ data; } ;
struct imx_ahci_priv {int no_device; int first_time; int type; int phy_params; struct device* sata_clk; struct device* ahb_clk; struct device* gpr; struct device* sata_ref_clk; struct platform_device* ahci_pdev; } ;
struct ahci_host_priv {scalar_t__ mmio; struct imx_ahci_priv* plat_data; } ;
typedef enum ahci_imx_type { ____Placeholder_ahci_imx_type } ahci_imx_type ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 unsigned int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;
 int VAR_15 ;
 struct device* FUNC_4 (struct platform_device*,int ) ;
 int FUNC_5 (struct platform_device*,struct device*,int *,int *) ;
 int VAR_16 ;
 int FUNC_6 (struct device*) ;
 int FUNC_7 (struct device*) ;
 int FUNC_8 (struct device*) ;
 int FUNC_9 (struct device*,char*) ;
 int FUNC_10 (struct device*,char*,int ) ;
 int FUNC_11 (struct device*) ;
 void* FUNC_12 (struct device*,char*) ;
 struct device* FUNC_13 (struct device*,char*,struct device*,int ) ;
 struct imx_ahci_priv* FUNC_14 (struct device*,int,int ) ;
 int FUNC_15 (struct device*,int ,struct device*,int *) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_16 (struct device*,struct imx_ahci_priv*) ;
 int VAR_20 ;
 int FUNC_17 (struct device*,int ,int ) ;
 int FUNC_18 (struct device*) ;
 int FUNC_19 (struct device*) ;
 struct of_device_id* FUNC_20 (int ,struct device*) ;
 unsigned int FUNC_21 (scalar_t__) ;
 struct device* FUNC_22 (char*) ;
 int FUNC_23 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_24(struct platform_device *VAR_21)
{
 struct device *VAR_22 = &VAR_21->dev;
 const struct of_device_id *VAR_23;
 struct ahci_host_priv *VAR_24;
 struct imx_ahci_priv *VAR_25;
 unsigned int VAR_26;
 int VAR_27;

 VAR_23 = FUNC_20(VAR_20, VAR_22);
 if (!VAR_23)
  return -VAR_5;

 VAR_25 = FUNC_14(VAR_22, sizeof(*VAR_25), VAR_7);
 if (!VAR_25)
  return -VAR_6;

 VAR_25->ahci_pdev = VAR_21;
 VAR_25->no_device = 0;
 VAR_25->first_time = 1;
 VAR_25->type = (enum ahci_imx_type)VAR_23->data;

 VAR_25->sata_clk = FUNC_12(VAR_22, "sata");
 if (FUNC_2(VAR_25->sata_clk)) {
  FUNC_9(VAR_22, "can't get sata clock.\n");
  return FUNC_3(VAR_25->sata_clk);
 }

 VAR_25->sata_ref_clk = FUNC_12(VAR_22, "sata_ref");
 if (FUNC_2(VAR_25->sata_ref_clk)) {
  FUNC_9(VAR_22, "can't get sata_ref clock.\n");
  return FUNC_3(VAR_25->sata_ref_clk);
 }

 VAR_25->ahb_clk = FUNC_12(VAR_22, "ahb");
 if (FUNC_2(VAR_25->ahb_clk)) {
  FUNC_9(VAR_22, "can't get ahb clock.\n");
  return FUNC_3(VAR_25->ahb_clk);
 }

 if (VAR_25->type == VAR_1 || VAR_25->type == VAR_2) {
  u32 VAR_28;

  VAR_25->gpr = FUNC_22(
       "fsl,imx6q-iomuxc-gpr");
  if (FUNC_2(VAR_25->gpr)) {
   FUNC_9(VAR_22,
    "failed to find fsl,imx6q-iomux-gpr regmap\n");
   return FUNC_3(VAR_25->gpr);
  }

  VAR_28 = FUNC_17(VAR_22, VAR_19,
       FUNC_0(VAR_19));

  VAR_25->phy_params =
       VAR_12 |
       VAR_11 |
       VAR_13 |
       VAR_28;
 } else if (VAR_25->type == VAR_3) {
  VAR_27 = FUNC_16(VAR_22, VAR_25);
  if (VAR_27)
   return VAR_27;
 }

 VAR_24 = FUNC_4(VAR_21, 0);
 if (FUNC_2(VAR_24))
  return FUNC_3(VAR_24);

 VAR_24->plat_data = VAR_25;

 VAR_27 = FUNC_8(VAR_25->sata_clk);
 if (VAR_27)
  return VAR_27;

 if (VAR_25->type == VAR_0 &&
     FUNC_1(VAR_4)) {

  struct device *VAR_29;

  VAR_29 =
   FUNC_13(VAR_22,
       "sata_ahci",
       VAR_24,
       VAR_17);
  if (FUNC_2(VAR_29)) {
   VAR_27 = FUNC_3(VAR_29);
   goto disable_clk;
  }
  FUNC_15(VAR_29, 0, VAR_29,
          &VAR_18);
  FUNC_10(VAR_22, "%s: sensor 'sata_ahci'\n", FUNC_11(VAR_29));
 }

 VAR_27 = FUNC_19(VAR_24);
 if (VAR_27)
  goto disable_clk;
 VAR_26 = FUNC_21(VAR_24->mmio + VAR_8);
 if (!(VAR_26 & VAR_9)) {
  VAR_26 |= VAR_9;
  FUNC_23(VAR_26, VAR_24->mmio + VAR_8);
 }
 VAR_26 = FUNC_21(VAR_24->mmio + VAR_10);
 if (!(VAR_26 & 0x1)) {
  VAR_26 |= 0x1;
  FUNC_23(VAR_26, VAR_24->mmio + VAR_10);
 }

 VAR_26 = FUNC_7(VAR_25->ahb_clk) / 1000;
 FUNC_23(VAR_26, VAR_24->mmio + VAR_14);

 VAR_27 = FUNC_5(VAR_21, VAR_24, &VAR_15,
          &VAR_16);
 if (VAR_27)
  goto disable_sata;

 return 0;

disable_sata:
 FUNC_18(VAR_24);
disable_clk:
 FUNC_6(VAR_25->sata_clk);
 return VAR_27;
}
