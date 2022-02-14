
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int vm_paddr_t ;
typedef scalar_t__ bus_size_t ;
typedef TYPE_1__* bus_dmamap_t ;
typedef TYPE_2__* bus_dma_tag_t ;
typedef int bus_dma_segment_t ;
struct TYPE_17__ {scalar_t__ maxsegsz; } ;
struct TYPE_16__ {int bounce_flags; TYPE_4__ common; int * segments; } ;
struct TYPE_15__ {scalar_t__ pagesneeded; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_1__*,int,scalar_t__,int *,int*) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*,int,scalar_t__,int) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*,int) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*,int ,int,int ,scalar_t__) ;
 scalar_t__ FUNC_5 (TYPE_4__*,int) ;
 TYPE_1__ VAR_4 ;

__attribute__((used)) static int
FUNC_6(bus_dma_tag_t VAR_5, bus_dmamap_t VAR_6,
    vm_paddr_t VAR_7, bus_size_t VAR_8, int VAR_9, bus_dma_segment_t *VAR_10,
    int *VAR_11)
{
 bus_size_t VAR_12;
 vm_paddr_t VAR_13;
 int VAR_14;

 if (VAR_6 == ((void*)0))
  VAR_6 = &VAR_4;

 if (VAR_10 == ((void*)0))
  VAR_10 = VAR_5->segments;

 if ((VAR_5->bounce_flags & VAR_0) != 0) {
  FUNC_2(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
  if (VAR_6->pagesneeded != 0) {
   VAR_14 = FUNC_3(VAR_5, VAR_6, VAR_9);
   if (VAR_14)
    return (VAR_14);
  }
 }

 while (VAR_8 > 0) {
  VAR_13 = VAR_7;
  VAR_12 = FUNC_0(VAR_8, VAR_5->common.maxsegsz);
  if ((VAR_5->bounce_flags & VAR_0) != 0 &&
      VAR_6->pagesneeded != 0 &&
      FUNC_5(&VAR_5->common, VAR_13)) {
   VAR_12 = FUNC_0(VAR_12, VAR_3 - (VAR_13 & VAR_2));
   VAR_13 = FUNC_4(VAR_5, VAR_6, 0, VAR_13, 0,
       VAR_12);
  }
  VAR_12 = FUNC_1(VAR_5, VAR_6, VAR_13, VAR_12, VAR_10,
      VAR_11);
  if (VAR_12 == 0)
   break;
  VAR_7 += VAR_12;
  VAR_8 -= VAR_12;
 }




 return (VAR_8 != 0 ? VAR_1 : 0);
}
