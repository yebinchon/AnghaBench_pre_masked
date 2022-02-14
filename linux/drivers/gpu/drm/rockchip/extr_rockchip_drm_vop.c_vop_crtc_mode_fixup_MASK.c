
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop {int dclk; } ;
struct drm_display_mode {int clock; } ;
struct drm_crtc {int dummy; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 struct vop* FUNC_2 (struct drm_crtc*) ;

__attribute__((used)) static bool FUNC_3(struct drm_crtc *VAR_0,
    const struct drm_display_mode *VAR_1,
    struct drm_display_mode *VAR_2)
{
 struct vop *VAR_3 = FUNC_2(VAR_0);

 VAR_2->clock =
  FUNC_0(FUNC_1(VAR_3->dclk,
         VAR_2->clock * 1000), 1000);

 return 1;
}
