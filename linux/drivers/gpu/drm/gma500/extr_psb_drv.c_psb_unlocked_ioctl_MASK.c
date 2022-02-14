
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct file {struct drm_file* private_data; } ;
struct drm_psb_private {int rpm_enabled; scalar_t__ is_lvds_on; } ;
struct drm_file {TYPE_1__* minor; } ;
struct drm_device {TYPE_2__* pdev; struct drm_psb_private* dev_private; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {struct drm_device* dev; } ;


 long FUNC_0 (struct file*,unsigned int,unsigned long) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static long FUNC_2(struct file *VAR_0, unsigned int VAR_1,
          unsigned long VAR_2)
{
 struct drm_file *VAR_3 = VAR_0->private_data;
 struct drm_device *VAR_4 = VAR_3->minor->dev;
 struct drm_psb_private *VAR_5 = VAR_4->dev_private;
 static unsigned int VAR_6;

 if (VAR_6 == 1 && VAR_5->is_lvds_on) {
  VAR_6++;
  FUNC_1(&VAR_4->pdev->dev);
  VAR_5->rpm_enabled = 1;
 }
 return FUNC_0(VAR_0, VAR_1, VAR_2);

}
