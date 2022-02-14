
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct iommu_state {int dummy; } ;
typedef scalar_t__ bus_size_t ;
typedef TYPE_1__* bus_dmamap_t ;
typedef TYPE_2__* bus_dma_tag_t ;
struct TYPE_11__ {int dt_maxsize; int dt_nsegments; struct iommu_state* dt_cookie; } ;
struct TYPE_10__ {int dm_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct iommu_state*) ;
 int FUNC_2 (struct iommu_state*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_2__*,struct iommu_state*,TYPE_1__*,scalar_t__) ;
 int FUNC_5 (struct iommu_state*,TYPE_1__*) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (TYPE_2__*,TYPE_1__**) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int
FUNC_9(bus_dma_tag_t VAR_4, int VAR_5, bus_dmamap_t *VAR_6)
{
 struct iommu_state *VAR_7 = VAR_4->dt_cookie;
 bus_size_t VAR_8, VAR_9, VAR_10;
 int VAR_11, VAR_12, VAR_13;

 if ((VAR_11 = FUNC_7(VAR_4, VAR_6)) != 0)
  return (VAR_11);
 if ((VAR_5 & VAR_0) != 0)
  (*VAR_6)->dm_flags |= VAR_1;
 VAR_8 = FUNC_8(FUNC_0(VAR_4->dt_maxsize), VAR_2);
 VAR_11 = FUNC_4(VAR_4, VAR_7, *VAR_6, VAR_8);
 if (VAR_11 != 0)
  return (0);




 VAR_13 = FUNC_3(VAR_4->dt_nsegments, VAR_3);
 VAR_9 = VAR_4->dt_maxsize / VAR_13;
 for (VAR_12 = 1; VAR_12 < VAR_13 && VAR_8 < VAR_2; VAR_12++) {
  VAR_10 = FUNC_6(FUNC_8(VAR_9, VAR_2 - VAR_8));
  VAR_11 = FUNC_4(VAR_4, VAR_7, *VAR_6, VAR_10);
  if (VAR_11 != 0)
   break;
  VAR_8 += VAR_10;
 }
 FUNC_1(VAR_7);
 FUNC_5(VAR_7, *VAR_6);
 FUNC_2(VAR_7);
 return (0);
}
