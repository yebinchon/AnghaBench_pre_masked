
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hibmc_drm_private {scalar_t__ mmio; } ;
struct drm_device {scalar_t__ dev_private; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct drm_device*,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_2, void *VAR_3)
{
 struct drm_device *VAR_4 = (struct drm_device *)VAR_3;
 struct hibmc_drm_private *VAR_5 =
  (struct hibmc_drm_private *)VAR_4->dev_private;
 u32 VAR_6;

 VAR_6 = FUNC_2(VAR_5->mmio + VAR_0);

 if (VAR_6 & FUNC_0(1)) {
  FUNC_3(FUNC_0(1),
         VAR_5->mmio + VAR_0);
  FUNC_1(VAR_4, 0);
 }

 return VAR_1;
}
