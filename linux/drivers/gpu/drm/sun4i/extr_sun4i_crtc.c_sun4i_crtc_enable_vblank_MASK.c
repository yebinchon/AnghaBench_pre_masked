
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun4i_crtc {int tcon; } ;
struct drm_crtc {int dummy; } ;


 int FUNC_0 (char*,struct drm_crtc*) ;
 struct sun4i_crtc* FUNC_1 (struct drm_crtc*) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int FUNC_3(struct drm_crtc *VAR_0)
{
 struct sun4i_crtc *VAR_1 = FUNC_1(VAR_0);

 FUNC_0("Enabling VBLANK on crtc %p\n", VAR_0);

 FUNC_2(VAR_1->tcon, 1);

 return 0;
}
