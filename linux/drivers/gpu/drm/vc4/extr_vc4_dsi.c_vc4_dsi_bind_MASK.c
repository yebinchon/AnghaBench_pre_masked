
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int * bridge; } ;
struct TYPE_6__ {TYPE_3__ base; int type; } ;
struct vc4_dsi_encoder {TYPE_1__ base; struct vc4_dsi* dsi; } ;
struct TYPE_7__ {void* nregs; void* regs; void* base; } ;
struct vc4_dsi {uintptr_t port; TYPE_2__ regset; TYPE_3__* encoder; void* bridge; void* escape_clock; void* pixel_clock; void* pll_phy_clock; scalar_t__ reg_dma_mem; int xfer_completion; int reg_paddr; void* reg_dma_chan; int reg_dma_paddr; void* regs; } ;
struct vc4_dev {struct vc4_dsi* dsi1; } ;
struct platform_device {int dummy; } ;
struct of_device_id {scalar_t__ data; } ;
struct drm_panel {int dummy; } ;
struct drm_device {int dummy; } ;
struct device {int of_node; } ;
typedef int dma_cap_mask_t ;


 void* FUNC_0 (void*) ;
 int VAR_0 ;
 int FUNC_1 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_4 (void*) ;
 int FUNC_5 (void*) ;
 int VAR_13 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (void*,int) ;
 int FUNC_8 (struct device*,char*,int,...) ;
 void* FUNC_9 (struct device*) ;
 void* FUNC_10 (struct device*,char*) ;
 void* FUNC_11 (struct device*,struct drm_panel*,int ) ;
 struct vc4_dsi_encoder* FUNC_12 (struct device*,int,int ) ;
 int FUNC_13 (struct device*,int ,int ,int ,char*,struct vc4_dsi*) ;
 int FUNC_14 (struct device*,int ,int ,int ,int ,char*,struct vc4_dsi*) ;
 scalar_t__ FUNC_15 (struct device*,int,int *,int ) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int ) ;
 void* FUNC_18 (int *) ;
 int FUNC_19 (TYPE_3__*,void*,int *) ;
 int FUNC_20 (TYPE_3__*,int *) ;
 int FUNC_21 (struct drm_device*,TYPE_3__*,int *,int ,int *) ;
 int FUNC_22 (int ,int ,int ,struct drm_panel**,void**) ;
 void* VAR_14 ;
 void* VAR_15 ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int ,int ,int *,int *) ;
 struct of_device_id* FUNC_25 (int ,struct device*) ;
 int FUNC_26 (struct platform_device*,int ) ;
 int FUNC_27 (struct device*) ;
 struct platform_device* FUNC_28 (struct device*) ;
 struct vc4_dev* FUNC_29 (struct drm_device*) ;
 int FUNC_30 (struct drm_device*,char*,TYPE_2__*) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_31 (struct vc4_dsi*) ;
 int VAR_19 ;
 int VAR_20 ;
 void* FUNC_32 (struct platform_device*,int ) ;

__attribute__((used)) static int FUNC_33(struct device *VAR_21, struct device *VAR_22, void *VAR_23)
{
 struct platform_device *VAR_24 = FUNC_28(VAR_21);
 struct drm_device *VAR_25 = FUNC_9(VAR_22);
 struct vc4_dev *VAR_26 = FUNC_29(VAR_25);
 struct vc4_dsi *VAR_27 = FUNC_9(VAR_21);
 struct vc4_dsi_encoder *VAR_28;
 struct drm_panel *VAR_29;
 const struct of_device_id *VAR_30;
 dma_cap_mask_t VAR_31;
 int VAR_32;

 VAR_30 = FUNC_25(VAR_16, VAR_21);
 if (!VAR_30)
  return -VAR_5;

 VAR_27->port = (uintptr_t)VAR_30->data;

 VAR_28 = FUNC_12(VAR_21, sizeof(*VAR_28),
           VAR_8);
 if (!VAR_28)
  return -VAR_6;
 VAR_28->base.type = VAR_13;
 VAR_28->dsi = VAR_27;
 VAR_27->encoder = &VAR_28->base.base;

 VAR_27->regs = FUNC_32(VAR_24, 0);
 if (FUNC_4(VAR_27->regs))
  return FUNC_5(VAR_27->regs);

 VAR_27->regset.base = VAR_27->regs;
 if (VAR_27->port == 0) {
  VAR_27->regset.regs = VAR_14;
  VAR_27->regset.nregs = FUNC_0(VAR_14);
 } else {
  VAR_27->regset.regs = VAR_15;
  VAR_27->regset.nregs = FUNC_0(VAR_15);
 }

 if (FUNC_2(VAR_9) != VAR_4) {
  FUNC_8(VAR_21, "Port returned 0x%08x for ID instead of 0x%08x\n",
   FUNC_2(VAR_9), VAR_4);
  return -VAR_5;
 }





 if (VAR_27->port == 1) {
  VAR_27->reg_dma_mem = FUNC_15(VAR_21, 4,
            &VAR_27->reg_dma_paddr,
            VAR_8);
  if (!VAR_27->reg_dma_mem) {
   FUNC_1("Failed to get DMA memory\n");
   return -VAR_6;
  }

  FUNC_17(VAR_31);
  FUNC_16(VAR_0, VAR_31);
  VAR_27->reg_dma_chan = FUNC_18(&VAR_31);
  if (FUNC_4(VAR_27->reg_dma_chan)) {
   VAR_32 = FUNC_5(VAR_27->reg_dma_chan);
   if (VAR_32 != -VAR_7)
    FUNC_1("Failed to get DMA channel: %d\n",
       VAR_32);
   return VAR_32;
  }





  VAR_27->reg_paddr = FUNC_6(FUNC_24(VAR_21->of_node,
            0, ((void*)0), ((void*)0)));
 }

 FUNC_23(&VAR_27->xfer_completion);

 FUNC_3(VAR_10, VAR_3);

 FUNC_3(VAR_11, FUNC_2(VAR_11));

 if (VAR_27->reg_dma_mem)
  VAR_32 = FUNC_14(VAR_21, FUNC_26(VAR_24, 0),
      VAR_19,
      VAR_20,
      VAR_12,
      "vc4 dsi", VAR_27);
 else
  VAR_32 = FUNC_13(VAR_21, FUNC_26(VAR_24, 0),
           VAR_20, 0, "vc4 dsi", VAR_27);
 if (VAR_32) {
  if (VAR_32 != -VAR_7)
   FUNC_8(VAR_21, "Failed to get interrupt: %d\n", VAR_32);
  return VAR_32;
 }

 VAR_27->escape_clock = FUNC_10(VAR_21, "escape");
 if (FUNC_4(VAR_27->escape_clock)) {
  VAR_32 = FUNC_5(VAR_27->escape_clock);
  if (VAR_32 != -VAR_7)
   FUNC_8(VAR_21, "Failed to get escape clock: %d\n", VAR_32);
  return VAR_32;
 }

 VAR_27->pll_phy_clock = FUNC_10(VAR_21, "phy");
 if (FUNC_4(VAR_27->pll_phy_clock)) {
  VAR_32 = FUNC_5(VAR_27->pll_phy_clock);
  if (VAR_32 != -VAR_7)
   FUNC_8(VAR_21, "Failed to get phy clock: %d\n", VAR_32);
  return VAR_32;
 }

 VAR_27->pixel_clock = FUNC_10(VAR_21, "pixel");
 if (FUNC_4(VAR_27->pixel_clock)) {
  VAR_32 = FUNC_5(VAR_27->pixel_clock);
  if (VAR_32 != -VAR_7)
   FUNC_8(VAR_21, "Failed to get pixel clock: %d\n", VAR_32);
  return VAR_32;
 }

 VAR_32 = FUNC_22(VAR_21->of_node, 0, 0,
       &VAR_29, &VAR_27->bridge);
 if (VAR_32) {






  if (VAR_32 == -VAR_5)
   return 0;

  return VAR_32;
 }

 if (VAR_29) {
  VAR_27->bridge = FUNC_11(VAR_21, VAR_29,
       VAR_1);
  if (FUNC_4(VAR_27->bridge))
   return FUNC_5(VAR_27->bridge);
 }


 VAR_32 = FUNC_7(VAR_27->escape_clock, 100 * 1000000);
 if (VAR_32) {
  FUNC_8(VAR_21, "Failed to set esc clock: %d\n", VAR_32);
  return VAR_32;
 }

 VAR_32 = FUNC_31(VAR_27);
 if (VAR_32)
  return VAR_32;

 if (VAR_27->port == 1)
  VAR_26->dsi1 = VAR_27;

 FUNC_21(VAR_25, VAR_27->encoder, &VAR_17,
    VAR_2, ((void*)0));
 FUNC_20(VAR_27->encoder, &VAR_18);

 VAR_32 = FUNC_19(VAR_27->encoder, VAR_27->bridge, ((void*)0));
 if (VAR_32) {
  FUNC_8(VAR_21, "bridge attach failed: %d\n", VAR_32);
  return VAR_32;
 }





 VAR_27->encoder->bridge = ((void*)0);

 if (VAR_27->port == 0)
  FUNC_30(VAR_25, "dsi0_regs", &VAR_27->regset);
 else
  FUNC_30(VAR_25, "dsi1_regs", &VAR_27->regset);

 FUNC_27(VAR_21);

 return 0;
}
