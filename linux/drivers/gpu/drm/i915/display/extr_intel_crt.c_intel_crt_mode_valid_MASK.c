
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int max_dotclk_freq; } ;
struct drm_display_mode {int flags; int clock; int hdisplay; } ;
struct drm_device {int dummy; } ;
struct drm_connector {struct drm_device* dev; } ;
typedef enum drm_mode_status { ____Placeholder_drm_mode_status } drm_mode_status ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*,int,int) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int,int,int) ;
 struct drm_i915_private* FUNC_4 (struct drm_device*) ;

__attribute__((used)) static enum drm_mode_status
FUNC_5(struct drm_connector *VAR_6,
       struct drm_display_mode *VAR_7)
{
 struct drm_device *VAR_8 = VAR_6->dev;
 struct drm_i915_private *VAR_9 = FUNC_4(VAR_8);
 int VAR_10 = VAR_9->max_dotclk_freq;
 int VAR_11;

 if (VAR_7->flags & VAR_0)
  return VAR_4;

 if (VAR_7->clock < 25000)
  return VAR_2;

 if (FUNC_0(VAR_9))
  VAR_11 = 180000;
 else if (FUNC_2(VAR_9))




  VAR_11 = 270000;
 else if (FUNC_1(VAR_9, 3, 4))
  VAR_11 = 400000;
 else
  VAR_11 = 350000;
 if (VAR_7->clock > VAR_11)
  return VAR_1;

 if (VAR_7->clock > VAR_10)
  return VAR_1;


 if (FUNC_0(VAR_9) &&
     (FUNC_3(VAR_7->clock, 270000, 24) > 2))
  return VAR_1;


 if (VAR_7->hdisplay > 4096)
  return VAR_3;

 return VAR_5;
}
