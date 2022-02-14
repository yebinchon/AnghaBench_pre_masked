
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct imx_ahci_priv {int imped_ratio; int phy_pclk0; int phy_pclk1; int epcs_tx_clk; int epcs_rx_clk; int phy_apbclk; scalar_t__ phy_base; int gpr; TYPE_1__* ahci_pdev; } ;
struct device {int dummy; } ;
struct ahci_host_priv {struct imx_ahci_priv* plat_data; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 int VAR_33 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,int,int*) ;
 int FUNC_6 (int ,int,int,int) ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_11(struct ahci_host_priv *VAR_34)
{
 u32 VAR_35, VAR_36;
 int VAR_37, VAR_38;
 struct imx_ahci_priv *VAR_39 = VAR_34->plat_data;
 struct device *VAR_40 = &VAR_39->ahci_pdev->dev;


 VAR_38 = FUNC_1(VAR_39->phy_pclk0);
 if (VAR_38 < 0) {
  FUNC_2(VAR_40, "can't enable phy_pclk0.\n");
  return VAR_38;
 }
 VAR_38 = FUNC_1(VAR_39->phy_pclk1);
 if (VAR_38 < 0) {
  FUNC_2(VAR_40, "can't enable phy_pclk1.\n");
  goto disable_phy_pclk0;
 }
 VAR_38 = FUNC_1(VAR_39->epcs_tx_clk);
 if (VAR_38 < 0) {
  FUNC_2(VAR_40, "can't enable epcs_tx_clk.\n");
  goto disable_phy_pclk1;
 }
 VAR_38 = FUNC_1(VAR_39->epcs_rx_clk);
 if (VAR_38 < 0) {
  FUNC_2(VAR_40, "can't enable epcs_rx_clk.\n");
  goto disable_epcs_tx_clk;
 }
 VAR_38 = FUNC_1(VAR_39->phy_apbclk);
 if (VAR_38 < 0) {
  FUNC_2(VAR_40, "can't enable phy_apbclk.\n");
  goto disable_epcs_rx_clk;
 }

 FUNC_5(VAR_39->gpr, VAR_2 +
   VAR_4, &VAR_35);
 if ((VAR_35 & VAR_10) == 0) {

  FUNC_6(VAR_39->gpr,
    VAR_6,
    VAR_25 |
    VAR_27,
    VAR_25 |
    VAR_27);
 }
 FUNC_5(VAR_39->gpr, VAR_3 +
   VAR_4, &VAR_36);
 if ((VAR_36 & VAR_10) == 0) {

  FUNC_6(VAR_39->gpr,
    VAR_6,
    VAR_26 |
    VAR_28,
    VAR_26 |
    VAR_28);
 }
 if (((VAR_36 | VAR_35) & VAR_10) == 0) {

  FUNC_6(VAR_39->gpr,
    VAR_12,
    VAR_13 |
    VAR_14,
    0);
 }


 VAR_35 = VAR_2 + VAR_4;
 FUNC_6(VAR_39->gpr,
   VAR_35,
   VAR_9,
   VAR_9);
 FUNC_6(VAR_39->gpr,
   VAR_35,
   VAR_11,
   VAR_11);


 FUNC_6(VAR_39->gpr,
   VAR_5,
   VAR_23,
   VAR_24);





 FUNC_6(VAR_39->gpr,
   VAR_1,
   VAR_19,
   VAR_19);
 FUNC_6(VAR_39->gpr,
   VAR_1,
   VAR_20,
   0);
 FUNC_6(VAR_39->gpr,
   VAR_1,
   VAR_21,
   VAR_21);
 FUNC_6(VAR_39->gpr,
   VAR_1,
   VAR_18 |
   VAR_17 |
   VAR_16 |
   VAR_15,
   VAR_18 |
   VAR_17 |
   VAR_16 |
   VAR_15);


 FUNC_6(VAR_39->gpr,
   VAR_8,
   VAR_29,
   0);

 FUNC_6(VAR_39->gpr,
   VAR_8,
   VAR_29,
   VAR_29);


 FUNC_6(VAR_39->gpr,
   VAR_8,
   VAR_30,
   VAR_30);
 FUNC_7(1);
 FUNC_6(VAR_39->gpr,
   VAR_8,
   VAR_30,
   0);
 FUNC_6(VAR_39->gpr,
   VAR_8,
   VAR_30,
   VAR_30);


 FUNC_6(VAR_39->gpr,
   VAR_5,
   VAR_22,
   VAR_22);

 for (VAR_37 = 0; VAR_37 < 100; VAR_37++) {
  VAR_36 = VAR_5 +
   VAR_7;
  FUNC_5(VAR_39->gpr, VAR_36, &VAR_35);
  VAR_35 &= VAR_33;
  if (VAR_35 == VAR_33)
   break;
  FUNC_7(1);
 }

 if (VAR_35 != VAR_33) {
  FUNC_2(VAR_40, "TX PLL of the PHY is not locked\n");
  VAR_38 = -VAR_0;
 } else {
  FUNC_10(VAR_39->imped_ratio, VAR_39->phy_base +
    VAR_31);
  FUNC_10(VAR_39->imped_ratio, VAR_39->phy_base +
    VAR_32);
  VAR_36 = FUNC_4(VAR_39->phy_base +
    VAR_31);
  if (FUNC_8(VAR_36 != VAR_39->imped_ratio))
   FUNC_3(VAR_40, "Can't set PHY RX impedance ratio.\n");
  VAR_36 = FUNC_4(VAR_39->phy_base +
    VAR_32);
  if (FUNC_8(VAR_36 != VAR_39->imped_ratio))
   FUNC_3(VAR_40, "Can't set PHY TX impedance ratio.\n");
  FUNC_9(50, 100);





  FUNC_0(VAR_39->phy_apbclk);
  FUNC_0(VAR_39->phy_pclk1);
  FUNC_0(VAR_39->phy_pclk0);
  return VAR_38;
 }

 FUNC_0(VAR_39->phy_apbclk);
disable_epcs_rx_clk:
 FUNC_0(VAR_39->epcs_rx_clk);
disable_epcs_tx_clk:
 FUNC_0(VAR_39->epcs_tx_clk);
disable_phy_pclk1:
 FUNC_0(VAR_39->phy_pclk1);
disable_phy_pclk0:
 FUNC_0(VAR_39->phy_pclk0);

 return VAR_38;
}
