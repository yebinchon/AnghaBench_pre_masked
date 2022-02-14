
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zx_vou_hw {void* axi_clk; void* ppu_clk; struct device* dev; void* otfppu; void* vouctl; void* dtrc; void* timing; void* osd; } ;
struct resource {int dummy; } ;
struct platform_device {int dummy; } ;
struct drm_device {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (struct device*,struct zx_vou_hw*) ;
 void* FUNC_6 (struct device*,char*) ;
 void* FUNC_7 (struct device*,struct resource*) ;
 struct zx_vou_hw* FUNC_8 (struct device*,int,int ) ;
 int FUNC_9 (struct device*,int,int ,int ,char*,struct zx_vou_hw*) ;
 int FUNC_10 (struct platform_device*,int ) ;
 struct resource* FUNC_11 (struct platform_device*,int ,char*) ;
 struct platform_device* FUNC_12 (struct device*) ;
 int FUNC_13 (struct zx_vou_hw*) ;
 int VAR_5 ;
 int FUNC_14 (struct drm_device*,struct zx_vou_hw*,int ) ;
 int FUNC_15 (struct drm_device*,struct zx_vou_hw*) ;

__attribute__((used)) static int FUNC_16(struct device *VAR_6, struct device *VAR_7, void *VAR_8)
{
 struct platform_device *VAR_9 = FUNC_12(VAR_6);
 struct drm_device *VAR_10 = VAR_8;
 struct zx_vou_hw *VAR_11;
 struct resource *VAR_12;
 int VAR_13;
 int VAR_14;

 VAR_11 = FUNC_8(VAR_6, sizeof(*VAR_11), VAR_1);
 if (!VAR_11)
  return -VAR_0;

 VAR_12 = FUNC_11(VAR_9, VAR_2, "osd");
 VAR_11->osd = FUNC_7(VAR_6, VAR_12);
 if (FUNC_1(VAR_11->osd)) {
  VAR_14 = FUNC_2(VAR_11->osd);
  FUNC_0(VAR_6, "failed to remap osd region: %d\n", VAR_14);
  return VAR_14;
 }

 VAR_12 = FUNC_11(VAR_9, VAR_2, "timing_ctrl");
 VAR_11->timing = FUNC_7(VAR_6, VAR_12);
 if (FUNC_1(VAR_11->timing)) {
  VAR_14 = FUNC_2(VAR_11->timing);
  FUNC_0(VAR_6, "failed to remap timing_ctrl region: %d\n",
         VAR_14);
  return VAR_14;
 }

 VAR_12 = FUNC_11(VAR_9, VAR_2, "dtrc");
 VAR_11->dtrc = FUNC_7(VAR_6, VAR_12);
 if (FUNC_1(VAR_11->dtrc)) {
  VAR_14 = FUNC_2(VAR_11->dtrc);
  FUNC_0(VAR_6, "failed to remap dtrc region: %d\n", VAR_14);
  return VAR_14;
 }

 VAR_12 = FUNC_11(VAR_9, VAR_2, "vou_ctrl");
 VAR_11->vouctl = FUNC_7(VAR_6, VAR_12);
 if (FUNC_1(VAR_11->vouctl)) {
  VAR_14 = FUNC_2(VAR_11->vouctl);
  FUNC_0(VAR_6, "failed to remap vou_ctrl region: %d\n",
         VAR_14);
  return VAR_14;
 }

 VAR_12 = FUNC_11(VAR_9, VAR_2, "otfppu");
 VAR_11->otfppu = FUNC_7(VAR_6, VAR_12);
 if (FUNC_1(VAR_11->otfppu)) {
  VAR_14 = FUNC_2(VAR_11->otfppu);
  FUNC_0(VAR_6, "failed to remap otfppu region: %d\n", VAR_14);
  return VAR_14;
 }

 VAR_13 = FUNC_10(VAR_9, 0);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_11->axi_clk = FUNC_6(VAR_6, "aclk");
 if (FUNC_1(VAR_11->axi_clk)) {
  VAR_14 = FUNC_2(VAR_11->axi_clk);
  FUNC_0(VAR_6, "failed to get axi_clk: %d\n", VAR_14);
  return VAR_14;
 }

 VAR_11->ppu_clk = FUNC_6(VAR_6, "ppu_wclk");
 if (FUNC_1(VAR_11->ppu_clk)) {
  VAR_14 = FUNC_2(VAR_11->ppu_clk);
  FUNC_0(VAR_6, "failed to get ppu_clk: %d\n", VAR_14);
  return VAR_14;
 }

 VAR_14 = FUNC_4(VAR_11->axi_clk);
 if (VAR_14) {
  FUNC_0(VAR_6, "failed to enable axi_clk: %d\n", VAR_14);
  return VAR_14;
 }

 FUNC_4(VAR_11->ppu_clk);
 if (VAR_14) {
  FUNC_0(VAR_6, "failed to enable ppu_clk: %d\n", VAR_14);
  goto disable_axi_clk;
 }

 VAR_11->dev = VAR_6;
 FUNC_5(VAR_6, VAR_11);

 FUNC_13(VAR_11);

 VAR_14 = FUNC_9(VAR_6, VAR_13, VAR_5, 0, "zx_vou", VAR_11);
 if (VAR_14 < 0) {
  FUNC_0(VAR_6, "failed to request vou irq: %d\n", VAR_14);
  goto disable_ppu_clk;
 }

 VAR_14 = FUNC_14(VAR_10, VAR_11, VAR_4);
 if (VAR_14) {
  FUNC_0(VAR_6, "failed to init main channel crtc: %d\n",
         VAR_14);
  goto disable_ppu_clk;
 }

 VAR_14 = FUNC_14(VAR_10, VAR_11, VAR_3);
 if (VAR_14) {
  FUNC_0(VAR_6, "failed to init aux channel crtc: %d\n",
         VAR_14);
  goto disable_ppu_clk;
 }

 FUNC_15(VAR_10, VAR_11);

 return 0;

disable_ppu_clk:
 FUNC_3(VAR_11->ppu_clk);
disable_axi_clk:
 FUNC_3(VAR_11->axi_clk);
 return VAR_14;
}
