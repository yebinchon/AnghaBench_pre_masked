
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct rockchip_gem_object {int pages; } ;
struct drm_gem_object {unsigned int size; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 struct rockchip_gem_object* FUNC_0 (struct drm_gem_object*) ;
 int FUNC_1 (struct vm_area_struct*,int ,unsigned int) ;
 unsigned long FUNC_2 (struct vm_area_struct*) ;

__attribute__((used)) static int FUNC_3(struct drm_gem_object *VAR_2,
           struct vm_area_struct *VAR_3)
{
 struct rockchip_gem_object *VAR_4 = FUNC_0(VAR_2);
 unsigned int VAR_5 = VAR_2->size >> VAR_1;
 unsigned long VAR_6 = FUNC_2(VAR_3);

 if (VAR_6 == 0)
  return -VAR_0;

 return FUNC_1(VAR_3, VAR_4->pages, VAR_5);
}
