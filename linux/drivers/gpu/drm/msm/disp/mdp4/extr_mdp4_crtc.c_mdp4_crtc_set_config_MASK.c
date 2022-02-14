
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mdp4_kms {int dummy; } ;
struct mdp4_crtc {int dma; } ;
struct drm_crtc {int dummy; } ;


 int FUNC_0 (int ) ;
 struct mdp4_kms* FUNC_1 (struct drm_crtc*) ;
 int FUNC_2 (struct mdp4_kms*,int ,int ) ;
 struct mdp4_crtc* FUNC_3 (struct drm_crtc*) ;

void FUNC_4(struct drm_crtc *VAR_0, uint32_t VAR_1)
{
 struct mdp4_crtc *VAR_2 = FUNC_3(VAR_0);
 struct mdp4_kms *VAR_3 = FUNC_1(VAR_0);

 FUNC_2(VAR_3, FUNC_0(VAR_2->dma), VAR_1);
}
