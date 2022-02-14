
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct iommu_state {int dummy; } ;
typedef TYPE_1__* bus_dmamap_t ;
struct TYPE_6__ {int dm_reslist; } ;


 int FUNC_0 (struct iommu_state*) ;
 int FUNC_1 (struct iommu_state*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (struct iommu_state*,TYPE_1__*) ;
 int FUNC_6 (struct iommu_state*,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_7(struct iommu_state *VAR_0, bus_dmamap_t VAR_1)
{

 FUNC_0(VAR_0);
 FUNC_6(VAR_0, VAR_1);
 FUNC_5(VAR_0, VAR_1);
 FUNC_1(VAR_0);
 while (!FUNC_2(&VAR_1->dm_reslist))
  FUNC_4(VAR_1, FUNC_3(&VAR_1->dm_reslist));
}
