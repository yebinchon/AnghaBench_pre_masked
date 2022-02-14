
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_encoder {struct drm_crtc* crtc; } ;
struct drm_crtc_helper_funcs {int (* dpms ) (struct drm_crtc*,int ) ;} ;
struct drm_crtc {struct drm_crtc_helper_funcs* helper_private; } ;
struct drm_connector {int dpms; int dev; struct drm_encoder* encoder; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct drm_crtc*) ;
 int FUNC_3 (struct drm_encoder*) ;
 int FUNC_4 (struct drm_encoder*,int) ;
 int FUNC_5 (struct drm_crtc*,int ) ;
 int FUNC_6 (struct drm_crtc*,int ) ;

int FUNC_7(struct drm_connector *VAR_1, int VAR_2)
{
 struct drm_encoder *VAR_3 = VAR_1->encoder;
 struct drm_crtc *VAR_4 = VAR_3 ? VAR_3->crtc : ((void*)0);
 int VAR_5, VAR_6 = VAR_0;

 FUNC_0(FUNC_1(VAR_1->dev));

 if (VAR_2 == VAR_1->dpms)
  return 0;

 VAR_5 = VAR_1->dpms;
 VAR_1->dpms = VAR_2;

 if (VAR_3)
  VAR_6 = FUNC_3(VAR_3);


 if (VAR_2 < VAR_5) {
  if (VAR_4) {
   const struct drm_crtc_helper_funcs *VAR_7 = VAR_4->helper_private;
   if (VAR_7->dpms)
    (*VAR_7->dpms) (VAR_4,
           FUNC_2(VAR_4));
  }
  if (VAR_3)
   FUNC_4(VAR_3, VAR_6);
 }


 if (VAR_2 > VAR_5) {
  if (VAR_3)
   FUNC_4(VAR_3, VAR_6);
  if (VAR_4) {
   const struct drm_crtc_helper_funcs *VAR_8 = VAR_4->helper_private;
   if (VAR_8->dpms)
    (*VAR_8->dpms) (VAR_4,
           FUNC_2(VAR_4));
  }
 }

 return 0;
}
