
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_psb_private {int display_count; scalar_t__ display_power; } ;
struct drm_device {TYPE_1__* pdev; struct drm_psb_private* dev_private; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

bool FUNC_6(struct drm_device *VAR_1, bool VAR_2)
{
 struct drm_psb_private *VAR_3 = VAR_1->dev_private;
 int VAR_4;
 unsigned long VAR_5;

 FUNC_4(&VAR_0, VAR_5);

 if (VAR_3->display_power) {
  VAR_3->display_count++;
  FUNC_1(&VAR_1->pdev->dev);
  FUNC_5(&VAR_0, VAR_5);
  return 1;
 }
 if (VAR_2 == 0)
  goto out_false;


 VAR_4 = FUNC_0(VAR_1->pdev);
 if (VAR_4 == 0) {
  FUNC_3(VAR_1);
  FUNC_2(VAR_1);
  FUNC_1(&VAR_1->pdev->dev);
  VAR_3->display_count++;
  FUNC_5(&VAR_0, VAR_5);
  return 1;
 }
out_false:
 FUNC_5(&VAR_0, VAR_5);
 return 0;
}
