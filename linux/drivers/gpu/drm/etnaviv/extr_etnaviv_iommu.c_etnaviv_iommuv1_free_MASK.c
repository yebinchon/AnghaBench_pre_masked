
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct etnaviv_iommuv1_context {int pgtable_dma; int pgtable_cpu; } ;
struct etnaviv_iommu_context {TYPE_2__* global; int mm; } ;
struct TYPE_3__ {int * shared_context; } ;
struct TYPE_4__ {TYPE_1__ v1; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct etnaviv_iommuv1_context*) ;
 struct etnaviv_iommuv1_context* FUNC_3 (struct etnaviv_iommu_context*) ;

__attribute__((used)) static void FUNC_4(struct etnaviv_iommu_context *VAR_1)
{
 struct etnaviv_iommuv1_context *VAR_2 = FUNC_3(VAR_1);

 FUNC_1(&VAR_1->mm);

 FUNC_0(VAR_1->global->dev, VAR_0, VAR_2->pgtable_cpu,
      VAR_2->pgtable_dma);

 VAR_1->global->v1.shared_context = ((void*)0);

 FUNC_2(VAR_2);
}
