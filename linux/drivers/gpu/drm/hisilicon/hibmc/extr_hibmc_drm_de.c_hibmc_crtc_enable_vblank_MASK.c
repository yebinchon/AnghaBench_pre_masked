
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hibmc_drm_private {scalar_t__ mmio; } ;
struct drm_crtc {TYPE_1__* dev; } ;
struct TYPE_2__ {struct hibmc_drm_private* dev_private; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct drm_crtc *VAR_1)
{
 struct hibmc_drm_private *VAR_2 = VAR_1->dev->dev_private;

 FUNC_1(FUNC_0(1),
        VAR_2->mmio + VAR_0);

 return 0;
}
