
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * port; } ;
struct hdlcd_drm_private {TYPE_1__ crtc; } ;
struct drm_device {struct hdlcd_drm_private* dev_private; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,struct drm_device*) ;
 struct drm_device* FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,int *) ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct drm_device*) ;
 int FUNC_6 (struct drm_device*) ;
 int FUNC_7 (struct drm_device*) ;
 int FUNC_8 (struct drm_device*) ;
 int FUNC_9 (struct drm_device*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct device*) ;
 int FUNC_12 (struct device*) ;
 scalar_t__ FUNC_13 (struct device*) ;
 int FUNC_14 (struct device*) ;
 int FUNC_15 (struct device*) ;

__attribute__((used)) static void FUNC_16(struct device *VAR_0)
{
 struct drm_device *VAR_1 = FUNC_1(VAR_0);
 struct hdlcd_drm_private *VAR_2 = VAR_1->dev_private;

 FUNC_6(VAR_1);
 FUNC_8(VAR_1);
 FUNC_0(VAR_0, VAR_1);
 FUNC_10(VAR_2->crtc.port);
 VAR_2->crtc.port = ((void*)0);
 FUNC_14(VAR_0);
 FUNC_4(&VAR_2->crtc);
 FUNC_7(VAR_1);
 FUNC_3(VAR_1);
 FUNC_15(VAR_0);
 if (FUNC_13(VAR_0))
  FUNC_12(VAR_0);
 FUNC_11(VAR_0);
 FUNC_9(VAR_1);
 VAR_1->dev_private = ((void*)0);
 FUNC_2(VAR_0, ((void*)0));
 FUNC_5(VAR_1);
}
