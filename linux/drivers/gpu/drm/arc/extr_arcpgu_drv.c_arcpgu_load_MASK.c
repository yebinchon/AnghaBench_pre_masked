
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct resource {int dummy; } ;
struct platform_device {int dev; } ;
struct drm_device {TYPE_1__* dev; struct arcpgu_drm_private* dev_private; } ;
struct device_node {int dummy; } ;
struct arcpgu_drm_private {int regs; int clk; } ;
struct TYPE_6__ {int of_node; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct arcpgu_drm_private*,int ) ;
 scalar_t__ FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct drm_device*,struct device_node*) ;
 int FUNC_6 (struct drm_device*,int *) ;
 int FUNC_7 (struct drm_device*) ;
 int FUNC_8 (TYPE_1__*,char*,int ) ;
 int FUNC_9 (TYPE_1__*,char*) ;
 int FUNC_10 (int *,struct resource*) ;
 struct arcpgu_drm_private* FUNC_11 (int *,int,int ) ;
 scalar_t__ FUNC_12 (TYPE_1__*,int ) ;
 int FUNC_13 (struct drm_device*) ;
 int FUNC_14 (struct drm_device*) ;
 int FUNC_15 (struct device_node*) ;
 struct device_node* FUNC_16 (int ,char*,int ) ;
 int FUNC_17 (TYPE_1__*) ;
 struct resource* FUNC_18 (struct platform_device*,int ,int ) ;
 int FUNC_19 (struct platform_device*,struct drm_device*) ;
 struct platform_device* FUNC_20 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_21(struct drm_device *VAR_5)
{
 struct platform_device *VAR_6 = FUNC_20(VAR_5->dev);
 struct arcpgu_drm_private *VAR_7;
 struct device_node *VAR_8;
 struct resource *VAR_9;
 int VAR_10;

 VAR_7 = FUNC_11(&VAR_6->dev, sizeof(*VAR_7), VAR_3);
 if (VAR_7 == ((void*)0))
  return -VAR_2;

 VAR_5->dev_private = VAR_7;

 VAR_7->clk = FUNC_9(VAR_5->dev, "pxlclk");
 if (FUNC_1(VAR_7->clk))
  return FUNC_2(VAR_7->clk);

 FUNC_7(VAR_5);

 VAR_9 = FUNC_18(VAR_6, VAR_4, 0);
 VAR_7->regs = FUNC_10(&VAR_6->dev, VAR_9);
 if (FUNC_1(VAR_7->regs))
  return FUNC_2(VAR_7->regs);

 FUNC_8(VAR_5->dev, "arc_pgu ID: 0x%x\n",
   FUNC_3(VAR_7, VAR_0));


 VAR_10 = FUNC_17(VAR_5->dev);
 if (VAR_10 && VAR_10 != -VAR_1)
  return VAR_10;

 if (FUNC_12(VAR_5->dev, FUNC_0(32)))
  return -VAR_1;

 if (FUNC_4(VAR_5) < 0)
  return -VAR_1;


 VAR_8 = FUNC_16(VAR_5->dev->of_node, "encoder-slave", 0);
 if (VAR_8) {
  VAR_10 = FUNC_5(VAR_5, VAR_8);
  FUNC_15(VAR_8);
  if (VAR_10 < 0)
   return VAR_10;
 } else {
  VAR_10 = FUNC_6(VAR_5, ((void*)0));
  if (VAR_10 < 0)
   return VAR_10;
 }

 FUNC_14(VAR_5);
 FUNC_13(VAR_5);

 FUNC_19(VAR_6, VAR_5);
 return 0;
}
