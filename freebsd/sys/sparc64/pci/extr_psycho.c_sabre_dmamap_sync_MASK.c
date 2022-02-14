
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct iommu_state {int is_bushandle; int is_bustag; } ;
typedef int bus_dmasync_op_t ;
typedef TYPE_1__* bus_dmamap_t ;
typedef TYPE_2__* bus_dma_tag_t ;
struct TYPE_6__ {struct iommu_state* dt_cookie; } ;
struct TYPE_5__ {int dm_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(bus_dma_tag_t VAR_5, bus_dmamap_t VAR_6, bus_dmasync_op_t VAR_7)
{
 struct iommu_state *VAR_8 = VAR_5->dt_cookie;

 if ((VAR_6->dm_flags & VAR_2) == 0)
  return;

 if ((VAR_7 & VAR_0) != 0)
  (void)FUNC_0(VAR_8->is_bustag, VAR_8->is_bushandle,
      VAR_3);

 if ((VAR_7 & VAR_1) != 0)
  FUNC_1(VAR_4);
}
