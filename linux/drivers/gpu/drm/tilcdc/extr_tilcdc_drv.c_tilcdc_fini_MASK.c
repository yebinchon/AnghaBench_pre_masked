
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ notifier_call; } ;
struct tilcdc_drm_private {scalar_t__ wq; scalar_t__ mmio; scalar_t__ clk; scalar_t__ is_registered; scalar_t__ crtc; TYPE_1__ freq_transition; } ;
struct drm_device {int dev; struct tilcdc_drm_private* dev_private; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct drm_device*) ;
 int FUNC_6 (struct drm_device*) ;
 int FUNC_7 (struct drm_device*) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (scalar_t__) ;

__attribute__((used)) static void FUNC_12(struct drm_device *VAR_1)
{
 struct tilcdc_drm_private *VAR_2 = VAR_1->dev_private;







 if (VAR_2->crtc)
  FUNC_11(VAR_2->crtc);

 if (VAR_2->is_registered)
  FUNC_4(VAR_1);

 FUNC_6(VAR_1);
 FUNC_5(VAR_1);
 FUNC_7(VAR_1);

 if (VAR_2->clk)
  FUNC_0(VAR_2->clk);

 if (VAR_2->mmio)
  FUNC_9(VAR_2->mmio);

 if (VAR_2->wq) {
  FUNC_8(VAR_2->wq);
  FUNC_2(VAR_2->wq);
 }

 VAR_1->dev_private = ((void*)0);

 FUNC_10(VAR_1->dev);

 FUNC_3(VAR_1);
}
