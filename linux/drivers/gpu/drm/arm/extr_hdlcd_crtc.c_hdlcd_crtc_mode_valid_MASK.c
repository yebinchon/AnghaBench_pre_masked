
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdlcd_drm_private {int clk; } ;
struct drm_display_mode {int clock; } ;
struct drm_crtc {int dummy; } ;
typedef enum drm_mode_status { ____Placeholder_drm_mode_status } drm_mode_status ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (long) ;
 long FUNC_1 (int ,long) ;
 struct hdlcd_drm_private* FUNC_2 (struct drm_crtc*) ;

__attribute__((used)) static enum drm_mode_status FUNC_3(struct drm_crtc *VAR_2,
  const struct drm_display_mode *VAR_3)
{
 struct hdlcd_drm_private *VAR_4 = FUNC_2(VAR_2);
 long VAR_5, VAR_6 = VAR_3->clock * 1000;

 VAR_5 = FUNC_1(VAR_4->clk, VAR_6);

 if (FUNC_0(VAR_5 - VAR_6) * 1000 > VAR_6) {

  return VAR_0;
 }

 return VAR_1;
}
