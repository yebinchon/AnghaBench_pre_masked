
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_ahci_plat {void* axi_rst; void* sw_rst; void* reg_rst; } ;
struct device {int dummy; } ;
struct ahci_host_priv {struct mtk_ahci_plat* plat_data; } ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (struct device*,char*) ;
 void* FUNC_2 (struct device*,char*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*) ;

__attribute__((used)) static int FUNC_5(struct ahci_host_priv *VAR_1,
        struct device *VAR_2)
{
 struct mtk_ahci_plat *VAR_3 = VAR_1->plat_data;
 int VAR_4;


 VAR_3->axi_rst = FUNC_2(VAR_2, "axi");
 if (FUNC_0(VAR_3->axi_rst) == -VAR_0)
  return FUNC_0(VAR_3->axi_rst);

 VAR_3->sw_rst = FUNC_2(VAR_2, "sw");
 if (FUNC_0(VAR_3->sw_rst) == -VAR_0)
  return FUNC_0(VAR_3->sw_rst);

 VAR_3->reg_rst = FUNC_2(VAR_2, "reg");
 if (FUNC_0(VAR_3->reg_rst) == -VAR_0)
  return FUNC_0(VAR_3->reg_rst);

 VAR_4 = FUNC_3(VAR_3->axi_rst);
 if (VAR_4) {
  FUNC_1(VAR_2, "failed to assert AXI bus\n");
  return VAR_4;
 }

 VAR_4 = FUNC_3(VAR_3->sw_rst);
 if (VAR_4) {
  FUNC_1(VAR_2, "failed to assert PHY digital part\n");
  return VAR_4;
 }

 VAR_4 = FUNC_3(VAR_3->reg_rst);
 if (VAR_4) {
  FUNC_1(VAR_2, "failed to assert PHY register part\n");
  return VAR_4;
 }

 VAR_4 = FUNC_4(VAR_3->reg_rst);
 if (VAR_4) {
  FUNC_1(VAR_2, "failed to deassert PHY register part\n");
  return VAR_4;
 }

 VAR_4 = FUNC_4(VAR_3->sw_rst);
 if (VAR_4) {
  FUNC_1(VAR_2, "failed to deassert PHY digital part\n");
  return VAR_4;
 }

 VAR_4 = FUNC_4(VAR_3->axi_rst);
 if (VAR_4) {
  FUNC_1(VAR_2, "failed to deassert AXI bus\n");
  return VAR_4;
 }

 return 0;
}
