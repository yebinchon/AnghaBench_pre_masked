
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_psb_private {int irqmask_lock; } ;
struct drm_device {scalar_t__ dev_private; } ;


 int FUNC_0 (struct drm_psb_private*,int ) ;
 int FUNC_1 (struct drm_device*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

int FUNC_4(struct drm_device *VAR_0)
{
 struct drm_psb_private *VAR_1 =
     (struct drm_psb_private *) VAR_0->dev_private;
 unsigned long VAR_2;

 FUNC_2(&VAR_1->irqmask_lock, VAR_2);

 FUNC_0(VAR_1, 0);
 FUNC_1(VAR_0);

 FUNC_3(&VAR_1->irqmask_lock, VAR_2);

 return 0;
}
