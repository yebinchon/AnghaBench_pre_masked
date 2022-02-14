
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct etnaviv_iommuv2_context {int id; int mtlb_dma; scalar_t__ mtlb_cpu; int * stlb_dma; scalar_t__* stlb_cpu; } ;
struct etnaviv_iommu_context {TYPE_2__* global; int mm; } ;
struct TYPE_3__ {int pta_alloc; } ;
struct TYPE_4__ {TYPE_1__ v2; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,scalar_t__,int ) ;
 int FUNC_2 (int *) ;
 struct etnaviv_iommuv2_context* FUNC_3 (struct etnaviv_iommu_context*) ;
 int FUNC_4 (struct etnaviv_iommuv2_context*) ;

__attribute__((used)) static void FUNC_5(struct etnaviv_iommu_context *VAR_2)
{
 struct etnaviv_iommuv2_context *VAR_3 = FUNC_3(VAR_2);
 int VAR_4;

 FUNC_2(&VAR_2->mm);

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (VAR_3->stlb_cpu[VAR_4])
   FUNC_1(VAR_2->global->dev, VAR_1,
        VAR_3->stlb_cpu[VAR_4],
        VAR_3->stlb_dma[VAR_4]);
 }

 FUNC_1(VAR_2->global->dev, VAR_1, VAR_3->mtlb_cpu,
      VAR_3->mtlb_dma);

 FUNC_0(VAR_3->id, VAR_2->global->v2.pta_alloc);

 FUNC_4(VAR_3);
}
