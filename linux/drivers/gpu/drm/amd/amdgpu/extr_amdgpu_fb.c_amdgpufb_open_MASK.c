
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fb_info {struct drm_fb_helper* par; } ;
struct drm_fb_helper {TYPE_1__* dev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct fb_info *VAR_1, int VAR_2)
{
 struct drm_fb_helper *VAR_3 = VAR_1->par;
 int VAR_4 = FUNC_0(VAR_3->dev->dev);
 if (VAR_4 < 0 && VAR_4 != -VAR_0) {
  FUNC_1(VAR_3->dev->dev);
  FUNC_2(VAR_3->dev->dev);
  return VAR_4;
 }
 return 0;
}
