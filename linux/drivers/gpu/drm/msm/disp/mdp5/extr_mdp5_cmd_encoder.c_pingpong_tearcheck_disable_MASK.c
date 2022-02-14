
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdp5_kms {int vsync_clk; } ;
struct mdp5_hw_mixer {int pp; } ;
struct drm_encoder {int crtc; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 struct mdp5_kms* FUNC_2 (struct drm_encoder*) ;
 struct mdp5_hw_mixer* FUNC_3 (int ) ;
 int FUNC_4 (struct mdp5_kms*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct drm_encoder *VAR_0)
{
 struct mdp5_kms *VAR_1 = FUNC_2(VAR_0);
 struct mdp5_hw_mixer *VAR_2 = FUNC_3(VAR_0->crtc);
 int VAR_3 = VAR_2->pp;

 FUNC_4(VAR_1, FUNC_0(VAR_3), 0);
 FUNC_1(VAR_1->vsync_clk);
}
