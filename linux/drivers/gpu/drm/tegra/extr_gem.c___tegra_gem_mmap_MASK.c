
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_pgoff; int vm_page_prot; int vm_flags; } ;
struct tegra_bo {int paddr; int vaddr; int pages; } ;
struct drm_gem_object {int size; TYPE_1__* dev; } ;
typedef int pgprot_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct vm_area_struct*,int ,int ,int ) ;
 int FUNC_1 (struct vm_area_struct*) ;
 int FUNC_2 (int ) ;
 struct tegra_bo* FUNC_3 (struct drm_gem_object*) ;
 int FUNC_4 (int ) ;

int FUNC_5(struct drm_gem_object *VAR_2, struct vm_area_struct *VAR_3)
{
 struct tegra_bo *VAR_4 = FUNC_3(VAR_2);

 if (!VAR_4->pages) {
  unsigned long VAR_5 = VAR_3->vm_pgoff;
  int VAR_6;






  VAR_3->vm_flags &= ~VAR_1;
  VAR_3->vm_pgoff = 0;

  VAR_6 = FUNC_0(VAR_2->dev->dev, VAR_3, VAR_4->vaddr, VAR_4->paddr,
      VAR_2->size);
  if (VAR_6 < 0) {
   FUNC_1(VAR_3);
   return VAR_6;
  }

  VAR_3->vm_pgoff = VAR_5;
 } else {
  pgprot_t VAR_7 = FUNC_4(VAR_3->vm_flags);

  VAR_3->vm_flags |= VAR_0;
  VAR_3->vm_flags &= ~VAR_1;

  VAR_3->vm_page_prot = FUNC_2(VAR_7);
 }

 return 0;
}
