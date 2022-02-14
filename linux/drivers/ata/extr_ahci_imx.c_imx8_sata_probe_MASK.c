
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; } ;
struct platform_device {int dummy; } ;
struct imx_ahci_priv {int clkreq_gpio; void* phy_apbclk; void* phy_pclk1; void* phy_pclk0; void* epcs_rx_clk; void* epcs_tx_clk; void* gpr; int phy_base; int imped_ratio; struct platform_device* ahci_pdev; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (struct device*,char*) ;
 void* FUNC_4 (struct device*,char*) ;
 int FUNC_5 (struct device*,int,int ,char*) ;
 int FUNC_6 (struct device*,int ,int ) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (struct device_node*,char*,int ) ;
 scalar_t__ FUNC_9 (struct device_node*,char*,int *) ;
 struct resource* FUNC_10 (struct platform_device*,int ,char*) ;
 int FUNC_11 (struct resource*) ;
 void* FUNC_12 (struct device_node*,char*) ;

__attribute__((used)) static int FUNC_13(struct device *VAR_6, struct imx_ahci_priv *VAR_7)
{
 int VAR_8;
 struct resource *VAR_9;
 struct platform_device *VAR_10 = VAR_7->ahci_pdev;
 struct device_node *VAR_11 = VAR_6->of_node;

 if (FUNC_9(VAR_11, "fsl,phy-imp", &VAR_7->imped_ratio))
  VAR_7->imped_ratio = VAR_4;
 VAR_9 = FUNC_10(VAR_10, VAR_5, "phy");
 if (VAR_9) {
  VAR_7->phy_base = FUNC_6(VAR_6, VAR_9->start,
     FUNC_11(VAR_9));
  if (!VAR_7->phy_base) {
   FUNC_2(VAR_6, "error with ioremap\n");
   return -VAR_1;
  }
 } else {
  FUNC_2(VAR_6, "missing *phy* reg region.\n");
  return -VAR_1;
 }
 VAR_7->gpr =
   FUNC_12(VAR_11, "hsio");
 if (FUNC_0(VAR_7->gpr)) {
  FUNC_2(VAR_6, "unable to find gpr registers\n");
  return FUNC_1(VAR_7->gpr);
 }

 VAR_7->epcs_tx_clk = FUNC_4(VAR_6, "epcs_tx");
 if (FUNC_0(VAR_7->epcs_tx_clk)) {
  FUNC_2(VAR_6, "can't get epcs_tx_clk clock.\n");
  return FUNC_1(VAR_7->epcs_tx_clk);
 }
 VAR_7->epcs_rx_clk = FUNC_4(VAR_6, "epcs_rx");
 if (FUNC_0(VAR_7->epcs_rx_clk)) {
  FUNC_2(VAR_6, "can't get epcs_rx_clk clock.\n");
  return FUNC_1(VAR_7->epcs_rx_clk);
 }
 VAR_7->phy_pclk0 = FUNC_4(VAR_6, "phy_pclk0");
 if (FUNC_0(VAR_7->phy_pclk0)) {
  FUNC_2(VAR_6, "can't get phy_pclk0 clock.\n");
  return FUNC_1(VAR_7->phy_pclk0);
 }
 VAR_7->phy_pclk1 = FUNC_4(VAR_6, "phy_pclk1");
 if (FUNC_0(VAR_7->phy_pclk1)) {
  FUNC_2(VAR_6, "can't get phy_pclk1 clock.\n");
  return FUNC_1(VAR_7->phy_pclk1);
 }
 VAR_7->phy_apbclk = FUNC_4(VAR_6, "phy_apbclk");
 if (FUNC_0(VAR_7->phy_apbclk)) {
  FUNC_2(VAR_6, "can't get phy_apbclk clock.\n");
  return FUNC_1(VAR_7->phy_apbclk);
 }


 VAR_7->clkreq_gpio = FUNC_8(VAR_11, "clkreq-gpio", 0);
 if (FUNC_7(VAR_7->clkreq_gpio)) {
  VAR_8 = FUNC_5(VAR_6, VAR_7->clkreq_gpio,
         VAR_3,
         "SATA CLKREQ");
  if (VAR_8 == -VAR_0) {
   FUNC_3(VAR_6, "clkreq had been initialized.\n");
  } else if (VAR_8) {
   FUNC_2(VAR_6, "%d unable to get clkreq.\n", VAR_8);
   return VAR_8;
  }
 } else if (VAR_7->clkreq_gpio == -VAR_2) {
  return VAR_7->clkreq_gpio;
 }

 return 0;
}
