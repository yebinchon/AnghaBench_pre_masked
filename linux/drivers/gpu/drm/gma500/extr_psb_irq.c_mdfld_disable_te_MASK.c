
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_psb_private {int irqmask_lock; int dsr_enable; } ;
struct drm_device {scalar_t__ dev_private; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_psb_private*,int) ;
 int FUNC_1 (struct drm_psb_private*,int,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(struct drm_device *VAR_1, int VAR_2)
{
 struct drm_psb_private *VAR_3 =
  (struct drm_psb_private *) VAR_1->dev_private;
 unsigned long VAR_4;

 if (!VAR_3->dsr_enable)
  return;

 FUNC_2(&VAR_3->irqmask_lock, VAR_4);

 FUNC_0(VAR_3, VAR_2);
 FUNC_1(VAR_3, VAR_2, VAR_0);

 FUNC_3(&VAR_3->irqmask_lock, VAR_4);
}
