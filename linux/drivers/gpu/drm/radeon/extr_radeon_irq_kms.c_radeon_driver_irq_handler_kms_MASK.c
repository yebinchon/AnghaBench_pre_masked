
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {int dummy; } ;
struct drm_device {int dev; struct radeon_device* dev_private; } ;
typedef scalar_t__ irqreturn_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct radeon_device*) ;

irqreturn_t FUNC_2(int VAR_1, void *VAR_2)
{
 struct drm_device *VAR_3 = (struct drm_device *) VAR_2;
 struct radeon_device *VAR_4 = VAR_3->dev_private;
 irqreturn_t VAR_5;

 VAR_5 = FUNC_1(VAR_4);
 if (VAR_5 == VAR_0)
  FUNC_0(VAR_3->dev);
 return VAR_5;
}
