
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct platform_device {int dev; } ;
struct drm_device {int * dev; struct aspeed_gfx* dev_private; } ;
struct aspeed_gfx {scalar_t__ base; scalar_t__ clk; scalar_t__ rst; scalar_t__ scu; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct drm_device*) ;
 int VAR_5 ;
 int FUNC_5 (struct drm_device*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int *,char*,...) ;
 scalar_t__ FUNC_8 (int *,int *) ;
 scalar_t__ FUNC_9 (int *,struct resource*) ;
 struct aspeed_gfx* FUNC_10 (int *,int,int ) ;
 int FUNC_11 (int *,int ,int ,int ,char*,struct drm_device*) ;
 scalar_t__ FUNC_12 (int *,int *) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (struct drm_device*,int) ;
 int FUNC_15 (struct drm_device*) ;
 int FUNC_16 (struct drm_device*,int) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (struct platform_device*,int ) ;
 struct resource* FUNC_19 (struct platform_device*,int ,int ) ;
 int FUNC_20 (scalar_t__) ;
 scalar_t__ FUNC_21 (char*) ;
 struct platform_device* FUNC_22 (int *) ;
 int FUNC_23 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_24(struct drm_device *VAR_6)
{
 struct platform_device *VAR_7 = FUNC_22(VAR_6->dev);
 struct aspeed_gfx *VAR_8;
 struct resource *VAR_9;
 int VAR_10;

 VAR_8 = FUNC_10(&VAR_7->dev, sizeof(*VAR_8), VAR_3);
 if (!VAR_8)
  return -VAR_2;
 VAR_6->dev_private = VAR_8;

 VAR_9 = FUNC_19(VAR_7, VAR_4, 0);
 VAR_8->base = FUNC_9(VAR_6->dev, VAR_9);
 if (FUNC_1(VAR_8->base))
  return FUNC_2(VAR_8->base);

 VAR_8->scu = FUNC_21("aspeed,ast2500-scu");
 if (FUNC_1(VAR_8->scu)) {
  FUNC_7(&VAR_7->dev, "failed to find SCU regmap\n");
  return FUNC_2(VAR_8->scu);
 }

 VAR_10 = FUNC_17(VAR_6->dev);
 if (VAR_10) {
  FUNC_7(&VAR_7->dev,
   "failed to initialize reserved mem: %d\n", VAR_10);
  return VAR_10;
 }

 VAR_10 = FUNC_13(VAR_6->dev, FUNC_0(32));
 if (VAR_10) {
  FUNC_7(&VAR_7->dev, "failed to set DMA mask: %d\n", VAR_10);
  return VAR_10;
 }

 VAR_8->rst = FUNC_12(&VAR_7->dev, ((void*)0));
 if (FUNC_1(VAR_8->rst)) {
  FUNC_7(&VAR_7->dev,
   "missing or invalid reset controller device tree entry");
  return FUNC_2(VAR_8->rst);
 }
 FUNC_20(VAR_8->rst);

 VAR_8->clk = FUNC_8(VAR_6->dev, ((void*)0));
 if (FUNC_1(VAR_8->clk)) {
  FUNC_7(&VAR_7->dev,
   "missing or invalid clk device tree entry");
  return FUNC_2(VAR_8->clk);
 }
 FUNC_6(VAR_8->clk);


 FUNC_23(0, VAR_8->base + VAR_0);
 FUNC_23(0, VAR_8->base + VAR_1);

 FUNC_5(VAR_6);

 VAR_10 = FUNC_16(VAR_6, 1);
 if (VAR_10 < 0) {
  FUNC_7(VAR_6->dev, "Failed to initialise vblank\n");
  return VAR_10;
 }

 VAR_10 = FUNC_3(VAR_6);
 if (VAR_10 < 0) {
  FUNC_7(VAR_6->dev, "Failed to create outputs\n");
  return VAR_10;
 }

 VAR_10 = FUNC_4(VAR_6);
 if (VAR_10 < 0) {
  FUNC_7(VAR_6->dev, "Cannot setup simple display pipe\n");
  return VAR_10;
 }

 VAR_10 = FUNC_11(VAR_6->dev, FUNC_18(VAR_7, 0),
          VAR_5, 0, "aspeed gfx", VAR_6);
 if (VAR_10 < 0) {
  FUNC_7(VAR_6->dev, "Failed to install IRQ handler\n");
  return VAR_10;
 }

 FUNC_15(VAR_6);

 FUNC_14(VAR_6, 32);

 return 0;
}
