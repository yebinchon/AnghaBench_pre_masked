
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct etnaviv_iommuv2_context {size_t id; int mtlb_dma; } ;
struct etnaviv_iommu_context {TYPE_2__* global; } ;
struct etnaviv_gpu {int buffer; } ;
struct TYPE_3__ {int* pta_cpu; int pta_dma; } ;
struct TYPE_4__ {TYPE_1__ v2; int bad_page_dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct etnaviv_gpu*,size_t) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct etnaviv_gpu*,int ,int ) ;
 int FUNC_5 (struct etnaviv_gpu*,int) ;
 int FUNC_6 (struct etnaviv_gpu*,int ) ;
 int FUNC_7 (struct etnaviv_gpu*,int ,int) ;
 int FUNC_8 (int ) ;
 struct etnaviv_iommuv2_context* FUNC_9 (struct etnaviv_iommu_context*) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static void FUNC_11(struct etnaviv_gpu *VAR_10,
 struct etnaviv_iommu_context *VAR_11)
{
 struct etnaviv_iommuv2_context *VAR_12 = FUNC_9(VAR_11);
 u16 VAR_13;


 if (FUNC_6(VAR_10, VAR_7) & VAR_8)
  return;

 FUNC_7(VAR_10, VAR_3,
    FUNC_8(VAR_11->global->v2.pta_dma));
 FUNC_7(VAR_10, VAR_2,
    FUNC_10(VAR_11->global->v2.pta_dma));
 FUNC_7(VAR_10, VAR_4, VAR_5);

 FUNC_7(VAR_10, VAR_1,
    FUNC_8(VAR_11->global->bad_page_dma));
 FUNC_7(VAR_10, VAR_9,
    FUNC_8(VAR_11->global->bad_page_dma));
 FUNC_7(VAR_10, VAR_6,
    FUNC_0(
    FUNC_10(VAR_11->global->bad_page_dma)) |
    FUNC_1(
    FUNC_10(VAR_11->global->bad_page_dma)));

 VAR_11->global->v2.pta_cpu[VAR_12->id] = VAR_12->mtlb_dma |
       VAR_0;


 VAR_13 = FUNC_2(VAR_10, VAR_12->id);
 FUNC_4(VAR_10, (u32)FUNC_3(&VAR_10->buffer),
        VAR_13);
 FUNC_5(VAR_10, 100);

 FUNC_7(VAR_10, VAR_7, VAR_8);
}
