
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct regmap {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct mtk_hdmi {int ddc_adpt; int next_bridge; struct regmap* regs; struct regmap* sys_regmap; int sys_offset; struct device* cec_dev; int dev; } ;
struct device_node {int parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 int FUNC_2 (struct device*,char*,...) ;
 struct regmap* FUNC_3 (struct device*,struct resource*) ;
 int FUNC_4 (struct mtk_hdmi*,struct device_node*) ;
 int FUNC_5 (struct device_node*,char*) ;
 int FUNC_6 (struct device_node*) ;
 struct platform_device* FUNC_7 (struct device_node*) ;
 int FUNC_8 (struct device_node*) ;
 struct device_node* FUNC_9 (int ,char*) ;
 struct device_node* FUNC_10 (struct device_node*,int,int ) ;
 int FUNC_11 (struct device_node*) ;
 struct device_node* FUNC_12 (struct device_node*,char*,int ) ;
 int FUNC_13 (struct device_node*,char*,int,int *) ;
 struct resource* FUNC_14 (struct platform_device*,int ,int ) ;
 struct regmap* FUNC_15 (struct device_node*,char*) ;

__attribute__((used)) static int FUNC_16(struct mtk_hdmi *VAR_3,
       struct platform_device *VAR_4)
{
 struct device *VAR_5 = &VAR_4->dev;
 struct device_node *VAR_6 = VAR_5->of_node;
 struct device_node *VAR_7, *VAR_8, *VAR_9;
 struct platform_device *VAR_10;
 struct regmap *VAR_11;
 struct resource *VAR_12;
 int VAR_13;

 VAR_13 = FUNC_4(VAR_3, VAR_6);
 if (VAR_13) {
  FUNC_2(VAR_5, "Failed to get clocks: %d\n", VAR_13);
  return VAR_13;
 }


 VAR_7 = FUNC_9(VAR_6->parent, "mediatek,mt8173-cec");
 if (!VAR_7) {
  FUNC_2(VAR_5, "Failed to find CEC node\n");
  return -VAR_0;
 }

 VAR_10 = FUNC_7(VAR_7);
 if (!VAR_10) {
  FUNC_2(VAR_3->dev, "Waiting for CEC device %pOF\n",
   VAR_7);
  FUNC_11(VAR_7);
  return -VAR_1;
 }
 FUNC_11(VAR_7);
 VAR_3->cec_dev = &VAR_10->dev;






 VAR_11 = FUNC_15(VAR_6, "mediatek,syscon-hdmi");
 VAR_13 = FUNC_13(VAR_6, "mediatek,syscon-hdmi", 1,
      &VAR_3->sys_offset);
 if (FUNC_0(VAR_11))
  VAR_13 = FUNC_1(VAR_11);
 if (VAR_13) {
  FUNC_2(VAR_5,
   "Failed to get system configuration registers: %d\n",
   VAR_13);
  return VAR_13;
 }
 VAR_3->sys_regmap = VAR_11;

 VAR_12 = FUNC_14(VAR_4, VAR_2, 0);
 VAR_3->regs = FUNC_3(VAR_5, VAR_12);
 if (FUNC_0(VAR_3->regs))
  return FUNC_1(VAR_3->regs);

 VAR_8 = FUNC_10(VAR_6, 1, 0);
 if (!VAR_8)
  return -VAR_0;

 if (!FUNC_5(VAR_8, "hdmi-connector")) {
  VAR_3->next_bridge = FUNC_6(VAR_8);
  if (!VAR_3->next_bridge) {
   FUNC_2(VAR_5, "Waiting for external bridge\n");
   FUNC_11(VAR_8);
   return -VAR_1;
  }
 }

 VAR_9 = FUNC_12(VAR_8, "ddc-i2c-bus", 0);
 if (!VAR_9) {
  FUNC_2(VAR_5, "Failed to find ddc-i2c-bus node in %pOF\n",
   VAR_8);
  FUNC_11(VAR_8);
  return -VAR_0;
 }
 FUNC_11(VAR_8);

 VAR_3->ddc_adpt = FUNC_8(VAR_9);
 FUNC_11(VAR_9);
 if (!VAR_3->ddc_adpt) {
  FUNC_2(VAR_5, "Failed to get ddc i2c adapter by node\n");
  return -VAR_0;
 }

 return 0;
}
