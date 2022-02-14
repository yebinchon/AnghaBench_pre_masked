
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_fault_t ;
struct vm_fault {size_t address; } ;
struct vm_area_struct {size_t vm_start; } ;
struct omap_gem_object {size_t dma_addr; int * pages; } ;
struct drm_gem_object {int dummy; } ;
typedef size_t pgoff_t ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,void*,unsigned long,unsigned long) ;
 int FUNC_2 (unsigned long,int ) ;
 int FUNC_3 (struct drm_gem_object*,size_t) ;
 int FUNC_4 (struct omap_gem_object*) ;
 unsigned long FUNC_5 (int ) ;
 struct omap_gem_object* FUNC_6 (struct drm_gem_object*) ;
 int FUNC_7 (struct vm_area_struct*,size_t,int ) ;

__attribute__((used)) static vm_fault_t FUNC_8(struct drm_gem_object *VAR_2,
  struct vm_area_struct *VAR_3, struct vm_fault *VAR_4)
{
 struct omap_gem_object *VAR_5 = FUNC_6(VAR_2);
 unsigned long VAR_6;
 pgoff_t VAR_7;


 VAR_7 = (VAR_4->address - VAR_3->vm_start) >> VAR_0;

 if (VAR_5->pages) {
  FUNC_3(VAR_2, VAR_7);
  VAR_6 = FUNC_5(VAR_5->pages[VAR_7]);
 } else {
  FUNC_0(!FUNC_4(VAR_5));
  VAR_6 = (VAR_5->dma_addr >> VAR_0) + VAR_7;
 }

 FUNC_1("Inserting %p pfn %lx, pa %lx", (void *)VAR_4->address,
   VAR_6, VAR_6 << VAR_0);

 return FUNC_7(VAR_3, VAR_4->address,
   FUNC_2(VAR_6, VAR_1));
}
