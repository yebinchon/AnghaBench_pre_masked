
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {int crtc_htotal; int crtc_clock; } ;


 int FUNC_0 (int,int) ;

int FUNC_1(const struct drm_display_mode *VAR_0,
        int VAR_1)
{

 if (!VAR_0->crtc_htotal)
  return 1;

 return FUNC_0(VAR_1 * VAR_0->crtc_clock,
       1000 * VAR_0->crtc_htotal);
}
