
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdp4_kms {int dummy; } ;
struct mdp4_dtv_encoder {unsigned long pixclock; int enabled; int hdmi_clk; int mdp_clk; } ;
struct drm_encoder {int crtc; struct drm_device* dev; } ;
struct drm_device {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (char*,unsigned long) ;
 int FUNC_1 (int ,char*,int,...) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct mdp4_dtv_encoder*,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,unsigned long) ;
 struct mdp4_kms* FUNC_10 (struct drm_encoder*) ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (int ,int ,int) ;
 int FUNC_13 (struct mdp4_kms*,int ,int) ;
 struct mdp4_dtv_encoder* FUNC_14 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_15(struct drm_encoder *VAR_3)
{
 struct drm_device *VAR_4 = VAR_3->dev;
 struct mdp4_dtv_encoder *VAR_5 = FUNC_14(VAR_3);
 struct mdp4_kms *VAR_6 = FUNC_10(VAR_3);
 unsigned long VAR_7 = VAR_5->pixclock;
 int VAR_8;

 if (FUNC_6(VAR_5->enabled))
  return;

 FUNC_11(VAR_3->crtc,
   FUNC_5(VAR_0) |
   FUNC_3(VAR_0) |
   FUNC_2(VAR_0) |
   FUNC_4(0x21));
 FUNC_12(VAR_3->crtc, VAR_1, 1);

 FUNC_7(VAR_5, 1);

 FUNC_0("setting mdp_clk=%lu", VAR_7);

 VAR_8 = FUNC_9(VAR_5->mdp_clk, VAR_7);
 if (VAR_8)
  FUNC_1(VAR_4->dev, "failed to set mdp_clk to %lu: %d\n",
   VAR_7, VAR_8);

 VAR_8 = FUNC_8(VAR_5->mdp_clk);
 if (VAR_8)
  FUNC_1(VAR_4->dev, "failed to enabled mdp_clk: %d\n", VAR_8);

 VAR_8 = FUNC_8(VAR_5->hdmi_clk);
 if (VAR_8)
  FUNC_1(VAR_4->dev, "failed to enable hdmi_clk: %d\n", VAR_8);

 FUNC_13(VAR_6, VAR_2, 1);

 VAR_5->enabled = 1;
}
