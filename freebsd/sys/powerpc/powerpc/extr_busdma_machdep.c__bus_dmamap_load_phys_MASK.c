
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int vm_paddr_t ;
typedef scalar_t__ bus_size_t ;
typedef TYPE_1__* bus_dmamap_t ;
typedef TYPE_2__* bus_dma_tag_t ;
typedef int bus_dma_segment_t ;
typedef int bus_addr_t ;
struct TYPE_15__ {int flags; scalar_t__ maxsegsz; } ;
struct TYPE_14__ {scalar_t__ pagesneeded; int * segments; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_1__*,int,scalar_t__,int *,int*) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*,int,scalar_t__,int) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*,int) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*,int ,int,scalar_t__) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int) ;

int
FUNC_6(bus_dma_tag_t VAR_4,
        bus_dmamap_t VAR_5,
        vm_paddr_t VAR_6, bus_size_t VAR_7,
        int VAR_8,
        bus_dma_segment_t *VAR_9,
        int *VAR_10)
{
 bus_addr_t VAR_11;
 bus_size_t VAR_12;
 int VAR_13;

 if (VAR_9 == ((void*)0))
  VAR_9 = VAR_5->segments;

 if ((VAR_4->flags & VAR_0) != 0) {
  FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
  if (VAR_5->pagesneeded != 0) {
   VAR_13 = FUNC_3(VAR_4, VAR_5, VAR_8);
   if (VAR_13)
    return (VAR_13);
  }
 }

 while (VAR_7 > 0) {
  VAR_11 = VAR_6;
  VAR_12 = FUNC_0(VAR_7, VAR_4->maxsegsz);
  if (VAR_5->pagesneeded != 0 && FUNC_5(VAR_4, VAR_11)) {
   VAR_12 = FUNC_0(VAR_12, VAR_3 - (VAR_11 & VAR_2));
   VAR_11 = FUNC_4(VAR_4, VAR_5, 0, VAR_11,
       VAR_12);
  }
  VAR_12 = FUNC_1(VAR_4, VAR_5, VAR_11, VAR_12, VAR_9,
      VAR_10);
  if (VAR_12 == 0)
   break;
  VAR_6 += VAR_12;
  VAR_7 -= VAR_12;
 }




 return (VAR_7 != 0 ? VAR_1 : 0);
}
