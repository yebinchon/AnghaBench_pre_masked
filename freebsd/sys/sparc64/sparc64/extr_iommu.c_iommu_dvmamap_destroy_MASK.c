
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct iommu_state {int dummy; } ;
typedef int bus_dmamap_t ;
typedef TYPE_1__* bus_dma_tag_t ;
struct TYPE_4__ {struct iommu_state* dt_cookie; } ;


 int FUNC_0 (struct iommu_state*,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_2(bus_dma_tag_t VAR_0, bus_dmamap_t VAR_1)
{
 struct iommu_state *VAR_2 = VAR_0->dt_cookie;

 FUNC_0(VAR_2, VAR_1);
 FUNC_1(VAR_0, VAR_1);
 return (0);
}
