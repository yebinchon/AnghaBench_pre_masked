
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_psb_private {scalar_t__ display_count; } ;
struct drm_device {TYPE_1__* pdev; struct drm_psb_private* dev_private; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(struct drm_device *VAR_1)
{
 struct drm_psb_private *VAR_2 = VAR_1->dev_private;
 unsigned long VAR_3;
 FUNC_2(&VAR_0, VAR_3);
 VAR_2->display_count--;
 FUNC_0(VAR_2->display_count < 0);
 FUNC_3(&VAR_0, VAR_3);
 FUNC_1(&VAR_1->pdev->dev);
}
