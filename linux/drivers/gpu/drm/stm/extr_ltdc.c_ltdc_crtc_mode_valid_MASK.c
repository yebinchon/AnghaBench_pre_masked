
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pad_max_freq_hz; } ;
struct ltdc_device {TYPE_1__ caps; int pixel_clk; } ;
struct drm_display_mode {int clock; int type; } ;
struct drm_crtc {int dummy; } ;
typedef enum drm_mode_status { ____Placeholder_drm_mode_status } drm_mode_status ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int) ;
 struct ltdc_device* FUNC_2 (struct drm_crtc*) ;

__attribute__((used)) static enum drm_mode_status
FUNC_3(struct drm_crtc *VAR_5,
       const struct drm_display_mode *VAR_6)
{
 struct ltdc_device *VAR_7 = FUNC_2(VAR_5);
 int VAR_8 = VAR_6->clock * 1000;
 int VAR_9 = VAR_8 - VAR_0;
 int VAR_10 = VAR_8 + VAR_0;
 int VAR_11;

 VAR_11 = FUNC_1(VAR_7->pixel_clk, VAR_8);

 FUNC_0("clk rate target %d, available %d\n", VAR_8, VAR_11);


 if (VAR_11 > VAR_7->caps.pad_max_freq_hz)
  return VAR_2;
 if (VAR_6->type & VAR_1)
  return VAR_4;





 if (VAR_11 < VAR_9 || VAR_11 > VAR_10)
  return VAR_3;

 return VAR_4;
}
