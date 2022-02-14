
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {int clock; } ;
struct drm_crtc {int dummy; } ;
struct arcpgu_drm_private {int clk; } ;
typedef enum drm_mode_status { ____Placeholder_drm_mode_status } drm_mode_status ;


 int VAR_0 ;
 int VAR_1 ;
 long FUNC_0 (int ,long) ;
 struct arcpgu_drm_private* FUNC_1 (struct drm_crtc*) ;
 long FUNC_2 (long,long) ;
 long FUNC_3 (long,long) ;

__attribute__((used)) static enum drm_mode_status FUNC_4(struct drm_crtc *VAR_2,
          const struct drm_display_mode *VAR_3)
{
 struct arcpgu_drm_private *VAR_4 = FUNC_1(VAR_2);
 long VAR_5, VAR_6 = VAR_3->clock * 1000;
 long VAR_7 = VAR_6 / 200;

 VAR_5 = FUNC_0(VAR_4->clk, VAR_6);
 if ((FUNC_2(VAR_5, VAR_6) - FUNC_3(VAR_5, VAR_6) < VAR_7) && (VAR_5 > 0))
  return VAR_1;

 return VAR_0;
}
