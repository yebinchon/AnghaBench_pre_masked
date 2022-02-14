
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct platform_device {int dummy; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct cdn_dp_device {void* apb_rst; void* core_rst; void* dptx_rst; void* spdif_rst; void* grf_clk; void* spdif_clk; void* pclk; void* core_clk; void* regs; void* grf; struct device* dev; } ;


 int FUNC_0 (struct device*,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (struct device*,char*) ;
 void* FUNC_4 (struct device*,struct resource*) ;
 void* FUNC_5 (struct device*,char*) ;
 struct resource* FUNC_6 (struct platform_device*,int ,int ) ;
 void* FUNC_7 (struct device_node*,char*) ;
 struct platform_device* FUNC_8 (struct device*) ;

__attribute__((used)) static int FUNC_9(struct cdn_dp_device *VAR_1)
{
 struct device *VAR_2 = VAR_1->dev;
 struct device_node *VAR_3 = VAR_2->of_node;
 struct platform_device *VAR_4 = FUNC_8(VAR_2);
 struct resource *VAR_5;

 VAR_1->grf = FUNC_7(VAR_3, "rockchip,grf");
 if (FUNC_1(VAR_1->grf)) {
  FUNC_0(VAR_2, "cdn-dp needs rockchip,grf property\n");
  return FUNC_2(VAR_1->grf);
 }

 VAR_5 = FUNC_6(VAR_4, VAR_0, 0);
 VAR_1->regs = FUNC_4(VAR_2, VAR_5);
 if (FUNC_1(VAR_1->regs)) {
  FUNC_0(VAR_2, "ioremap reg failed\n");
  return FUNC_2(VAR_1->regs);
 }

 VAR_1->core_clk = FUNC_3(VAR_2, "core-clk");
 if (FUNC_1(VAR_1->core_clk)) {
  FUNC_0(VAR_2, "cannot get core_clk_dp\n");
  return FUNC_2(VAR_1->core_clk);
 }

 VAR_1->pclk = FUNC_3(VAR_2, "pclk");
 if (FUNC_1(VAR_1->pclk)) {
  FUNC_0(VAR_2, "cannot get pclk\n");
  return FUNC_2(VAR_1->pclk);
 }

 VAR_1->spdif_clk = FUNC_3(VAR_2, "spdif");
 if (FUNC_1(VAR_1->spdif_clk)) {
  FUNC_0(VAR_2, "cannot get spdif_clk\n");
  return FUNC_2(VAR_1->spdif_clk);
 }

 VAR_1->grf_clk = FUNC_3(VAR_2, "grf");
 if (FUNC_1(VAR_1->grf_clk)) {
  FUNC_0(VAR_2, "cannot get grf clk\n");
  return FUNC_2(VAR_1->grf_clk);
 }

 VAR_1->spdif_rst = FUNC_5(VAR_2, "spdif");
 if (FUNC_1(VAR_1->spdif_rst)) {
  FUNC_0(VAR_2, "no spdif reset control found\n");
  return FUNC_2(VAR_1->spdif_rst);
 }

 VAR_1->dptx_rst = FUNC_5(VAR_2, "dptx");
 if (FUNC_1(VAR_1->dptx_rst)) {
  FUNC_0(VAR_2, "no uphy reset control found\n");
  return FUNC_2(VAR_1->dptx_rst);
 }

 VAR_1->core_rst = FUNC_5(VAR_2, "core");
 if (FUNC_1(VAR_1->core_rst)) {
  FUNC_0(VAR_2, "no core reset control found\n");
  return FUNC_2(VAR_1->core_rst);
 }

 VAR_1->apb_rst = FUNC_5(VAR_2, "apb");
 if (FUNC_1(VAR_1->apb_rst)) {
  FUNC_0(VAR_2, "no apb reset control found\n");
  return FUNC_2(VAR_1->apb_rst);
 }

 return 0;
}
