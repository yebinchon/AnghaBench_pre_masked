
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_crtc {int pending_wait; } ;
struct drm_crtc {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct drm_crtc*) ;
 struct omap_crtc* FUNC_2 (struct drm_crtc*) ;
 int FUNC_3 (int ,int,int ) ;

int FUNC_4(struct drm_crtc *VAR_0)
{
 struct omap_crtc *VAR_1 = FUNC_2(VAR_0);





 return FUNC_3(VAR_1->pending_wait,
      !FUNC_1(VAR_0),
      FUNC_0(250));
}
