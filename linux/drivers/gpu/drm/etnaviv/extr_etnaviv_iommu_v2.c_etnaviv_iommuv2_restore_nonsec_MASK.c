
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct etnaviv_iommuv2_context {scalar_t__ mtlb_dma; } ;
struct etnaviv_iommu_context {TYPE_1__* global; } ;
struct etnaviv_gpu {int buffer; } ;
struct TYPE_2__ {scalar_t__ bad_page_dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct etnaviv_gpu*,int ,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct etnaviv_gpu*,int ,int ) ;
 int FUNC_3 (struct etnaviv_gpu*,int) ;
 int FUNC_4 (struct etnaviv_gpu*,int ) ;
 int FUNC_5 (struct etnaviv_gpu*,int ,int) ;
 struct etnaviv_iommuv2_context* FUNC_6 (struct etnaviv_iommu_context*) ;

__attribute__((used)) static void FUNC_7(struct etnaviv_gpu *VAR_2,
 struct etnaviv_iommu_context *VAR_3)
{
 struct etnaviv_iommuv2_context *VAR_4 = FUNC_6(VAR_3);
 u16 VAR_5;


 if (FUNC_4(VAR_2, VAR_0) & VAR_1)
  return;

 VAR_5 = FUNC_0(VAR_2,
    (u32)VAR_4->mtlb_dma,
    (u32)VAR_3->global->bad_page_dma);
 FUNC_2(VAR_2, (u32)FUNC_1(&VAR_2->buffer),
        VAR_5);
 FUNC_3(VAR_2, 100);

 FUNC_5(VAR_2, VAR_0, VAR_1);
}
