
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
struct drm_connector {struct drm_connector_state* state; struct drm_device* dev; } ;
struct dm_connector_state {int scaling; int underscan_hborder; int underscan_vborder; int underscan_enable; int abm_level; } ;
struct TYPE_4__ {struct drm_property* abm_level_property; struct drm_property* underscan_property; struct drm_property* underscan_vborder_property; struct drm_property* underscan_hborder_property; } ;
struct amdgpu_device {TYPE_2__ mode_info; } ;
typedef enum amdgpu_rmx_type { ____Placeholder_amdgpu_rmx_type } amdgpu_rmx_type ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct dm_connector_state* FUNC_0 (struct drm_connector_state*) ;

int FUNC_1(struct drm_connector *VAR_5,
         struct drm_connector_state *VAR_6,
         struct drm_property *VAR_7,
         uint64_t VAR_8)
{
 struct drm_device *VAR_9 = VAR_5->dev;
 struct amdgpu_device *VAR_10 = VAR_9->dev_private;
 struct dm_connector_state *VAR_11 =
  FUNC_0(VAR_5->state);
 struct dm_connector_state *VAR_12 =
  FUNC_0(VAR_6);

 int VAR_13 = -VAR_0;

 if (VAR_7 == VAR_9->mode_config.scaling_mode_property) {
  enum amdgpu_rmx_type VAR_14;

  switch (VAR_8) {
  case 130:
   VAR_14 = VAR_2;
   break;
  case 131:
   VAR_14 = VAR_1;
   break;
  case 129:
   VAR_14 = VAR_3;
   break;
  case 128:
  default:
   VAR_14 = VAR_4;
   break;
  }

  if (VAR_11->scaling == VAR_14)
   return 0;

  VAR_12->scaling = VAR_14;
  VAR_13 = 0;
 } else if (VAR_7 == VAR_10->mode_info.underscan_hborder_property) {
  VAR_12->underscan_hborder = VAR_8;
  VAR_13 = 0;
 } else if (VAR_7 == VAR_10->mode_info.underscan_vborder_property) {
  VAR_12->underscan_vborder = VAR_8;
  VAR_13 = 0;
 } else if (VAR_7 == VAR_10->mode_info.underscan_property) {
  VAR_12->underscan_enable = VAR_8;
  VAR_13 = 0;
 } else if (VAR_7 == VAR_10->mode_info.abm_level_property) {
  VAR_12->abm_level = VAR_8;
  VAR_13 = 0;
 }

 return VAR_13;
}
