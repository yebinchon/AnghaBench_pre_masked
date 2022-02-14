
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int oclass; } ;
struct TYPE_9__ {TYPE_2__ object; } ;
struct nouveau_display {scalar_t__ dithering_depth; scalar_t__ dithering_mode; TYPE_3__ disp; scalar_t__ color_vibrance_property; scalar_t__ vibrant_hue_property; scalar_t__ underscan_vborder_property; scalar_t__ underscan_hborder_property; scalar_t__ underscan_property; } ;
struct TYPE_12__ {int depth; int mode; } ;
struct TYPE_11__ {int mode; } ;
struct TYPE_7__ {int color_vibrance; int vibrant_hue; } ;
struct nouveau_conn_atom {TYPE_6__ dither; TYPE_5__ scaler; TYPE_1__ procamp; } ;
struct TYPE_10__ {scalar_t__ scaling_mode_property; scalar_t__ dvi_i_subconnector_property; } ;
struct drm_device {TYPE_4__ mode_config; } ;
struct drm_connector {int connector_type; int base; int state; struct drm_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,scalar_t__,int ) ;
 struct nouveau_conn_atom* FUNC_1 (int ) ;
 struct nouveau_display* FUNC_2 (struct drm_device*) ;

void
FUNC_3(struct drm_connector *VAR_6)
{
 struct drm_device *VAR_7 = VAR_6->dev;
 struct nouveau_conn_atom *VAR_8 = FUNC_1(VAR_6->state);
 struct nouveau_display *VAR_9 = FUNC_2(VAR_7);


 if (VAR_6->connector_type == VAR_1)
  FUNC_0(&VAR_6->base, VAR_7->mode_config.
        dvi_i_subconnector_property, 0);


 if (VAR_9->underscan_property &&
     (VAR_6->connector_type == VAR_0 ||
      VAR_6->connector_type == VAR_1 ||
      VAR_6->connector_type == VAR_3 ||
      VAR_6->connector_type == VAR_2)) {
  FUNC_0(&VAR_6->base,
        VAR_9->underscan_property,
        VAR_5);
  FUNC_0(&VAR_6->base,
        VAR_9->underscan_hborder_property, 0);
  FUNC_0(&VAR_6->base,
        VAR_9->underscan_vborder_property, 0);
 }


 if (VAR_9->vibrant_hue_property)
  FUNC_0(&VAR_6->base,
        VAR_9->vibrant_hue_property,
        VAR_8->procamp.vibrant_hue);
 if (VAR_9->color_vibrance_property)
  FUNC_0(&VAR_6->base,
        VAR_9->color_vibrance_property,
        VAR_8->procamp.color_vibrance);


 switch (VAR_6->connector_type) {
 case 129:
  break;
 case 128:
  if (VAR_9->disp.object.oclass < VAR_4)
   break;

 default:
  FUNC_0(&VAR_6->base, VAR_7->mode_config.
        scaling_mode_property,
        VAR_8->scaler.mode);
  break;
 }


 switch (VAR_6->connector_type) {
 case 129:
 case 128:
  break;
 default:
  if (VAR_9->dithering_mode) {
   FUNC_0(&VAR_6->base,
         VAR_9->dithering_mode,
         VAR_8->dither.mode);
  }
  if (VAR_9->dithering_depth) {
   FUNC_0(&VAR_6->base,
         VAR_9->dithering_depth,
         VAR_8->dither.depth);
  }
  break;
 }
}
