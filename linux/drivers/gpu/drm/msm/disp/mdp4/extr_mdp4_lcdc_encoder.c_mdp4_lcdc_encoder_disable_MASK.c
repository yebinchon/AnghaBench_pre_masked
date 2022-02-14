
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdp4_lcdc_encoder {int enabled; int * regs; int lcdc_clk; int panel_node; } ;
struct mdp4_kms {int base; } ;
struct drm_panel {int dummy; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct drm_panel*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct mdp4_lcdc_encoder*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct drm_panel*) ;
 int FUNC_7 (struct drm_panel*) ;
 struct mdp4_kms* FUNC_8 (struct drm_encoder*) ;
 int FUNC_9 (struct mdp4_kms*,int ,int ) ;
 int FUNC_10 (int *,int ) ;
 struct drm_panel* FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 struct mdp4_lcdc_encoder* FUNC_13 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_14(struct drm_encoder *VAR_2)
{
 struct drm_device *VAR_3 = VAR_2->dev;
 struct mdp4_lcdc_encoder *VAR_4 =
   FUNC_13(VAR_2);
 struct mdp4_kms *VAR_5 = FUNC_8(VAR_2);
 struct drm_panel *VAR_6;
 int VAR_7, VAR_8;

 if (FUNC_3(!VAR_4->enabled))
  return;

 FUNC_9(VAR_5, VAR_1, 0);

 VAR_6 = FUNC_11(VAR_4->panel_node);
 if (!FUNC_2(VAR_6)) {
  FUNC_6(VAR_6);
  FUNC_7(VAR_6);
 }
 FUNC_10(&VAR_5->base, VAR_0);

 FUNC_5(VAR_4->lcdc_clk);

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_4->regs); VAR_7++) {
  VAR_8 = FUNC_12(VAR_4->regs[VAR_7]);
  if (VAR_8)
   FUNC_1(VAR_3->dev, "failed to disable regulator: %d\n", VAR_8);
 }

 FUNC_4(VAR_4, 0);

 VAR_4->enabled = 0;
}
