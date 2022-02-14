
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_10__ {int oclass; } ;
struct TYPE_11__ {TYPE_2__ object; } ;
struct nouveau_display {struct drm_property* color_vibrance_property; struct drm_property* vibrant_hue_property; struct drm_property* dithering_depth; struct drm_property* dithering_mode; struct drm_property* underscan_vborder_property; struct drm_property* underscan_hborder_property; struct drm_property* underscan_property; TYPE_3__ disp; } ;
struct TYPE_16__ {int scaler; int dither; int procamp; } ;
struct TYPE_15__ {int vibrant_hue; int color_vibrance; } ;
struct TYPE_14__ {int mode; int depth; } ;
struct TYPE_12__ {int mode; int hborder; int vborder; } ;
struct TYPE_13__ {int mode; TYPE_4__ underscan; } ;
struct nouveau_conn_atom {TYPE_8__ set; TYPE_7__ procamp; TYPE_6__ dither; TYPE_5__ scaler; } ;
struct drm_property {int dummy; } ;
struct TYPE_9__ {struct drm_property* scaling_mode_property; } ;
struct drm_device {TYPE_1__ mode_config; } ;
struct drm_connector_state {int dummy; } ;
struct drm_connector {int connector_type; struct drm_device* dev; } ;
 int VAR_0 ;
 int VAR_1 ;
 struct nouveau_conn_atom* FUNC_0 (struct drm_connector_state*) ;
 struct nouveau_display* FUNC_1 (struct drm_device*) ;

int
FUNC_2(struct drm_connector *VAR_2,
     struct drm_connector_state *VAR_3,
     struct drm_property *VAR_4, u64 VAR_5)
{
 struct drm_device *VAR_6 = VAR_2->dev;
 struct nouveau_conn_atom *VAR_7 = FUNC_0(VAR_3);
 struct nouveau_display *VAR_8 = FUNC_1(VAR_6);

 if (VAR_4 == VAR_6->mode_config.scaling_mode_property) {
  switch (VAR_5) {
  case 128:
   switch (VAR_2->connector_type) {
   case 133:
   case 132:



    if (VAR_8->disp.object.oclass < VAR_1)
     return -VAR_0;
    break;
   default:
    break;
   }
  case 129:
  case 130:
  case 131:
   break;
  default:
   return -VAR_0;
  }

  if (VAR_7->scaler.mode != VAR_5) {
   VAR_7->scaler.mode = VAR_5;
   VAR_7->set.scaler = 1;
  }
 } else
 if (VAR_4 == VAR_8->underscan_property) {
  if (VAR_7->scaler.underscan.mode != VAR_5) {
   VAR_7->scaler.underscan.mode = VAR_5;
   VAR_7->set.scaler = 1;
  }
 } else
 if (VAR_4 == VAR_8->underscan_hborder_property) {
  if (VAR_7->scaler.underscan.hborder != VAR_5) {
   VAR_7->scaler.underscan.hborder = VAR_5;
   VAR_7->set.scaler = 1;
  }
 } else
 if (VAR_4 == VAR_8->underscan_vborder_property) {
  if (VAR_7->scaler.underscan.vborder != VAR_5) {
   VAR_7->scaler.underscan.vborder = VAR_5;
   VAR_7->set.scaler = 1;
  }
 } else
 if (VAR_4 == VAR_8->dithering_mode) {
  if (VAR_7->dither.mode != VAR_5) {
   VAR_7->dither.mode = VAR_5;
   VAR_7->set.dither = 1;
  }
 } else
 if (VAR_4 == VAR_8->dithering_depth) {
  if (VAR_7->dither.mode != VAR_5) {
   VAR_7->dither.depth = VAR_5;
   VAR_7->set.dither = 1;
  }
 } else
 if (VAR_4 == VAR_8->vibrant_hue_property) {
  if (VAR_7->procamp.vibrant_hue != VAR_5) {
   VAR_7->procamp.vibrant_hue = VAR_5;
   VAR_7->set.procamp = 1;
  }
 } else
 if (VAR_4 == VAR_8->color_vibrance_property) {
  if (VAR_7->procamp.color_vibrance != VAR_5) {
   VAR_7->procamp.color_vibrance = VAR_5;
   VAR_7->set.procamp = 1;
  }
 } else {
  return -VAR_0;
 }

 return 0;
}
