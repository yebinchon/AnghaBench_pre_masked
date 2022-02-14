
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sti_hqvdp {int vtg; void* reset; void* clk_pix_main; void* clk; int regs; struct device* dev; } ;
struct resource {int start; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (void*) ;
 int FUNC_3 (struct device*,int *) ;
 void* FUNC_4 (struct device*,char*) ;
 int FUNC_5 (struct device*,int ,int ) ;
 struct sti_hqvdp* FUNC_6 (struct device*,int,int ) ;
 void* FUNC_7 (struct device*,char*) ;
 int FUNC_8 (struct device_node*) ;
 struct device_node* FUNC_9 (int ,char*,int ) ;
 int FUNC_10 (struct device_node*) ;
 struct resource* FUNC_11 (struct platform_device*,int ,int ) ;
 int FUNC_12 (struct platform_device*,struct sti_hqvdp*) ;
 int FUNC_13 (void*) ;
 int FUNC_14 (struct resource*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_5)
{
 struct device *VAR_6 = &VAR_5->dev;
 struct device_node *VAR_7;
 struct sti_hqvdp *VAR_8;
 struct resource *VAR_9;

 FUNC_0("\n");

 VAR_8 = FUNC_6(VAR_6, sizeof(*VAR_8), VAR_2);
 if (!VAR_8) {
  FUNC_1("Failed to allocate HQVDP context\n");
  return -VAR_0;
 }

 VAR_8->dev = VAR_6;


 VAR_9 = FUNC_11(VAR_5, VAR_3, 0);
 if (!VAR_9) {
  FUNC_1("Get memory resource failed\n");
  return -VAR_1;
 }
 VAR_8->regs = FUNC_5(VAR_6, VAR_9->start, FUNC_14(VAR_9));
 if (!VAR_8->regs) {
  FUNC_1("Register mapping failed\n");
  return -VAR_1;
 }


 VAR_8->clk = FUNC_4(VAR_6, "hqvdp");
 VAR_8->clk_pix_main = FUNC_4(VAR_6, "pix_main");
 if (FUNC_2(VAR_8->clk) || FUNC_2(VAR_8->clk_pix_main)) {
  FUNC_1("Cannot get clocks\n");
  return -VAR_1;
 }


 VAR_8->reset = FUNC_7(VAR_6, "hqvdp");
 if (!FUNC_2(VAR_8->reset))
  FUNC_13(VAR_8->reset);

 VAR_7 = FUNC_9(VAR_5->dev.of_node, "st,vtg", 0);
 if (VAR_7)
  VAR_8->vtg = FUNC_10(VAR_7);
 FUNC_8(VAR_7);

 FUNC_12(VAR_5, VAR_8);

 return FUNC_3(&VAR_5->dev, &VAR_4);
}
