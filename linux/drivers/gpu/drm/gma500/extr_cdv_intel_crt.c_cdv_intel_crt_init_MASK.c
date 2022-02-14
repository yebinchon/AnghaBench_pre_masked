
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct psb_intel_mode_device {int dummy; } ;
struct drm_encoder {scalar_t__ doublescan_allowed; scalar_t__ interlace_allowed; int polled; } ;
struct gma_encoder {struct drm_encoder base; int type; int ddc_bus; } ;
struct gma_connector {struct drm_encoder base; int type; int ddc_bus; } ;
struct drm_device {TYPE_1__* pdev; } ;
struct drm_connector {scalar_t__ doublescan_allowed; scalar_t__ interlace_allowed; int polled; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,int *,char*) ;
 int FUNC_1 (struct drm_encoder*) ;
 int FUNC_2 (struct drm_encoder*,int *) ;
 int FUNC_3 (struct drm_device*,struct drm_encoder*,int *,int ) ;
 int FUNC_4 (struct drm_encoder*) ;
 int FUNC_5 (struct drm_encoder*) ;
 int FUNC_6 (struct drm_encoder*,int *) ;
 int FUNC_7 (struct drm_device*,struct drm_encoder*,int *,int ,int *) ;
 int FUNC_8 (struct gma_encoder*,struct gma_encoder*) ;
 int FUNC_9 (struct gma_encoder*) ;
 struct gma_encoder* FUNC_10 (int,int ) ;
 int FUNC_11 (struct drm_device*,int ,char*) ;

void FUNC_12(struct drm_device *VAR_11,
   struct psb_intel_mode_device *VAR_12)
{

 struct gma_connector *VAR_13;
 struct gma_encoder *VAR_14;
 struct drm_connector *VAR_15;
 struct drm_encoder *VAR_16;

 u32 VAR_17;

 VAR_14 = FUNC_10(sizeof(struct gma_encoder), VAR_3);
 if (!VAR_14)
  return;

 VAR_13 = FUNC_10(sizeof(struct gma_connector), VAR_3);
 if (!VAR_13)
  goto failed_connector;

 VAR_15 = &VAR_13->base;
 VAR_15->polled = VAR_0;
 FUNC_3(VAR_11, VAR_15,
  &VAR_7, VAR_1);

 VAR_16 = &VAR_14->base;
 FUNC_7(VAR_11, VAR_16,
  &VAR_9, VAR_2, ((void*)0));

 FUNC_8(VAR_13, VAR_14);


 VAR_17 = VAR_4;





 VAR_14->ddc_bus = FUNC_11(VAR_11,
         VAR_17, "CRTDDC_A");
 if (!VAR_14->ddc_bus) {
  FUNC_0(VAR_6, &VAR_11->pdev->dev, "DDC bus registration "
      "failed.\n");
  goto failed_ddc;
 }

 VAR_14->type = VAR_5;




 VAR_15->interlace_allowed = 0;
 VAR_15->doublescan_allowed = 0;

 FUNC_6(VAR_16, &VAR_10);
 FUNC_2(VAR_15,
     &VAR_8);

 FUNC_4(VAR_15);

 return;
failed_ddc:
 FUNC_5(&VAR_14->base);
 FUNC_1(&VAR_13->base);
 FUNC_9(VAR_13);
failed_connector:
 FUNC_9(VAR_14);
 return;
}
