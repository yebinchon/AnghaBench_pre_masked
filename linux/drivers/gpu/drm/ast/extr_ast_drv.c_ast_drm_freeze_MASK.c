
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {int fb_helper; int pdev; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct drm_device*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct drm_device *VAR_0)
{
 FUNC_1(VAR_0);
 FUNC_2(VAR_0->pdev);
 FUNC_0(VAR_0->fb_helper, 1);

 return 0;
}
