
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct iommu_state {int dummy; } ;
typedef TYPE_1__* bus_dmamap_t ;
typedef TYPE_2__* bus_dma_tag_t ;
struct TYPE_13__ {int dt_maxsize; struct iommu_state* dt_cookie; } ;
struct TYPE_12__ {int dm_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct iommu_state*) ;
 int FUNC_2 (struct iommu_state*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (TYPE_2__*,struct iommu_state*,TYPE_1__*,int ) ;
 int FUNC_4 (struct iommu_state*,TYPE_1__*) ;
 void* FUNC_5 (int ,int ,int) ;
 int FUNC_6 (TYPE_2__*,TYPE_1__**) ;
 int FUNC_7 (TYPE_2__*,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_8(bus_dma_tag_t VAR_9, void **VAR_10, int VAR_11,
    bus_dmamap_t *VAR_12)
{
 struct iommu_state *VAR_13 = VAR_9->dt_cookie;
 int VAR_14, VAR_15;





 if ((VAR_14 = FUNC_6(VAR_9, VAR_12)) != 0)
  return (VAR_14);

 if ((VAR_11 & VAR_1) != 0)
  VAR_15 = VAR_6;
 else
  VAR_15 = VAR_7;
 if ((VAR_11 & VAR_2) != 0)
  VAR_15 |= VAR_8;

 if ((*VAR_10 = FUNC_5(VAR_9->dt_maxsize, VAR_5, VAR_15)) == ((void*)0)) {
  VAR_14 = VAR_4;
  FUNC_7(VAR_9, *VAR_12);
  return (VAR_14);
 }
 if ((VAR_11 & VAR_0) != 0)
  (*VAR_12)->dm_flags |= VAR_3;




 FUNC_3(VAR_9, VAR_13, *VAR_12, FUNC_0(VAR_9->dt_maxsize));
 FUNC_1(VAR_13);
 FUNC_4(VAR_13, *VAR_12);
 FUNC_2(VAR_13);
 return (0);
}
