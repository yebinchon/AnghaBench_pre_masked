
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gma_crtc {struct gma_crtc* crtc_state; } ;
struct drm_crtc {int dummy; } ;


 int FUNC_0 (struct drm_crtc*) ;
 int FUNC_1 (struct gma_crtc*) ;
 struct gma_crtc* FUNC_2 (struct drm_crtc*) ;

void FUNC_3(struct drm_crtc *VAR_0)
{
 struct gma_crtc *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(VAR_1->crtc_state);
 FUNC_0(VAR_0);
 FUNC_1(VAR_1);
}
