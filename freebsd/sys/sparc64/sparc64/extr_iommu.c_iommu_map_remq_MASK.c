
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct iommu_state {int is_maplruq; } ;
typedef TYPE_1__* bus_dmamap_t ;
struct TYPE_4__ {scalar_t__ dm_onq; } ;


 int FUNC_0 (struct iommu_state*) ;
 int FUNC_1 (int *,TYPE_1__*,int ) ;
 int VAR_0 ;

__attribute__((used)) static __inline void
FUNC_2(struct iommu_state *VAR_1, bus_dmamap_t VAR_2)
{

 FUNC_0(VAR_1);
 if (VAR_2->dm_onq)
  FUNC_1(&VAR_1->is_maplruq, VAR_2, VAR_0);
 VAR_2->dm_onq = 0;
}
