
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct iommu_state {int dummy; } ;
struct bus_dmamap_res {scalar_t__ dr_used; } ;
typedef int bus_size_t ;
typedef TYPE_1__* bus_dmamap_t ;
struct TYPE_5__ {int dm_reslist; } ;


 scalar_t__ FUNC_0 (struct bus_dmamap_res*) ;
 int FUNC_1 (struct iommu_state*) ;
 scalar_t__ FUNC_2 (int *) ;
 struct bus_dmamap_res* FUNC_3 (int *) ;
 struct bus_dmamap_res* FUNC_4 (struct bus_dmamap_res*,int ) ;
 int VAR_0 ;
 int FUNC_5 (TYPE_1__*,struct bus_dmamap_res*) ;
 int FUNC_6 (struct iommu_state*,TYPE_1__*) ;

__attribute__((used)) static bus_size_t
FUNC_7(struct iommu_state *VAR_1, bus_dmamap_t VAR_2)
{
 struct bus_dmamap_res *VAR_3, *VAR_4;
 bus_size_t VAR_5 = 0;

 FUNC_1(VAR_1);
 for (VAR_3 = FUNC_3(&VAR_2->dm_reslist); VAR_3 != ((void*)0); VAR_3 = VAR_4) {
  VAR_4 = FUNC_4(VAR_3, VAR_0);
  if (VAR_3->dr_used == 0) {
   VAR_5 += FUNC_0(VAR_3);
   FUNC_5(VAR_2, VAR_3);
  }
 }
 if (FUNC_2(&VAR_2->dm_reslist))
  FUNC_6(VAR_1, VAR_2);
 return (VAR_5);
}
