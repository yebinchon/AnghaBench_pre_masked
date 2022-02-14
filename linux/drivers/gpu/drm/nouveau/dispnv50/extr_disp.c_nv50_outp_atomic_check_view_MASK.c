
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nouveau_drm {int dummy; } ;
struct TYPE_2__ {int full; scalar_t__ mode; } ;
struct nouveau_conn_atom {TYPE_1__ scaler; } ;
struct drm_encoder {int name; int dev; } ;
struct drm_display_mode {int type; int vdisplay; int hdisplay; } ;
struct drm_crtc_state {int mode_changed; struct drm_display_mode mode; struct drm_display_mode adjusted_mode; } ;
struct drm_connector_state {struct drm_connector* connector; } ;
struct drm_connector {int connector_type; } ;




 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nouveau_drm*,char*,int ) ;
 int FUNC_1 (struct drm_display_mode*,struct drm_display_mode*) ;
 int FUNC_2 (struct drm_display_mode*,struct drm_display_mode*) ;
 struct nouveau_conn_atom* FUNC_3 (struct drm_connector_state*) ;
 struct nouveau_drm* FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct drm_encoder *VAR_2,
       struct drm_crtc_state *VAR_3,
       struct drm_connector_state *VAR_4,
       struct drm_display_mode *VAR_5)
{
 struct drm_display_mode *VAR_6 = &VAR_3->adjusted_mode;
 struct drm_display_mode *VAR_7 = &VAR_3->mode;
 struct drm_connector *VAR_8 = VAR_4->connector;
 struct nouveau_conn_atom *VAR_9 = FUNC_3(VAR_4);
 struct nouveau_drm *VAR_10 = FUNC_4(VAR_2->dev);

 FUNC_0(VAR_10, "%s atomic_check\n", VAR_2->name);
 VAR_9->scaler.full = 0;
 if (!VAR_5)
  return 0;

 if (VAR_9->scaler.mode == VAR_0) {
  switch (VAR_8->connector_type) {
  case 129:
  case 128:




   if (VAR_6->hdisplay == VAR_5->hdisplay &&
       VAR_6->vdisplay == VAR_5->vdisplay &&
       VAR_6->type & VAR_1)
    break;
   VAR_7 = VAR_5;
   VAR_9->scaler.full = 1;
   break;
  default:
   break;
  }
 } else {
  VAR_7 = VAR_5;
 }

 if (!FUNC_2(VAR_6, VAR_7)) {
  FUNC_1(VAR_6, VAR_7);
  VAR_3->mode_changed = 1;
 }

 return 0;
}
