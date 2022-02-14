
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_fault_t ;
struct vm_fault {size_t address; struct vm_area_struct* vma; } ;
struct vm_area_struct {size_t vm_start; struct drm_gem_object* vm_private_data; } ;
struct lima_bo {int * pages; } ;
struct drm_gem_object {int dummy; } ;
typedef size_t pgoff_t ;
typedef int pfn_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 struct lima_bo* FUNC_2 (struct drm_gem_object*) ;
 int FUNC_3 (struct vm_area_struct*,size_t,int ) ;

__attribute__((used)) static vm_fault_t FUNC_4(struct vm_fault *VAR_2)
{
 struct vm_area_struct *VAR_3 = VAR_2->vma;
 struct drm_gem_object *VAR_4 = VAR_3->vm_private_data;
 struct lima_bo *VAR_5 = FUNC_2(VAR_4);
 pfn_t VAR_6;
 pgoff_t VAR_7;


 VAR_7 = (VAR_2->address - VAR_3->vm_start) >> VAR_0;
 VAR_6 = FUNC_0(FUNC_1(VAR_5->pages[VAR_7]), VAR_1);

 return FUNC_3(VAR_3, VAR_2->address, VAR_6);
}
