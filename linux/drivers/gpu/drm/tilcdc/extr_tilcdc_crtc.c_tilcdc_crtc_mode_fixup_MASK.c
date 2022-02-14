
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tilcdc_crtc {int simulate_vesa_sync; } ;
struct drm_display_mode {int flags; scalar_t__ hsync_start; scalar_t__ hsync_end; scalar_t__ hskew; } ;
struct drm_crtc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct tilcdc_crtc* FUNC_0 (struct drm_crtc*) ;

__attribute__((used)) static bool FUNC_1(struct drm_crtc *VAR_3,
  const struct drm_display_mode *VAR_4,
  struct drm_display_mode *VAR_5)
{
 struct tilcdc_crtc *VAR_6 = FUNC_0(VAR_3);

 if (!VAR_6->simulate_vesa_sync)
  return 1;







 VAR_5->hskew = VAR_4->hsync_end - VAR_4->hsync_start;
 VAR_5->flags |= VAR_0;

 if (VAR_4->flags & VAR_1) {
  VAR_5->flags |= VAR_2;
  VAR_5->flags &= ~VAR_1;
 } else {
  VAR_5->flags |= VAR_1;
  VAR_5->flags &= ~VAR_2;
 }

 return 1;
}
