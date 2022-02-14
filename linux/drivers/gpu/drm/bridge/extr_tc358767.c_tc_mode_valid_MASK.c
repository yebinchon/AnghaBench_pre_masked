
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int num_lanes; int rate; } ;
struct TYPE_4__ {TYPE_1__ base; } ;
struct tc_data {TYPE_2__ link; } ;
struct drm_display_mode {int clock; } ;
struct drm_bridge {int dummy; } ;
typedef enum drm_mode_status { ____Placeholder_drm_mode_status } drm_mode_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct tc_data* FUNC_0 (struct drm_bridge*) ;

__attribute__((used)) static enum drm_mode_status FUNC_1(struct drm_bridge *VAR_3,
       const struct drm_display_mode *VAR_4)
{
 struct tc_data *VAR_5 = FUNC_0(VAR_3);
 u32 VAR_6, VAR_7;
 u32 VAR_8 = 24;


 if (VAR_4->clock > 154000)
  return VAR_1;

 VAR_6 = VAR_4->clock * VAR_8 / 8;
 VAR_7 = VAR_5->link.base.num_lanes * VAR_5->link.base.rate;

 if (VAR_6 > VAR_7)
  return VAR_0;

 return VAR_2;
}
