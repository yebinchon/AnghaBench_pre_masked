
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; } ;
struct rockchip_gem_object {scalar_t__ pages; } ;
struct drm_gem_object {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct vm_area_struct*) ;
 int FUNC_1 (struct drm_gem_object*,struct vm_area_struct*) ;
 int FUNC_2 (struct drm_gem_object*,struct vm_area_struct*) ;
 struct rockchip_gem_object* FUNC_3 (struct drm_gem_object*) ;

__attribute__((used)) static int FUNC_4(struct drm_gem_object *VAR_1,
     struct vm_area_struct *VAR_2)
{
 int VAR_3;
 struct rockchip_gem_object *VAR_4 = FUNC_3(VAR_1);





 VAR_2->vm_flags &= ~VAR_0;

 if (VAR_4->pages)
  VAR_3 = FUNC_2(VAR_1, VAR_2);
 else
  VAR_3 = FUNC_1(VAR_1, VAR_2);

 if (VAR_3)
  FUNC_0(VAR_2);

 return VAR_3;
}
