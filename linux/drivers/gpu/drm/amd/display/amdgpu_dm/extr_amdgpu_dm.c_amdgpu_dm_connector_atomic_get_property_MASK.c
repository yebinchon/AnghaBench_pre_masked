
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct drm_property {int dummy; } ;
struct TYPE_3__ {struct drm_property* scaling_mode_property; } ;
struct drm_device {TYPE_1__ mode_config; struct amdgpu_device* dev_private; } ;
struct drm_connector_state {int dummy; } ;
struct drm_connector {struct drm_device* dev; } ;
struct dm_connector_state {int scaling; int abm_level; int underscan_enable; int underscan_vborder; int underscan_hborder; } ;
struct TYPE_4__ {struct drm_property* abm_level_property; struct drm_property* underscan_property; struct drm_property* underscan_vborder_property; struct drm_property* underscan_hborder_property; } ;
struct amdgpu_device {TYPE_2__ mode_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 struct dm_connector_state* FUNC_0 (struct drm_connector_state const*) ;

int FUNC_1(struct drm_connector *VAR_5,
         const struct drm_connector_state *VAR_6,
         struct drm_property *VAR_7,
         uint64_t *VAR_8)
{
 struct drm_device *VAR_9 = VAR_5->dev;
 struct amdgpu_device *VAR_10 = VAR_9->dev_private;
 struct dm_connector_state *VAR_11 =
  FUNC_0(VAR_6);
 int VAR_12 = -VAR_4;

 if (VAR_7 == VAR_9->mode_config.scaling_mode_property) {
  switch (VAR_11->scaling) {
  case 130:
   *VAR_8 = VAR_1;
   break;
  case 131:
   *VAR_8 = VAR_0;
   break;
  case 129:
   *VAR_8 = VAR_2;
   break;
  case 128:
  default:
   *VAR_8 = VAR_3;
   break;
  }
  VAR_12 = 0;
 } else if (VAR_7 == VAR_10->mode_info.underscan_hborder_property) {
  *VAR_8 = VAR_11->underscan_hborder;
  VAR_12 = 0;
 } else if (VAR_7 == VAR_10->mode_info.underscan_vborder_property) {
  *VAR_8 = VAR_11->underscan_vborder;
  VAR_12 = 0;
 } else if (VAR_7 == VAR_10->mode_info.underscan_property) {
  *VAR_8 = VAR_11->underscan_enable;
  VAR_12 = 0;
 } else if (VAR_7 == VAR_10->mode_info.abm_level_property) {
  *VAR_8 = VAR_11->abm_level;
  VAR_12 = 0;
 }

 return VAR_12;
}
