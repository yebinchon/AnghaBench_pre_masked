
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_device {int dev; struct amdgpu_device* dev_private; } ;
struct TYPE_2__ {int ih; } ;
struct amdgpu_device {TYPE_1__ irq; } ;
typedef scalar_t__ irqreturn_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct amdgpu_device*,int *) ;
 int FUNC_1 (int ) ;

irqreturn_t FUNC_2(int VAR_1, void *VAR_2)
{
 struct drm_device *VAR_3 = (struct drm_device *) VAR_2;
 struct amdgpu_device *VAR_4 = VAR_3->dev_private;
 irqreturn_t VAR_5;

 VAR_5 = FUNC_0(VAR_4, &VAR_4->irq.ih);
 if (VAR_5 == VAR_0)
  FUNC_1(VAR_3->dev);
 return VAR_5;
}
