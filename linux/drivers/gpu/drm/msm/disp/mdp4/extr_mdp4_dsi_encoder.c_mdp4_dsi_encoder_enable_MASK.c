
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdp4_kms {int dummy; } ;
struct mdp4_dsi_encoder {int enabled; } ;
struct drm_encoder {int crtc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 struct mdp4_kms* FUNC_4 (struct drm_encoder*) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (struct mdp4_kms*,int ,int) ;
 struct mdp4_dsi_encoder* FUNC_8 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_9(struct drm_encoder *VAR_6)
{
 struct mdp4_dsi_encoder *VAR_7 = FUNC_8(VAR_6);
 struct mdp4_kms *VAR_8 = FUNC_4(VAR_6);

 if (VAR_7->enabled)
  return;

  FUNC_5(VAR_6->crtc,
   VAR_4 |
   VAR_2 |
   VAR_3 |
   FUNC_3(VAR_0) |
   FUNC_1(VAR_0) |
   FUNC_0(VAR_0) |
   FUNC_2(0x21));

 FUNC_6(VAR_6->crtc, VAR_1, 0);

 FUNC_7(VAR_8, VAR_5, 1);

 VAR_7->enabled = 1;
}
