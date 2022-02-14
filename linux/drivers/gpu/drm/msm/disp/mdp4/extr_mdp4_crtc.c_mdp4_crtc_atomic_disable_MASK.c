
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdp4_kms {int base; } ;
struct mdp4_crtc {int enabled; int err; int name; } ;
struct drm_crtc_state {int dummy; } ;
struct drm_crtc {int dummy; } ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct drm_crtc*) ;
 struct mdp4_kms* FUNC_3 (struct drm_crtc*) ;
 int FUNC_4 (struct mdp4_kms*) ;
 int FUNC_5 (int *,int *) ;
 struct mdp4_crtc* FUNC_6 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_7(struct drm_crtc *VAR_0,
         struct drm_crtc_state *VAR_1)
{
 struct mdp4_crtc *VAR_2 = FUNC_6(VAR_0);
 struct mdp4_kms *VAR_3 = FUNC_3(VAR_0);

 FUNC_0("%s", VAR_2->name);

 if (FUNC_1(!VAR_2->enabled))
  return;


 FUNC_2(VAR_0);

 FUNC_5(&VAR_3->base, &VAR_2->err);
 FUNC_4(VAR_3);

 VAR_2->enabled = 0;
}
