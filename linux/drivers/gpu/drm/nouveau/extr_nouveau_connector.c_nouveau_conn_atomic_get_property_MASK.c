
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
struct nouveau_display {struct drm_property* color_vibrance_property; struct drm_property* vibrant_hue_property; struct drm_property* dithering_depth; struct drm_property* dithering_mode; struct drm_property* underscan_vborder_property; struct drm_property* underscan_hborder_property; struct drm_property* underscan_property; } ;
struct TYPE_10__ {int color_vibrance; int vibrant_hue; } ;
struct TYPE_9__ {int depth; int mode; } ;
struct TYPE_7__ {int vborder; int hborder; int mode; } ;
struct TYPE_8__ {TYPE_2__ underscan; int mode; } ;
struct nouveau_conn_atom {TYPE_5__ procamp; TYPE_4__ dither; TYPE_3__ scaler; } ;
struct drm_property {int dummy; } ;
struct TYPE_6__ {struct drm_property* scaling_mode_property; } ;
struct drm_device {TYPE_1__ mode_config; } ;
struct drm_connector_state {int dummy; } ;
struct drm_connector {struct drm_device* dev; } ;


 int VAR_0 ;
 struct nouveau_conn_atom* FUNC_0 (struct drm_connector_state const*) ;
 struct nouveau_display* FUNC_1 (struct drm_device*) ;

int
FUNC_2(struct drm_connector *VAR_1,
     const struct drm_connector_state *VAR_2,
     struct drm_property *VAR_3, u64 *VAR_4)
{
 struct nouveau_conn_atom *VAR_5 = FUNC_0(VAR_2);
 struct nouveau_display *VAR_6 = FUNC_1(VAR_1->dev);
 struct drm_device *VAR_7 = VAR_1->dev;

 if (VAR_3 == VAR_7->mode_config.scaling_mode_property)
  *VAR_4 = VAR_5->scaler.mode;
 else if (VAR_3 == VAR_6->underscan_property)
  *VAR_4 = VAR_5->scaler.underscan.mode;
 else if (VAR_3 == VAR_6->underscan_hborder_property)
  *VAR_4 = VAR_5->scaler.underscan.hborder;
 else if (VAR_3 == VAR_6->underscan_vborder_property)
  *VAR_4 = VAR_5->scaler.underscan.vborder;
 else if (VAR_3 == VAR_6->dithering_mode)
  *VAR_4 = VAR_5->dither.mode;
 else if (VAR_3 == VAR_6->dithering_depth)
  *VAR_4 = VAR_5->dither.depth;
 else if (VAR_3 == VAR_6->vibrant_hue_property)
  *VAR_4 = VAR_5->procamp.vibrant_hue;
 else if (VAR_3 == VAR_6->color_vibrance_property)
  *VAR_4 = VAR_5->procamp.color_vibrance;
 else
  return -VAR_0;

 return 0;
}
