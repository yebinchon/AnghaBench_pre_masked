
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tilcdc_panel_info {int dummy; } ;
struct tilcdc_crtc {struct tilcdc_panel_info const* info; } ;
struct drm_crtc {int dummy; } ;


 struct tilcdc_crtc* FUNC_0 (struct drm_crtc*) ;

void FUNC_1(struct drm_crtc *VAR_0,
  const struct tilcdc_panel_info *VAR_1)
{
 struct tilcdc_crtc *VAR_2 = FUNC_0(VAR_0);
 VAR_2->info = VAR_1;
}
