
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {struct drm_gem_object* vm_private_data; } ;
struct drm_gem_shmem_object {int dummy; } ;
struct drm_gem_object {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct drm_gem_shmem_object*) ;
 int FUNC_2 (struct vm_area_struct*) ;
 struct drm_gem_shmem_object* FUNC_3 (struct drm_gem_object*) ;

__attribute__((used)) static void FUNC_4(struct vm_area_struct *VAR_0)
{
 struct drm_gem_object *VAR_1 = VAR_0->vm_private_data;
 struct drm_gem_shmem_object *VAR_2 = FUNC_3(VAR_1);
 int VAR_3;

 VAR_3 = FUNC_1(VAR_2);
 FUNC_0(VAR_3 != 0);

 FUNC_2(VAR_0);
}
