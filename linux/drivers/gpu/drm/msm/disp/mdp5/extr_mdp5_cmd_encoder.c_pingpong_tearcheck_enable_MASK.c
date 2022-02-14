
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mdp5_kms {int vsync_clk; } ;
struct mdp5_hw_mixer {int pp; } ;
struct drm_encoder {TYPE_1__* dev; int crtc; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 struct mdp5_kms* FUNC_5 (struct drm_encoder*) ;
 struct mdp5_hw_mixer* FUNC_6 (int ) ;
 int FUNC_7 (struct mdp5_kms*,int ,int) ;

__attribute__((used)) static int FUNC_8(struct drm_encoder *VAR_1)
{
 struct mdp5_kms *VAR_2 = FUNC_5(VAR_1);
 struct mdp5_hw_mixer *VAR_3 = FUNC_6(VAR_1->crtc);
 int VAR_4 = VAR_3->pp;
 int VAR_5;

 VAR_5 = FUNC_4(VAR_2->vsync_clk,
  FUNC_3(VAR_2->vsync_clk, VAR_0));
 if (VAR_5) {
  FUNC_0(VAR_1->dev->dev,
   "vsync_clk clk_set_rate failed, %d\n", VAR_5);
  return VAR_5;
 }
 VAR_5 = FUNC_2(VAR_2->vsync_clk);
 if (VAR_5) {
  FUNC_0(VAR_1->dev->dev,
   "vsync_clk clk_prepare_enable failed, %d\n", VAR_5);
  return VAR_5;
 }

 FUNC_7(VAR_2, FUNC_1(VAR_4), 1);

 return 0;
}
