
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct iommu_state {int dummy; } ;
typedef int bus_dmamap_t ;
typedef TYPE_1__* bus_dma_tag_t ;
struct TYPE_4__ {struct iommu_state* dt_cookie; } ;


 int VAR_0 ;
 int FUNC_0 (void*,int ) ;
 int FUNC_1 (struct iommu_state*,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static void
FUNC_3(bus_dma_tag_t VAR_1, void *VAR_2, bus_dmamap_t VAR_3)
{
 struct iommu_state *VAR_4 = VAR_1->dt_cookie;

 FUNC_1(VAR_4, VAR_3);
 FUNC_2(VAR_1, VAR_3);
 FUNC_0(VAR_2, VAR_0);
}
