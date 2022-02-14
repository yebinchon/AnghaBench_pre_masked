
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct komeda_crtc {TYPE_1__* master; } ;
struct drm_display_mode {int crtc_clock; int crtc_hdisplay; int crtc_hsync_start; int crtc_hsync_end; int crtc_htotal; } ;
struct drm_crtc {int dummy; } ;
struct TYPE_2__ {int pxlclk; scalar_t__ dual_link; } ;


 int FUNC_0 (int ,unsigned long) ;
 int FUNC_1 (struct drm_display_mode*,int ) ;
 struct komeda_crtc* FUNC_2 (struct drm_crtc*) ;

__attribute__((used)) static bool FUNC_3(struct drm_crtc *VAR_0,
       const struct drm_display_mode *VAR_1,
       struct drm_display_mode *VAR_2)
{
 struct komeda_crtc *VAR_3 = FUNC_2(VAR_0);
 unsigned long VAR_4;

 FUNC_1(VAR_2, 0);

 if (VAR_3->master->dual_link) {
  VAR_2->crtc_clock /= 2;
  VAR_2->crtc_hdisplay /= 2;
  VAR_2->crtc_hsync_start /= 2;
  VAR_2->crtc_hsync_end /= 2;
  VAR_2->crtc_htotal /= 2;
 }

 VAR_4 = VAR_2->crtc_clock * 1000;

 VAR_2->crtc_clock = FUNC_0(VAR_3->master->pxlclk,
         VAR_4) / 1000;

 return 1;
}
