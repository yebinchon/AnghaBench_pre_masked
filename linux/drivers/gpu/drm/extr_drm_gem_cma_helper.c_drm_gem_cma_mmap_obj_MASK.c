
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {scalar_t__ vm_start; scalar_t__ vm_end; scalar_t__ vm_pgoff; int vm_flags; } ;
struct TYPE_4__ {TYPE_1__* dev; } ;
struct drm_gem_cma_object {int paddr; int vaddr; TYPE_2__ base; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct vm_area_struct*,int ,int ,scalar_t__) ;
 int FUNC_1 (struct vm_area_struct*) ;

__attribute__((used)) static int FUNC_2(struct drm_gem_cma_object *VAR_1,
    struct vm_area_struct *VAR_2)
{
 int VAR_3;






 VAR_2->vm_flags &= ~VAR_0;
 VAR_2->vm_pgoff = 0;

 VAR_3 = FUNC_0(VAR_1->base.dev->dev, VAR_2, VAR_1->vaddr,
     VAR_1->paddr, VAR_2->vm_end - VAR_2->vm_start);
 if (VAR_3)
  FUNC_1(VAR_2);

 return VAR_3;
}
