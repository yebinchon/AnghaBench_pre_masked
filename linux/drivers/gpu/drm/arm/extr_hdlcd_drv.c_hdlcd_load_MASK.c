
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct resource {int dummy; } ;
struct platform_device {int dummy; } ;
struct hdlcd_drm_private {int crtc; int * mmio; int dma_end_count; int vsync_count; int bus_error_count; int buffer_underrun_count; int * clk; } ;
struct drm_device {int dev; struct hdlcd_drm_private* dev_private; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int * FUNC_6 (int ,char*) ;
 int * FUNC_7 (int ,struct resource*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct drm_device*,int ) ;
 int FUNC_11 (struct hdlcd_drm_private*,int ) ;
 int FUNC_12 (struct drm_device*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (struct platform_device*,int ) ;
 struct resource* FUNC_16 (struct platform_device*,int ,int ) ;
 struct platform_device* FUNC_17 (int ) ;

__attribute__((used)) static int FUNC_18(struct drm_device *VAR_8, unsigned long VAR_9)
{
 struct hdlcd_drm_private *VAR_10 = VAR_8->dev_private;
 struct platform_device *VAR_11 = FUNC_17(VAR_8->dev);
 struct resource *VAR_12;
 u32 VAR_13;
 int VAR_14;

 VAR_10->clk = FUNC_6(VAR_8->dev, "pxlclk");
 if (FUNC_3(VAR_10->clk))
  return FUNC_4(VAR_10->clk);
 VAR_12 = FUNC_16(VAR_11, VAR_7, 0);
 VAR_10->mmio = FUNC_7(VAR_8->dev, VAR_12);
 if (FUNC_3(VAR_10->mmio)) {
  FUNC_1("failed to map control registers area\n");
  VAR_14 = FUNC_4(VAR_10->mmio);
  VAR_10->mmio = ((void*)0);
  return VAR_14;
 }

 VAR_13 = FUNC_11(VAR_10, VAR_4);
 if ((VAR_13 & VAR_3) != VAR_2) {
  FUNC_1("unknown product id: 0x%x\n", VAR_13);
  return -VAR_0;
 }
 FUNC_2("found ARM HDLCD version r%dp%d\n",
  (VAR_13 & VAR_5) >> 8,
  VAR_13 & VAR_6);


 VAR_14 = FUNC_13(VAR_8->dev);
 if (VAR_14 && VAR_14 != -VAR_1)
  return VAR_14;

 VAR_14 = FUNC_8(VAR_8->dev, FUNC_0(32));
 if (VAR_14)
  goto setup_fail;

 VAR_14 = FUNC_12(VAR_8);
 if (VAR_14 < 0) {
  FUNC_1("failed to create crtc\n");
  goto setup_fail;
 }

 VAR_14 = FUNC_10(VAR_8, FUNC_15(VAR_11, 0));
 if (VAR_14 < 0) {
  FUNC_1("failed to install IRQ handler\n");
  goto irq_fail;
 }

 return 0;

irq_fail:
 FUNC_9(&VAR_10->crtc);
setup_fail:
 FUNC_14(VAR_8->dev);

 return VAR_14;
}
