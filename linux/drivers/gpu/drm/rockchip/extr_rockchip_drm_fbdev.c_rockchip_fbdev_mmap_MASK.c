
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct rockchip_drm_private {int fbdev_bo; } ;
struct fb_info {struct drm_fb_helper* par; } ;
struct drm_fb_helper {int dummy; } ;


 int FUNC_0 (int ,struct vm_area_struct*) ;
 struct rockchip_drm_private* FUNC_1 (struct drm_fb_helper*) ;

__attribute__((used)) static int FUNC_2(struct fb_info *VAR_0,
          struct vm_area_struct *VAR_1)
{
 struct drm_fb_helper *VAR_2 = VAR_0->par;
 struct rockchip_drm_private *VAR_3 = FUNC_1(VAR_2);

 return FUNC_0(VAR_3->fbdev_bo, VAR_1);
}
