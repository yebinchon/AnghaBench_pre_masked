
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_fault_t ;
struct vm_fault {size_t address; struct vm_area_struct* vma; } ;
struct vm_area_struct {size_t vm_start; struct drm_gem_object* vm_private_data; } ;
struct exynos_drm_gem {size_t size; int * pages; } ;
struct drm_gem_object {int dummy; } ;
typedef size_t pgoff_t ;


 int FUNC_0 (char*) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (unsigned long,int ) ;
 unsigned long FUNC_2 (int ) ;
 struct exynos_drm_gem* FUNC_3 (struct drm_gem_object*) ;
 int FUNC_4 (struct vm_area_struct*,size_t,int ) ;

vm_fault_t FUNC_5(struct vm_fault *VAR_3)
{
 struct vm_area_struct *VAR_4 = VAR_3->vma;
 struct drm_gem_object *VAR_5 = VAR_4->vm_private_data;
 struct exynos_drm_gem *VAR_6 = FUNC_3(VAR_5);
 unsigned long VAR_7;
 pgoff_t VAR_8;

 VAR_8 = (VAR_3->address - VAR_4->vm_start) >> VAR_0;

 if (VAR_8 >= (VAR_6->size >> VAR_0)) {
  FUNC_0("invalid page offset\n");
  return VAR_2;
 }

 VAR_7 = FUNC_2(VAR_6->pages[VAR_8]);
 return FUNC_4(VAR_4, VAR_3->address,
   FUNC_1(VAR_7, VAR_1));
}
