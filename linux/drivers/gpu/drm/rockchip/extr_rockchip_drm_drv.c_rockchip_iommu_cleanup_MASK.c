
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rockchip_drm_private {int domain; int mm; } ;
struct drm_device {struct rockchip_drm_private* dev_private; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct drm_device *VAR_1)
{
 struct rockchip_drm_private *VAR_2 = VAR_1->dev_private;

 if (!VAR_0)
  return;

 FUNC_0(&VAR_2->mm);
 FUNC_1(VAR_2->domain);
}
