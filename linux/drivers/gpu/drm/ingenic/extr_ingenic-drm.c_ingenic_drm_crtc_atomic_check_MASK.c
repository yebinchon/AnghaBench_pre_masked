
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ingenic_drm {int pix_clk; } ;
struct TYPE_2__ {int clock; } ;
struct drm_crtc_state {TYPE_1__ adjusted_mode; } ;
struct drm_crtc {int dummy; } ;


 long FUNC_0 (int ,int) ;
 int FUNC_1 (struct drm_crtc_state*) ;
 struct ingenic_drm* FUNC_2 (struct drm_crtc*) ;

__attribute__((used)) static int FUNC_3(struct drm_crtc *VAR_0,
      struct drm_crtc_state *VAR_1)
{
 struct ingenic_drm *VAR_2 = FUNC_2(VAR_0);
 long VAR_3;

 if (!FUNC_1(VAR_1))
  return 0;

 VAR_3 = FUNC_0(VAR_2->pix_clk,
         VAR_1->adjusted_mode.clock * 1000);
 if (VAR_3 < 0)
  return VAR_3;

 return 0;
}
