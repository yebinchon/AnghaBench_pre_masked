
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int mode; } ;
struct TYPE_13__ {int mode; TYPE_2__ underscan; } ;
struct TYPE_10__ {int color_vibrance; int vibrant_hue; } ;
struct TYPE_8__ {int depth; int mode; } ;
struct nouveau_conn_atom {TYPE_6__ scaler; TYPE_3__ procamp; TYPE_1__ dither; int state; } ;
struct drm_connector {int connector_type; int dev; scalar_t__ state; } ;
struct TYPE_11__ {scalar_t__ oclass; } ;
struct TYPE_12__ {TYPE_4__ object; } ;
struct TYPE_14__ {TYPE_5__ disp; } ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct drm_connector*,int *) ;
 struct nouveau_conn_atom* FUNC_2 (int,int ) ;
 int FUNC_3 (struct drm_connector*,scalar_t__) ;
 TYPE_7__* FUNC_4 (int ) ;

void
FUNC_5(struct drm_connector *VAR_7)
{
 struct nouveau_conn_atom *VAR_8;

 if (FUNC_0(!(VAR_8 = FUNC_2(sizeof(*VAR_8), VAR_4))))
  return;

 if (VAR_7->state)
  FUNC_3(VAR_7, VAR_7->state);
 FUNC_1(VAR_7, &VAR_8->state);
 VAR_8->dither.mode = VAR_1;
 VAR_8->dither.depth = VAR_0;
 VAR_8->scaler.mode = VAR_3;
 VAR_8->scaler.underscan.mode = VAR_6;
 VAR_8->procamp.color_vibrance = 150;
 VAR_8->procamp.vibrant_hue = 90;

 if (FUNC_4(VAR_7->dev)->disp.object.oclass < VAR_5) {
  switch (VAR_7->connector_type) {
  case 128:

   VAR_8->scaler.mode = VAR_2;
   break;
  default:
   break;
  }
 }
}
