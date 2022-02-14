
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct msm_mdss {TYPE_4__* funcs; } ;
struct msm_kms {TYPE_2__* funcs; } ;
struct TYPE_7__ {scalar_t__ paddr; int size; int mm; } ;
struct msm_drm_private {int num_crtcs; int wq; TYPE_3__ vram; scalar_t__ fbdev; TYPE_1__* event_thread; struct msm_mdss* mdss; struct msm_kms* kms; } ;
struct drm_device {struct msm_drm_private* dev_private; scalar_t__ registered; } ;
struct device {int dummy; } ;
struct TYPE_8__ {int (* destroy ) (struct drm_device*) ;} ;
struct TYPE_6__ {int (* destroy ) (struct msm_kms*) ;} ;
struct TYPE_5__ {int * thread; int worker; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct device*,struct drm_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,int ,int *,scalar_t__,unsigned long) ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct drm_device*) ;
 int FUNC_6 (struct drm_device*) ;
 int FUNC_7 (struct drm_device*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct drm_device*) ;
 scalar_t__ VAR_1 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct msm_drm_private*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct drm_device*) ;
 int FUNC_14 (struct drm_device*) ;
 int FUNC_15 (struct msm_drm_private*) ;
 int FUNC_16 (struct msm_drm_private*) ;
 struct drm_device* FUNC_17 (struct platform_device*) ;
 int FUNC_18 (struct device*) ;
 int FUNC_19 (struct device*) ;
 int FUNC_20 (struct msm_kms*) ;
 int FUNC_21 (struct drm_device*) ;
 struct platform_device* FUNC_22 (struct device*) ;

__attribute__((used)) static int FUNC_23(struct device *VAR_2)
{
 struct platform_device *VAR_3 = FUNC_22(VAR_2);
 struct drm_device *VAR_4 = FUNC_17(VAR_3);
 struct msm_drm_private *VAR_5 = VAR_4->dev_private;
 struct msm_kms *VAR_6 = VAR_5->kms;
 struct msm_mdss *VAR_7 = VAR_5->mdss;
 int VAR_8;
 if (VAR_4->registered) {
  FUNC_5(VAR_4);
  FUNC_3(VAR_4);
 }






 FUNC_10(VAR_5->wq);


 for (VAR_8 = 0; VAR_8 < VAR_5->num_crtcs; VAR_8++) {
  if (VAR_5->event_thread[VAR_8].thread) {
   FUNC_12(&VAR_5->event_thread[VAR_8].worker);
   VAR_5->event_thread[VAR_8].thread = ((void*)0);
  }
 }

 FUNC_14(VAR_4);

 FUNC_7(VAR_4);

 FUNC_15(VAR_5);
 FUNC_16(VAR_5);






 FUNC_9(VAR_4);

 FUNC_18(VAR_2);
 FUNC_6(VAR_4);
 FUNC_19(VAR_2);

 if (VAR_6 && VAR_6->funcs)
  VAR_6->funcs->destroy(VAR_6);

 if (VAR_5->vram.paddr) {
  unsigned long VAR_9 = VAR_0;
  FUNC_8(&VAR_5->vram.mm);
  FUNC_2(VAR_2, VAR_5->vram.size, ((void*)0),
          VAR_5->vram.paddr, VAR_9);
 }

 FUNC_0(VAR_2, VAR_4);

 if (VAR_7 && VAR_7->funcs)
  VAR_7->funcs->destroy(VAR_4);

 VAR_4->dev_private = ((void*)0);
 FUNC_4(VAR_4);

 FUNC_1(VAR_5->wq);
 FUNC_11(VAR_5);

 return 0;
}
