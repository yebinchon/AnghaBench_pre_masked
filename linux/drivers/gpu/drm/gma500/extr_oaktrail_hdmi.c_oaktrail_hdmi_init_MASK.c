
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct psb_intel_mode_device {int dummy; } ;
struct drm_encoder {int dummy; } ;
struct gma_encoder {int type; struct drm_encoder base; } ;
struct TYPE_2__ {int subpixel_order; } ;
struct drm_connector {int interlace_allowed; int doublescan_allowed; TYPE_1__ display_info; } ;
struct gma_connector {struct drm_connector base; } ;
struct drm_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct drm_connector*,int *) ;
 int FUNC_2 (struct drm_device*,struct drm_connector*,int *,int ) ;
 int FUNC_3 (struct drm_connector*) ;
 int FUNC_4 (struct drm_encoder*,int *) ;
 int FUNC_5 (struct drm_device*,struct drm_encoder*,int *,int ,int *) ;
 int FUNC_6 (struct gma_connector*,struct gma_encoder*) ;
 int FUNC_7 (struct gma_encoder*) ;
 void* FUNC_8 (int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

void FUNC_9(struct drm_device *VAR_9,
     struct psb_intel_mode_device *VAR_10)
{
 struct gma_encoder *VAR_11;
 struct gma_connector *VAR_12;
 struct drm_connector *VAR_13;
 struct drm_encoder *VAR_14;

 VAR_11 = FUNC_8(sizeof(struct gma_encoder), VAR_2);
 if (!VAR_11)
  return;

 VAR_12 = FUNC_8(sizeof(struct gma_connector), VAR_2);
 if (!VAR_12)
  goto failed_connector;

 VAR_13 = &VAR_12->base;
 VAR_14 = &VAR_11->base;
 FUNC_2(VAR_9, VAR_13,
      &VAR_5,
      VAR_0);

 FUNC_5(VAR_9, VAR_14,
    &VAR_7,
    VAR_1, ((void*)0));

 FUNC_6(VAR_12, VAR_11);

 VAR_11->type = VAR_3;
 FUNC_4(VAR_14, &VAR_8);
 FUNC_1(VAR_13, &VAR_6);

 VAR_13->display_info.subpixel_order = VAR_4;
 VAR_13->interlace_allowed = 0;
 VAR_13->doublescan_allowed = 0;
 FUNC_3(VAR_13);
 FUNC_0(VAR_9->dev, "HDMI initialised.\n");

 return;

failed_connector:
 FUNC_7(VAR_11);
}
