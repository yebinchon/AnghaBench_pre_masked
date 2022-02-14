
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct iommu_state {int dummy; } ;
typedef TYPE_1__* bus_dmamap_t ;
typedef TYPE_2__* bus_dma_tag_t ;
typedef int bus_dma_segment_t ;
struct TYPE_8__ {int * dt_segments; struct iommu_state* dt_cookie; } ;
struct TYPE_7__ {int dm_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct iommu_state*) ;
 int FUNC_1 (struct iommu_state*) ;
 int FUNC_2 (struct iommu_state*,TYPE_1__*) ;
 int FUNC_3 (struct iommu_state*,TYPE_1__*) ;

__attribute__((used)) static bus_dma_segment_t *
FUNC_4(bus_dma_tag_t VAR_1, bus_dmamap_t VAR_2,
    bus_dma_segment_t *VAR_3, int VAR_4, int VAR_5)
{
 struct iommu_state *VAR_6 = VAR_1->dt_cookie;

 FUNC_0(VAR_6);
 FUNC_3(VAR_6, VAR_2);
 if (VAR_5 != 0) {
  FUNC_2(VAR_6, VAR_2);
  FUNC_1(VAR_6);
 } else {
  FUNC_1(VAR_6);
  VAR_2->dm_flags |= VAR_0;
 }
 if (VAR_3 == ((void*)0))
  VAR_3 = VAR_1->dt_segments;
 return (VAR_3);
}
