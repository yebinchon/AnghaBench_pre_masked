
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tv_mode {scalar_t__ refresh; } ;
struct drm_display_mode {int flags; int clock; } ;
struct drm_connector {int dev; int state; } ;
typedef enum drm_mode_status { ____Placeholder_drm_mode_status } drm_mode_status ;
struct TYPE_2__ {int max_dotclk_freq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct drm_display_mode*) ;
 struct tv_mode* FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int ) ;

__attribute__((used)) static enum drm_mode_status
FUNC_4(struct drm_connector *VAR_5,
      struct drm_display_mode *VAR_6)
{
 const struct tv_mode *VAR_7 = FUNC_2(VAR_5->state);
 int VAR_8 = FUNC_3(VAR_5->dev)->max_dotclk_freq;

 if (VAR_6->flags & VAR_0)
  return VAR_3;

 if (VAR_6->clock > VAR_8)
  return VAR_1;


 if (VAR_7 && FUNC_0(VAR_7->refresh - FUNC_1(VAR_6) * 1000)
    < 1000)
  return VAR_4;

 return VAR_2;
}
