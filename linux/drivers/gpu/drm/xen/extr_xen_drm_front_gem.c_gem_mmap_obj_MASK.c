
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xen_gem_object {int num_pages; int pages; } ;
struct vm_area_struct {int vm_flags; int vm_page_prot; scalar_t__ vm_pgoff; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct vm_area_struct*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct xen_gem_object *VAR_2,
   struct vm_area_struct *VAR_3)
{
 int VAR_4;






 VAR_3->vm_flags &= ~VAR_1;
 VAR_3->vm_flags |= VAR_0;
 VAR_3->vm_pgoff = 0;







 VAR_3->vm_page_prot = FUNC_1(VAR_3->vm_flags);
 VAR_4 = FUNC_2(VAR_3, VAR_2->pages, VAR_2->num_pages);
 if (VAR_4 < 0)
  FUNC_0("Failed to map pages into vma: %d\n", VAR_4);

 return VAR_4;
}
