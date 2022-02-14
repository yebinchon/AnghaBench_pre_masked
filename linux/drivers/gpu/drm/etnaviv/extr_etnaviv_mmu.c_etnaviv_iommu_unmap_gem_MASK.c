
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * mm; } ;
struct etnaviv_vram_mapping {int mmu_node; TYPE_1__ vram_node; int use; } ;
struct etnaviv_iommu_context {int lock; int flush_seq; int mm; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct etnaviv_iommu_context*,struct etnaviv_vram_mapping*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct etnaviv_iommu_context *VAR_0,
 struct etnaviv_vram_mapping *VAR_1)
{
 FUNC_0(VAR_1->use);

 FUNC_3(&VAR_0->lock);


 if (VAR_1->vram_node.mm == &VAR_0->mm)
  FUNC_1(VAR_0, VAR_1);

 FUNC_2(&VAR_1->mmu_node);
 VAR_0->flush_seq++;
 FUNC_4(&VAR_0->lock);
}
