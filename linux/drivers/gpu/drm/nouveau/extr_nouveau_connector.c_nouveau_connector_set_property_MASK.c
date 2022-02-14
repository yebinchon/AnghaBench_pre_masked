
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


typedef int uint64_t ;
struct nouveau_encoder {TYPE_2__* dcb; } ;
struct nouveau_connector {int dithering_mode; int scaling_mode; int base; struct nouveau_encoder* detected_encoder; } ;
struct TYPE_11__ {int mode; } ;
struct TYPE_10__ {int mode; } ;
struct nouveau_conn_atom {TYPE_4__ dither; TYPE_3__ scaler; int state; } ;
struct drm_property {int dummy; } ;
struct drm_encoder {int dummy; } ;
struct drm_connector {TYPE_5__* encoder; TYPE_1__* funcs; int state; } ;
struct TYPE_14__ {int y; int x; int mode; } ;
struct TYPE_13__ {int (* set_property ) (struct drm_encoder*,struct drm_connector*,struct drm_property*,int ) ;} ;
struct TYPE_12__ {TYPE_7__* crtc; } ;
struct TYPE_9__ {scalar_t__ type; } ;
struct TYPE_8__ {int (* atomic_set_property ) (int *,int *,struct drm_property*,int ) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_7__*,int *,int ,int ,int *) ;
 TYPE_6__* FUNC_1 (struct drm_encoder*) ;
 struct nouveau_conn_atom* FUNC_2 (int ) ;
 struct nouveau_connector* FUNC_3 (struct drm_connector*) ;
 int FUNC_4 (int *,int *,struct drm_property*,int ) ;
 int FUNC_5 (struct drm_encoder*,struct drm_connector*,struct drm_property*,int ) ;
 struct drm_encoder* FUNC_6 (struct nouveau_encoder*) ;

__attribute__((used)) static int
FUNC_7(struct drm_connector *VAR_2,
          struct drm_property *VAR_3, uint64_t VAR_4)
{
 struct nouveau_conn_atom *VAR_5 = FUNC_2(VAR_2->state);
 struct nouveau_connector *VAR_6 = FUNC_3(VAR_2);
 struct nouveau_encoder *VAR_7 = VAR_6->detected_encoder;
 struct drm_encoder *VAR_8 = FUNC_6(VAR_7);
 int VAR_9;

 VAR_9 = VAR_2->funcs->atomic_set_property(&VAR_6->base,
          &VAR_5->state,
          VAR_3, VAR_4);
 if (VAR_9) {
  if (VAR_7 && VAR_7->dcb->type == VAR_0)
   return FUNC_1(VAR_8)->set_property(
    VAR_8, VAR_2, VAR_3, VAR_4);
  return VAR_9;
 }

 VAR_6->scaling_mode = VAR_5->scaler.mode;
 VAR_6->dithering_mode = VAR_5->dither.mode;

 if (VAR_2->encoder && VAR_2->encoder->crtc) {
  VAR_9 = FUNC_0(VAR_2->encoder->crtc,
           &VAR_2->encoder->crtc->mode,
            VAR_2->encoder->crtc->x,
            VAR_2->encoder->crtc->y,
            ((void*)0));
  if (!VAR_9)
   return -VAR_1;
 }

 return 0;
}
