
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct resource {int end; int start; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct TYPE_4__ {struct device* parent; int of_node; } ;
struct TYPE_5__ {int retries; TYPE_1__ dev; struct mtk_hdmi_ddc* algo_data; int * algo; int class; int owner; int name; } ;
struct mtk_hdmi_ddc {int clk; TYPE_2__ adap; int regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct device*,char*,TYPE_2__*,...) ;
 int FUNC_5 (struct device*,char*,...) ;
 int FUNC_6 (struct device*,char*) ;
 int FUNC_7 (struct device*,struct resource*) ;
 struct mtk_hdmi_ddc* FUNC_8 (struct device*,int,int ) ;
 int FUNC_9 (TYPE_2__*) ;
 int VAR_5 ;
 struct resource* FUNC_10 (struct platform_device*,int ,int ) ;
 int FUNC_11 (struct platform_device*,struct mtk_hdmi_ddc*) ;
 int FUNC_12 (int ,char*,int) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_6)
{
 struct device *VAR_7 = &VAR_6->dev;
 struct mtk_hdmi_ddc *VAR_8;
 struct resource *VAR_9;
 int VAR_10;

 VAR_8 = FUNC_8(VAR_7, sizeof(struct mtk_hdmi_ddc), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_8->clk = FUNC_6(VAR_7, "ddc-i2c");
 if (FUNC_0(VAR_8->clk)) {
  FUNC_5(VAR_7, "get ddc_clk failed: %p ,\n", VAR_8->clk);
  return FUNC_1(VAR_8->clk);
 }

 VAR_9 = FUNC_10(VAR_6, VAR_3, 0);
 VAR_8->regs = FUNC_7(&VAR_6->dev, VAR_9);
 if (FUNC_0(VAR_8->regs))
  return FUNC_1(VAR_8->regs);

 VAR_10 = FUNC_3(VAR_8->clk);
 if (VAR_10) {
  FUNC_5(VAR_7, "enable ddc clk failed!\n");
  return VAR_10;
 }

 FUNC_12(VAR_8->adap.name, "mediatek-hdmi-ddc", sizeof(VAR_8->adap.name));
 VAR_8->adap.owner = VAR_4;
 VAR_8->adap.class = VAR_2;
 VAR_8->adap.algo = &VAR_5;
 VAR_8->adap.retries = 3;
 VAR_8->adap.dev.of_node = VAR_7->of_node;
 VAR_8->adap.algo_data = VAR_8;
 VAR_8->adap.dev.parent = &VAR_6->dev;

 VAR_10 = FUNC_9(&VAR_8->adap);
 if (VAR_10 < 0) {
  FUNC_5(VAR_7, "failed to add bus to i2c core\n");
  goto err_clk_disable;
 }

 FUNC_11(VAR_6, VAR_8);

 FUNC_4(VAR_7, "ddc->adap: %p\n", &VAR_8->adap);
 FUNC_4(VAR_7, "ddc->clk: %p\n", VAR_8->clk);
 FUNC_4(VAR_7, "physical adr: %pa, end: %pa\n", &VAR_9->start,
  &VAR_9->end);

 return 0;

err_clk_disable:
 FUNC_2(VAR_8->clk);
 return VAR_10;
}
