
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zx_hdmi {void* xclk; struct device* dev; void* osc_clk; void* cec_clk; void* mmio; struct drm_device* drm; } ;
struct resource {int dummy; } ;
struct platform_device {int dummy; } ;
struct drm_device {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*,struct zx_hdmi*) ;
 void* FUNC_5 (struct device*,char*) ;
 void* FUNC_6 (struct device*,struct resource*) ;
 struct zx_hdmi* FUNC_7 (struct device*,int,int ) ;
 int FUNC_8 (struct device*,int,int ,int ,int ,int ,struct zx_hdmi*) ;
 int FUNC_9 (struct platform_device*,int ) ;
 struct resource* FUNC_10 (struct platform_device*,int ,int ) ;
 struct platform_device* FUNC_11 (struct device*) ;
 int FUNC_12 (struct zx_hdmi*) ;
 int FUNC_13 (struct zx_hdmi*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_14 (struct drm_device*,struct zx_hdmi*) ;

__attribute__((used)) static int FUNC_15(struct device *VAR_6, struct device *VAR_7, void *VAR_8)
{
 struct platform_device *VAR_9 = FUNC_11(VAR_6);
 struct drm_device *VAR_10 = VAR_8;
 struct resource *VAR_11;
 struct zx_hdmi *VAR_12;
 int VAR_13;
 int VAR_14;

 VAR_12 = FUNC_7(VAR_6, sizeof(*VAR_12), VAR_1);
 if (!VAR_12)
  return -VAR_0;

 VAR_12->dev = VAR_6;
 VAR_12->drm = VAR_10;

 FUNC_4(VAR_6, VAR_12);

 VAR_11 = FUNC_10(VAR_9, VAR_2, 0);
 VAR_12->mmio = FUNC_6(VAR_6, VAR_11);
 if (FUNC_1(VAR_12->mmio)) {
  VAR_14 = FUNC_2(VAR_12->mmio);
  FUNC_0(VAR_6, "failed to remap hdmi region: %d\n", VAR_14);
  return VAR_14;
 }

 VAR_13 = FUNC_9(VAR_9, 0);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_12->cec_clk = FUNC_5(VAR_12->dev, "osc_cec");
 if (FUNC_1(VAR_12->cec_clk)) {
  VAR_14 = FUNC_2(VAR_12->cec_clk);
  FUNC_0(VAR_6, "failed to get cec_clk: %d\n", VAR_14);
  return VAR_14;
 }

 VAR_12->osc_clk = FUNC_5(VAR_12->dev, "osc_clk");
 if (FUNC_1(VAR_12->osc_clk)) {
  VAR_14 = FUNC_2(VAR_12->osc_clk);
  FUNC_0(VAR_6, "failed to get osc_clk: %d\n", VAR_14);
  return VAR_14;
 }

 VAR_12->xclk = FUNC_5(VAR_12->dev, "xclk");
 if (FUNC_1(VAR_12->xclk)) {
  VAR_14 = FUNC_2(VAR_12->xclk);
  FUNC_0(VAR_6, "failed to get xclk: %d\n", VAR_14);
  return VAR_14;
 }

 VAR_14 = FUNC_13(VAR_12);
 if (VAR_14) {
  FUNC_0(VAR_6, "failed to register ddc: %d\n", VAR_14);
  return VAR_14;
 }

 VAR_14 = FUNC_12(VAR_12);
 if (VAR_14) {
  FUNC_0(VAR_6, "failed to register audio: %d\n", VAR_14);
  return VAR_14;
 }

 VAR_14 = FUNC_14(VAR_10, VAR_12);
 if (VAR_14) {
  FUNC_0(VAR_6, "failed to register hdmi: %d\n", VAR_14);
  return VAR_14;
 }

 VAR_14 = FUNC_8(VAR_6, VAR_13, VAR_4,
     VAR_5, VAR_3,
     FUNC_3(VAR_6), VAR_12);
 if (VAR_14) {
  FUNC_0(VAR_6, "failed to request threaded irq: %d\n", VAR_14);
  return VAR_14;
 }

 return 0;
}
