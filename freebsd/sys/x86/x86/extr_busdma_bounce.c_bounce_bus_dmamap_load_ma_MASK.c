
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef scalar_t__ vm_paddr_t ;
struct vm_page {int dummy; } ;
typedef int bus_size_t ;
typedef TYPE_1__* bus_dmamap_t ;
typedef TYPE_2__* bus_dma_tag_t ;
typedef int bus_dma_segment_t ;
struct TYPE_19__ {int flags; int maxsegsz; int alignment; } ;
struct TYPE_18__ {int bounce_flags; TYPE_6__ common; int * segments; } ;
struct TYPE_17__ {scalar_t__ pagesneeded; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (struct vm_page*) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*,scalar_t__,int,int *,int*) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*,struct vm_page**,int,int,int) ;
 int FUNC_5 (TYPE_2__*,TYPE_1__*,int) ;
 scalar_t__ FUNC_6 (TYPE_2__*,TYPE_1__*,int ,scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_7 (TYPE_6__*,scalar_t__) ;
 int FUNC_8 (TYPE_2__*,TYPE_1__*,struct vm_page**,int,int,int,int *,int*) ;
 TYPE_1__ VAR_5 ;
 int FUNC_9 (int,int) ;

__attribute__((used)) static int
FUNC_10(bus_dma_tag_t VAR_6, bus_dmamap_t VAR_7,
    struct vm_page **VAR_8, bus_size_t VAR_9, int VAR_10, int VAR_11,
    bus_dma_segment_t *VAR_12, int *VAR_13)
{
 vm_paddr_t VAR_14, VAR_15;
 int VAR_16, VAR_17;
 bus_size_t VAR_18, VAR_19;

 if (VAR_6->common.flags & VAR_1) {





  VAR_16 = FUNC_8(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10,
      VAR_11, VAR_12, VAR_13);
  return (VAR_16);
 }

 if (VAR_7 == ((void*)0))
  VAR_7 = &VAR_5;

 if (VAR_12 == ((void*)0))
  VAR_12 = VAR_6->segments;

 if ((VAR_6->bounce_flags & VAR_0) != 0) {
  FUNC_4(VAR_6, VAR_7, VAR_8, VAR_10, VAR_9, VAR_11);
  if (VAR_7->pagesneeded != 0) {
   VAR_16 = FUNC_5(VAR_6, VAR_7, VAR_11);
   if (VAR_16)
    return (VAR_16);
  }
 }

 VAR_17 = 0;
 while (VAR_9 > 0) {



  VAR_14 = FUNC_2(VAR_8[VAR_17]) + VAR_10;
  VAR_19 = FUNC_1(VAR_9, VAR_6->common.maxsegsz);
  VAR_18 = VAR_4 - VAR_10;
  if ((VAR_6->bounce_flags & VAR_0) != 0 &&
      VAR_7->pagesneeded != 0 &&
      FUNC_7(&VAR_6->common, VAR_14)) {
   VAR_18 = FUNC_9(VAR_18, VAR_6->common.alignment);
   VAR_18 = FUNC_1(VAR_18, VAR_19);
   FUNC_0((VAR_18 & (VAR_6->common.alignment - 1)) == 0,
       ("Segment size is not aligned"));




   if ((VAR_10 + VAR_18) > VAR_4)
    VAR_15 =
        FUNC_2(VAR_8[VAR_17 + 1]);
   else
    VAR_15 = 0;
   VAR_14 = FUNC_6(VAR_6, VAR_7, 0, VAR_14,
       VAR_15, VAR_18);
  } else {
   VAR_18 = FUNC_1(VAR_18, VAR_19);
  }
  VAR_18 = FUNC_3(VAR_6, VAR_7, VAR_14, VAR_18, VAR_12,
      VAR_13);
  if (VAR_18 == 0)
   break;
  FUNC_0(VAR_9 >= VAR_18,
      ("Segment length overruns original buffer"));
  VAR_9 -= VAR_18;
  if (((VAR_10 + VAR_18) & ~VAR_3) != 0)
   VAR_17++;
  VAR_10 = (VAR_10 + VAR_18) & VAR_3;
 }




 return (VAR_9 != 0 ? VAR_2 : 0);
}
