
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int memory; int * vaddr; struct gk20a_instmem* imem; } ;
struct gk20a_instobj_iommu {TYPE_2__ base; int vaddr_node; int use_cpt; } ;
struct TYPE_3__ {int subdev; } ;
struct gk20a_instmem {int vaddr_max; int vaddr_use; TYPE_1__ base; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int ,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct gk20a_instobj_iommu *VAR_0)
{
 struct gk20a_instmem *VAR_1 = VAR_0->base.imem;

 FUNC_0(VAR_0->use_cpt);
 FUNC_1(&VAR_0->vaddr_node);
 FUNC_4(VAR_0->base.vaddr);
 VAR_0->base.vaddr = ((void*)0);
 VAR_1->vaddr_use -= FUNC_3(&VAR_0->base.memory);
 FUNC_2(&VAR_1->base.subdev, "vaddr used: %x/%x\n", VAR_1->vaddr_use,
     VAR_1->vaddr_max);
}
