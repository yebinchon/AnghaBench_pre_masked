
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct iommu_state {int dummy; } ;
typedef TYPE_1__* bus_dmamap_t ;
typedef TYPE_2__* bus_dma_tag_t ;
struct TYPE_8__ {struct iommu_state* dt_cookie; } ;
struct TYPE_7__ {int dm_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct iommu_state*) ;
 int FUNC_1 (struct iommu_state*) ;
 int FUNC_2 (struct iommu_state*,TYPE_1__*) ;
 int FUNC_3 (struct iommu_state*,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_4(bus_dma_tag_t VAR_1, bus_dmamap_t VAR_2)
{
 struct iommu_state *VAR_3 = VAR_1->dt_cookie;

 if ((VAR_2->dm_flags & VAR_0) == 0)
  return;
 FUNC_0(VAR_3);
 FUNC_2(VAR_3, VAR_2);
 FUNC_3(VAR_3, VAR_2);
 FUNC_1(VAR_3);
 VAR_2->dm_flags &= ~VAR_0;
}
