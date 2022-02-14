
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct iommu_state {int dummy; } ;
typedef scalar_t__ bus_size_t ;
typedef TYPE_1__* bus_dmamap_t ;
struct TYPE_3__ {int dm_flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct iommu_state*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static __inline int
FUNC_1(struct iommu_state *VAR_2, bus_dmamap_t VAR_3, bus_size_t VAR_4)
{

 return (VAR_4 >= VAR_1 && FUNC_0(VAR_2) &&
     (VAR_3->dm_flags & VAR_0) == 0);
}
