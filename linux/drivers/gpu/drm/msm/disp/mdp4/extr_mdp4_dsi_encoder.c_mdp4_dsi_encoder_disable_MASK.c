
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdp4_kms {int base; } ;
struct mdp4_dsi_encoder {int enabled; } ;
struct drm_encoder {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mdp4_kms* FUNC_0 (struct drm_encoder*) ;
 int FUNC_1 (struct mdp4_kms*,int ,int ) ;
 int FUNC_2 (int *,int ) ;
 struct mdp4_dsi_encoder* FUNC_3 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_4(struct drm_encoder *VAR_2)
{
 struct mdp4_dsi_encoder *VAR_3 = FUNC_3(VAR_2);
 struct mdp4_kms *VAR_4 = FUNC_0(VAR_2);

 if (!VAR_3->enabled)
  return;

 FUNC_1(VAR_4, VAR_1, 0);
 FUNC_2(&VAR_4->base, VAR_0);

 VAR_3->enabled = 0;
}
