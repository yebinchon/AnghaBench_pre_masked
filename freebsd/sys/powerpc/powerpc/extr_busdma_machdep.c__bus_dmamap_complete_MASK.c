
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int segs ;
typedef TYPE_1__* bus_dmamap_t ;
typedef TYPE_2__* bus_dma_tag_t ;
typedef int bus_dma_segment_t ;
struct TYPE_6__ {int iommu_cookie; int boundary; int alignment; int highaddr; int lowaddr; int * iommu; } ;
struct TYPE_5__ {int nsegs; int * segments; } ;


 int FUNC_0 (int *,int *,int*,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int *,int *,int) ;

bus_dma_segment_t *
FUNC_2(bus_dma_tag_t VAR_0, bus_dmamap_t VAR_1,
       bus_dma_segment_t *VAR_2, int VAR_3, int VAR_4)
{

 VAR_1->nsegs = VAR_3;
 if (VAR_2 != ((void*)0))
  FUNC_1(VAR_1->segments, VAR_2, VAR_1->nsegs*sizeof(VAR_2[0]));
 if (VAR_0->iommu != ((void*)0))
  FUNC_0(VAR_0->iommu, VAR_1->segments, &VAR_1->nsegs,
      VAR_0->lowaddr, VAR_0->highaddr, VAR_0->alignment,
      VAR_0->boundary, VAR_0->iommu_cookie);

 if (VAR_2 != ((void*)0))
  FUNC_1(VAR_2, VAR_1->segments, VAR_1->nsegs*sizeof(VAR_2[0]));
 else
  VAR_2 = VAR_1->segments;

 return (VAR_2);
}
