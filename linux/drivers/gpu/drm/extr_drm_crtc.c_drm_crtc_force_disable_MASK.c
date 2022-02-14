
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_mode_set {struct drm_crtc* crtc; } ;
struct drm_crtc {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct drm_mode_set*) ;

int FUNC_3(struct drm_crtc *VAR_0)
{
 struct drm_mode_set VAR_1 = {
  .crtc = VAR_0,
 };

 FUNC_0(FUNC_1(VAR_0->dev));

 return FUNC_2(&VAR_1);
}
