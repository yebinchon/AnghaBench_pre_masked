
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rockchip_lvds {int pclk; int grf; TYPE_1__* pins; struct device* dev; int regs; int soc_data; } ;
struct resource {int dummy; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct of_device_id {int data; } ;
struct TYPE_2__ {int default_state; int p; } ;


 int FUNC_0 (struct device*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct device*,int *) ;
 int FUNC_6 (struct device*,struct rockchip_lvds*) ;
 int FUNC_7 (struct device*,char*) ;
 int FUNC_8 (struct device*,struct resource*) ;
 int FUNC_9 (struct device*,TYPE_1__*) ;
 void* FUNC_10 (struct device*,int,int ) ;
 int FUNC_11 (struct device*) ;
 struct of_device_id* FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,char*) ;
 struct resource* FUNC_14 (struct platform_device*,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_15 (int ,char*) ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_6)
{
 struct device *VAR_7 = &VAR_6->dev;
 struct rockchip_lvds *VAR_8;
 const struct of_device_id *VAR_9;
 struct resource *VAR_10;
 int VAR_11;

 if (!VAR_7->of_node)
  return -VAR_0;

 VAR_8 = FUNC_10(&VAR_6->dev, sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_8->dev = VAR_7;
 VAR_9 = FUNC_12(VAR_5, VAR_7->of_node);
 if (!VAR_9)
  return -VAR_0;
 VAR_8->soc_data = VAR_9->data;

 VAR_10 = FUNC_14(VAR_6, VAR_3, 0);
 VAR_8->regs = FUNC_8(&VAR_6->dev, VAR_10);
 if (FUNC_1(VAR_8->regs))
  return FUNC_2(VAR_8->regs);

 VAR_8->pclk = FUNC_7(&VAR_6->dev, "pclk_lvds");
 if (FUNC_1(VAR_8->pclk)) {
  FUNC_0(VAR_7, "could not get pclk_lvds\n");
  return FUNC_2(VAR_8->pclk);
 }

 VAR_8->pins = FUNC_10(VAR_8->dev, sizeof(*VAR_8->pins),
      VAR_2);
 if (!VAR_8->pins)
  return -VAR_1;

 VAR_8->pins->p = FUNC_11(VAR_8->dev);
 if (FUNC_1(VAR_8->pins->p)) {
  FUNC_0(VAR_7, "no pinctrl handle\n");
  FUNC_9(VAR_8->dev, VAR_8->pins);
  VAR_8->pins = ((void*)0);
 } else {
  VAR_8->pins->default_state =
   FUNC_13(VAR_8->pins->p, "lcdc");
  if (FUNC_1(VAR_8->pins->default_state)) {
   FUNC_0(VAR_7, "no default pinctrl state\n");
   FUNC_9(VAR_8->dev, VAR_8->pins);
   VAR_8->pins = ((void*)0);
  }
 }

 VAR_8->grf = FUNC_15(VAR_7->of_node,
          "rockchip,grf");
 if (FUNC_1(VAR_8->grf)) {
  FUNC_0(VAR_7, "missing rockchip,grf property\n");
  return FUNC_2(VAR_8->grf);
 }

 FUNC_6(VAR_7, VAR_8);

 VAR_11 = FUNC_3(VAR_8->pclk);
 if (VAR_11 < 0) {
  FUNC_0(VAR_7, "failed to prepare pclk_lvds\n");
  return VAR_11;
 }
 VAR_11 = FUNC_5(&VAR_6->dev, &VAR_4);
 if (VAR_11 < 0) {
  FUNC_0(VAR_7, "failed to add component\n");
  FUNC_4(VAR_8->pclk);
 }

 return VAR_11;
}
