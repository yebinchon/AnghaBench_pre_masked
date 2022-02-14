
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radeon_fbdev {struct radeon_device* rdev; } ;
struct radeon_device {TYPE_1__* ddev; } ;
struct fb_info {struct radeon_fbdev* par; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct fb_info *VAR_1, int VAR_2)
{
 struct radeon_fbdev *VAR_3 = VAR_1->par;
 struct radeon_device *VAR_4 = VAR_3->rdev;
 int VAR_5 = FUNC_0(VAR_4->ddev->dev);
 if (VAR_5 < 0 && VAR_5 != -VAR_0) {
  FUNC_1(VAR_4->ddev->dev);
  FUNC_2(VAR_4->ddev->dev);
  return VAR_5;
 }
 return 0;
}
