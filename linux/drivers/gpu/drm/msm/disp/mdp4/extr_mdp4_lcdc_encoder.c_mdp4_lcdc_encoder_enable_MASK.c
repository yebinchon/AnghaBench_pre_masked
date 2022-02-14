
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct mdp4_lcdc_encoder {unsigned long pixclock; int enabled; int panel_node; int lcdc_clk; int * regs; } ;
struct mdp4_kms {int dummy; } ;
struct drm_panel {int dummy; } ;
struct drm_encoder {int crtc; struct drm_device* dev; } ;
struct drm_device {TYPE_1__* dev; } ;
struct TYPE_2__ {int of_node; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (char*,unsigned long) ;
 int FUNC_2 (TYPE_1__*,char*,int) ;
 int VAR_1 ;
 int FUNC_3 (struct drm_panel*) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int VAR_4 ;
 int FUNC_7 (int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (struct mdp4_lcdc_encoder*,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,unsigned long) ;
 int FUNC_12 (struct drm_panel*) ;
 int FUNC_13 (struct drm_panel*) ;
 struct mdp4_kms* FUNC_14 (struct drm_encoder*) ;
 int FUNC_15 (int ,int) ;
 int FUNC_16 (int ,int ,int ) ;
 int FUNC_17 (struct mdp4_kms*,int ,int) ;
 struct drm_panel* FUNC_18 (int ) ;
 int FUNC_19 (int ,char*) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (struct drm_encoder*) ;
 struct mdp4_lcdc_encoder* FUNC_22 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_23(struct drm_encoder *VAR_6)
{
 struct drm_device *VAR_7 = VAR_6->dev;
 struct mdp4_lcdc_encoder *VAR_8 =
   FUNC_22(VAR_6);
 unsigned long VAR_9 = VAR_8->pixclock;
 struct mdp4_kms *VAR_10 = FUNC_14(VAR_6);
 struct drm_panel *VAR_11;
 uint32_t VAR_12;
 int VAR_13, VAR_14;

 if (FUNC_8(VAR_8->enabled))
  return;


 VAR_12 =
  FUNC_7(VAR_0) |
  FUNC_5(VAR_0) |
  FUNC_4(VAR_0) |
  FUNC_6(0x21) |
  VAR_2 |
  VAR_3;

 if (!FUNC_19(VAR_7->dev->of_node, "qcom,lcdc-align-lsb"))
  VAR_12 |= VAR_4;

 FUNC_15(VAR_6->crtc, VAR_12);
 FUNC_16(VAR_6->crtc, VAR_1, 0);

 FUNC_9(VAR_8, 1);

 for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_8->regs); VAR_13++) {
  VAR_14 = FUNC_20(VAR_8->regs[VAR_13]);
  if (VAR_14)
   FUNC_2(VAR_7->dev, "failed to enable regulator: %d\n", VAR_14);
 }

 FUNC_1("setting lcdc_clk=%lu", VAR_9);
 VAR_14 = FUNC_11(VAR_8->lcdc_clk, VAR_9);
 if (VAR_14)
  FUNC_2(VAR_7->dev, "failed to configure lcdc_clk: %d\n", VAR_14);
 VAR_14 = FUNC_10(VAR_8->lcdc_clk);
 if (VAR_14)
  FUNC_2(VAR_7->dev, "failed to enable lcdc_clk: %d\n", VAR_14);

 VAR_11 = FUNC_18(VAR_8->panel_node);
 if (!FUNC_3(VAR_11)) {
  FUNC_13(VAR_11);
  FUNC_12(VAR_11);
 }

 FUNC_21(VAR_6);

 FUNC_17(VAR_10, VAR_5, 1);

 VAR_8->enabled = 1;
}
