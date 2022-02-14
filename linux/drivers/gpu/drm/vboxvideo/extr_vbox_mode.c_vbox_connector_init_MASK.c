
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vbox_crtc {int dummy; } ;
struct drm_connector {int base; scalar_t__ doublescan_allowed; scalar_t__ interlace_allowed; } ;
struct vbox_connector {struct vbox_crtc* vbox_crtc; struct drm_connector base; } ;
struct drm_encoder {int dummy; } ;
struct TYPE_2__ {int suggested_y_property; int suggested_x_property; } ;
struct drm_device {TYPE_1__ mode_config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct drm_connector*,struct drm_encoder*) ;
 int FUNC_1 (struct drm_connector*,int *) ;
 int FUNC_2 (struct drm_device*,struct drm_connector*,int *,int ) ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (int *,int ,int ) ;
 struct vbox_connector* FUNC_5 (int,int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_6(struct drm_device *VAR_5,
          struct vbox_crtc *VAR_6,
          struct drm_encoder *VAR_7)
{
 struct vbox_connector *VAR_8;
 struct drm_connector *VAR_9;

 VAR_8 = FUNC_5(sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_9 = &VAR_8->base;
 VAR_8->vbox_crtc = VAR_6;

 FUNC_2(VAR_5, VAR_9, &VAR_3,
      VAR_0);
 FUNC_1(VAR_9, &VAR_4);

 VAR_9->interlace_allowed = 0;
 VAR_9->doublescan_allowed = 0;

 FUNC_3(VAR_5);
 FUNC_4(&VAR_9->base,
       VAR_5->mode_config.suggested_x_property, 0);
 FUNC_4(&VAR_9->base,
       VAR_5->mode_config.suggested_y_property, 0);

 FUNC_0(VAR_9, VAR_7);

 return 0;
}
