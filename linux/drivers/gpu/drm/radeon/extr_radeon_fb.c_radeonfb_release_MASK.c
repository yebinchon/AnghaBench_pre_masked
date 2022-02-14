
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radeon_fbdev {struct radeon_device* rdev; } ;
struct radeon_device {TYPE_1__* ddev; } ;
struct fb_info {struct radeon_fbdev* par; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct fb_info *VAR_0, int VAR_1)
{
 struct radeon_fbdev *VAR_2 = VAR_0->par;
 struct radeon_device *VAR_3 = VAR_2->rdev;

 FUNC_0(VAR_3->ddev->dev);
 FUNC_1(VAR_3->ddev->dev);
 return 0;
}
