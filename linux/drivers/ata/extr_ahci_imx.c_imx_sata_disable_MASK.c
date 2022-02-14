
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imx_ahci_priv {int type; int sata_ref_clk; int epcs_tx_clk; int epcs_rx_clk; int gpr; scalar_t__ no_device; } ;
struct ahci_host_priv {struct imx_ahci_priv* plat_data; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ahci_host_priv*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int,int) ;

__attribute__((used)) static void FUNC_3(struct ahci_host_priv *VAR_4)
{
 struct imx_ahci_priv *VAR_5 = VAR_4->plat_data;

 if (VAR_5->no_device)
  return;

 switch (VAR_5->type) {
 case 129:
  FUNC_2(VAR_5->gpr, VAR_3,
       VAR_1,
       VAR_1);
  FUNC_2(VAR_5->gpr, VAR_2,
       VAR_0,
       !VAR_0);
  break;

 case 130:
  FUNC_2(VAR_5->gpr, VAR_2,
       VAR_0,
       !VAR_0);
  break;

 case 128:
  FUNC_1(VAR_5->epcs_rx_clk);
  FUNC_1(VAR_5->epcs_tx_clk);
  break;

 default:
  break;
 }

 FUNC_1(VAR_5->sata_ref_clk);

 FUNC_0(VAR_4);
}
