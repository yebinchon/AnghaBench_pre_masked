
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


struct sched_param {int sched_priority; } ;
struct platform_device {int dummy; } ;
struct msm_mdss {TYPE_6__* funcs; } ;
struct TYPE_8__ {int normalize_zpos; int * helper_private; int * funcs; } ;
struct msm_kms {int irq; TYPE_2__ mode_config; TYPE_1__* funcs; struct msm_kms* dev; struct msm_drm_private* dev_private; } ;
struct msm_drm_private {int num_crtcs; int fbdev; TYPE_5__* event_thread; TYPE_4__** crtcs; struct msm_kms* kms; int inactive_list; int free_list; int free_work; int wq; struct msm_mdss* mdss; struct msm_kms* dev; } ;
struct drm_driver {int dummy; } ;
struct drm_device {int irq; TYPE_2__ mode_config; TYPE_1__* funcs; struct drm_device* dev; struct msm_drm_private* dev_private; } ;
struct device {int of_node; } ;
struct TYPE_12__ {int (* destroy ) (struct msm_kms*) ;} ;
struct TYPE_11__ {struct msm_kms* thread; int crtc_id; int worker; struct msm_kms* dev; } ;
struct TYPE_9__ {int id; } ;
struct TYPE_10__ {TYPE_3__ base; } ;
struct TYPE_7__ {int (* hw_init ) (struct msm_kms*) ;} ;


 int FUNC_0 (struct device*,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (struct msm_kms*) ;



 int FUNC_4 (struct msm_kms*) ;
 int VAR_2 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (struct device*,struct msm_kms*) ;
 int FUNC_8 (struct device*,char*,int) ;
 struct msm_kms* FUNC_9 (struct msm_kms*) ;
 int FUNC_10 (struct msm_kms*) ;
 struct msm_kms* FUNC_11 (struct drm_driver*,struct device*) ;
 int FUNC_12 (struct msm_kms*) ;
 int FUNC_13 (struct msm_kms*,int ) ;
 int FUNC_14 (struct msm_kms*,int ) ;
 int FUNC_15 (struct msm_kms*) ;
 int FUNC_16 (struct msm_kms*) ;
 int FUNC_17 (struct msm_kms*) ;
 int FUNC_18 (struct msm_kms*,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_19 (struct platform_device*) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (struct msm_drm_private*) ;
 int FUNC_22 (int *) ;
 struct msm_kms* FUNC_23 (int ,int *,char*,int ) ;
 int VAR_4 ;
 struct msm_drm_private* FUNC_24 (int,int ) ;
 struct msm_kms* FUNC_25 (struct msm_kms*) ;
 struct msm_kms* FUNC_26 (struct msm_kms*) ;
 int FUNC_27 (struct msm_kms*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_28 (struct msm_kms*) ;
 int FUNC_29 (struct device*) ;
 int FUNC_30 (struct msm_kms*) ;
 int VAR_7 ;
 int FUNC_31 (struct msm_kms*) ;
 int FUNC_32 (struct msm_kms*) ;
 int FUNC_33 (struct platform_device*,struct msm_kms*) ;
 int FUNC_34 (struct device*) ;
 int FUNC_35 (struct device*) ;
 int FUNC_36 (struct msm_kms*,int ,struct sched_param*) ;
 int FUNC_37 (struct msm_kms*) ;
 int FUNC_38 (struct msm_kms*) ;
 struct platform_device* FUNC_39 (struct device*) ;

__attribute__((used)) static int FUNC_40(struct device *VAR_8, struct drm_driver *VAR_9)
{
 struct platform_device *VAR_10 = FUNC_39(VAR_8);
 struct drm_device *VAR_11;
 struct msm_drm_private *VAR_12;
 struct msm_kms *VAR_13;
 struct msm_mdss *VAR_14;
 int VAR_15, VAR_16;
 struct sched_param VAR_17;

 VAR_11 = FUNC_11(VAR_9, VAR_8);
 if (FUNC_3(VAR_11)) {
  FUNC_0(VAR_8, "failed to allocate drm_device\n");
  return FUNC_4(VAR_11);
 }

 FUNC_33(VAR_10, VAR_11);

 VAR_12 = FUNC_24(sizeof(*VAR_12), VAR_1);
 if (!VAR_12) {
  VAR_15 = -VAR_0;
  goto err_put_drm_dev;
 }

 VAR_11->dev_private = VAR_12;
 VAR_12->dev = VAR_11;

 switch (FUNC_19(VAR_10)) {
 case 128:
  VAR_15 = FUNC_27(VAR_11);
  break;
 case 130:
  VAR_15 = FUNC_10(VAR_11);
  break;
 default:
  VAR_15 = 0;
  break;
 }
 if (VAR_15)
  goto err_free_priv;

 VAR_14 = VAR_12->mdss;

 VAR_12->wq = FUNC_6("msm", 0);

 FUNC_2(&VAR_12->free_work, VAR_7);
 FUNC_20(&VAR_12->free_list);

 FUNC_1(&VAR_12->inactive_list);

 FUNC_16(VAR_11);


 VAR_15 = FUNC_7(VAR_8, VAR_11);
 if (VAR_15)
  goto err_destroy_mdss;

 VAR_15 = FUNC_32(VAR_11);
 if (VAR_15)
  goto err_msm_uninit;

 FUNC_31(VAR_11);

 switch (FUNC_19(VAR_10)) {
 case 129:
  VAR_13 = FUNC_25(VAR_11);
  VAR_12->kms = VAR_13;
  break;
 case 128:
  VAR_13 = FUNC_26(VAR_11);
  break;
 case 130:
  VAR_13 = FUNC_9(VAR_11);
  VAR_12->kms = VAR_13;
  break;
 default:

  FUNC_5(VAR_8->of_node);
  VAR_13 = ((void*)0);
  break;
 }

 if (FUNC_3(VAR_13)) {
  FUNC_0(VAR_8, "failed to load kms\n");
  VAR_15 = FUNC_4(VAR_13);
  VAR_12->kms = ((void*)0);
  goto err_msm_uninit;
 }


 VAR_11->mode_config.normalize_zpos = 1;

 if (VAR_13) {
  VAR_13->dev = VAR_11;
  VAR_15 = VAR_13->funcs->hw_init(VAR_13);
  if (VAR_15) {
   FUNC_0(VAR_8, "kms hw init failed: %d\n", VAR_15);
   goto err_msm_uninit;
  }
 }

 VAR_11->mode_config.funcs = &VAR_5;
 VAR_11->mode_config.helper_private = &VAR_6;






 VAR_17.sched_priority = 16;
 for (VAR_16 = 0; VAR_16 < VAR_12->num_crtcs; VAR_16++) {

  VAR_12->event_thread[VAR_16].crtc_id = VAR_12->crtcs[VAR_16]->base.id;
  FUNC_22(&VAR_12->event_thread[VAR_16].worker);
  VAR_12->event_thread[VAR_16].dev = VAR_11;
  VAR_12->event_thread[VAR_16].thread =
   FUNC_23(VAR_4,
    &VAR_12->event_thread[VAR_16].worker,
    "crtc_event:%d", VAR_12->event_thread[VAR_16].crtc_id);
  if (FUNC_3(VAR_12->event_thread[VAR_16].thread)) {
   FUNC_0(VAR_8, "failed to create crtc_event kthread\n");
   VAR_12->event_thread[VAR_16].thread = ((void*)0);
   goto err_msm_uninit;
  }

  VAR_15 = FUNC_36(VAR_12->event_thread[VAR_16].thread,
      VAR_2, &VAR_17);
  if (VAR_15)
   FUNC_8(VAR_8, "event_thread set priority failed:%d\n",
     VAR_15);
 }

 VAR_15 = FUNC_18(VAR_11, VAR_12->num_crtcs);
 if (VAR_15 < 0) {
  FUNC_0(VAR_8, "failed to initialize vblank\n");
  goto err_msm_uninit;
 }

 if (VAR_13) {
  FUNC_34(VAR_8);
  VAR_15 = FUNC_14(VAR_11, VAR_13->irq);
  FUNC_35(VAR_8);
  if (VAR_15 < 0) {
   FUNC_0(VAR_8, "failed to install IRQ handler\n");
   goto err_msm_uninit;
  }
 }

 VAR_15 = FUNC_13(VAR_11, 0);
 if (VAR_15)
  goto err_msm_uninit;

 FUNC_17(VAR_11);






 VAR_15 = FUNC_28(VAR_11);
 if (VAR_15)
  goto err_msm_uninit;

 FUNC_15(VAR_11);

 return 0;

err_msm_uninit:
 FUNC_29(VAR_8);
 return VAR_15;
err_destroy_mdss:
 if (VAR_14 && VAR_14->funcs)
  VAR_14->funcs->destroy(VAR_11);
err_free_priv:
 FUNC_21(VAR_12);
err_put_drm_dev:
 FUNC_12(VAR_11);
 return VAR_15;
}
