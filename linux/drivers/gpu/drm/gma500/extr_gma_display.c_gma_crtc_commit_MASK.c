
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_crtc_helper_funcs {int (* dpms ) (struct drm_crtc*,int ) ;} ;
struct drm_crtc {struct drm_crtc_helper_funcs* helper_private; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_crtc*,int ) ;

void FUNC_1(struct drm_crtc *VAR_1)
{
 const struct drm_crtc_helper_funcs *VAR_2 = VAR_1->helper_private;
 VAR_2->dpms(VAR_1, VAR_0);
}
