
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int suggested_y_property; int suggested_x_property; } ;
struct TYPE_9__ {TYPE_3__ mode_config; } ;
struct vbox_private {TYPE_4__ ddev; int guest_pool; } ;
struct TYPE_6__ {int width; int height; } ;
struct vbox_connector {TYPE_2__* vbox_crtc; TYPE_1__ mode_hint; } ;
struct drm_display_mode {int type; } ;
struct drm_connector {int base; TYPE_5__* dev; } ;
struct TYPE_10__ {struct vbox_private* dev_private; } ;
struct TYPE_7__ {scalar_t__ crtc_id; int x_hint; int y_hint; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct vbox_private*) ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_1 (struct drm_connector*,int,int) ;
 struct drm_display_mode* FUNC_2 (TYPE_5__*,int,int,int,int,int,int) ;
 int FUNC_3 (struct drm_connector*,struct drm_display_mode*) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int ,scalar_t__) ;
 struct vbox_connector* FUNC_6 (struct drm_connector*) ;
 int FUNC_7 (struct vbox_private*) ;
 int FUNC_8 (struct drm_connector*,int,int) ;

__attribute__((used)) static int FUNC_9(struct drm_connector *VAR_2)
{
 struct vbox_connector *VAR_3 = ((void*)0);
 struct drm_display_mode *VAR_4 = ((void*)0);
 struct vbox_private *VAR_5 = ((void*)0);
 unsigned int VAR_6 = 0;
 int VAR_7, VAR_8;

 VAR_3 = FUNC_6(VAR_2);
 VAR_5 = VAR_2->dev->dev_private;

 FUNC_5(VAR_5->guest_pool, FUNC_0(VAR_5) +
        VAR_1);
 if (VAR_3->vbox_crtc->crtc_id == 0)
  FUNC_7(VAR_5);

 VAR_6 = FUNC_1(VAR_2, 2560, 1600);
 VAR_7 = VAR_3->mode_hint.width ?
     VAR_3->mode_hint.width : 1024;
 VAR_8 = VAR_3->mode_hint.height ?
      VAR_3->mode_hint.height : 768;
 VAR_4 = FUNC_2(VAR_2->dev, VAR_7, VAR_8,
       60, 0, 0, 0);
 if (VAR_4) {
  VAR_4->type |= VAR_0;
  FUNC_3(VAR_2, VAR_4);
  ++VAR_6;
 }
 FUNC_8(VAR_2, VAR_7, VAR_8);

 if (VAR_3->vbox_crtc->x_hint != -1)
  FUNC_4(&VAR_2->base,
   VAR_5->ddev.mode_config.suggested_x_property,
   VAR_3->vbox_crtc->x_hint);
 else
  FUNC_4(&VAR_2->base,
   VAR_5->ddev.mode_config.suggested_x_property, 0);

 if (VAR_3->vbox_crtc->y_hint != -1)
  FUNC_4(&VAR_2->base,
   VAR_5->ddev.mode_config.suggested_y_property,
   VAR_3->vbox_crtc->y_hint);
 else
  FUNC_4(&VAR_2->base,
   VAR_5->ddev.mode_config.suggested_y_property, 0);

 return VAR_6;
}
