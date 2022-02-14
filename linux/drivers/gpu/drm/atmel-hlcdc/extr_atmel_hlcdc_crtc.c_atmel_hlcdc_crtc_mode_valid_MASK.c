
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {int dummy; } ;
struct drm_crtc {int dummy; } ;
struct atmel_hlcdc_crtc {int dc; } ;
typedef enum drm_mode_status { ____Placeholder_drm_mode_status } drm_mode_status ;


 int FUNC_0 (int ,struct drm_display_mode const*) ;
 struct atmel_hlcdc_crtc* FUNC_1 (struct drm_crtc*) ;

__attribute__((used)) static enum drm_mode_status
FUNC_2(struct drm_crtc *VAR_0,
       const struct drm_display_mode *VAR_1)
{
 struct atmel_hlcdc_crtc *VAR_2 = FUNC_1(VAR_0);

 return FUNC_0(VAR_2->dc, VAR_1);
}
