
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdp4_kms {int base; } ;
struct mdp4_dtv_encoder {int enabled; int mdp_clk; int hdmi_clk; } ;
struct drm_encoder {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct mdp4_dtv_encoder*,int ) ;
 int FUNC_2 (int ) ;
 struct mdp4_kms* FUNC_3 (struct drm_encoder*) ;
 int FUNC_4 (struct mdp4_kms*,int ,int ) ;
 int FUNC_5 (int *,int ) ;
 struct mdp4_dtv_encoder* FUNC_6 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_7(struct drm_encoder *VAR_2)
{
 struct mdp4_dtv_encoder *VAR_3 = FUNC_6(VAR_2);
 struct mdp4_kms *VAR_4 = FUNC_3(VAR_2);

 if (FUNC_0(!VAR_3->enabled))
  return;

 FUNC_4(VAR_4, VAR_1, 0);
 FUNC_5(&VAR_4->base, VAR_0);

 FUNC_2(VAR_3->hdmi_clk);
 FUNC_2(VAR_3->mdp_clk);

 FUNC_1(VAR_3, 0);

 VAR_3->enabled = 0;
}
