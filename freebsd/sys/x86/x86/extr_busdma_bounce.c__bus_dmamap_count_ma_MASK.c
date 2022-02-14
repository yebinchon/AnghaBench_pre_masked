
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ vm_paddr_t ;
struct vm_page {int dummy; } ;
typedef int bus_size_t ;
typedef TYPE_1__* bus_dmamap_t ;
typedef TYPE_2__* bus_dma_tag_t ;
struct TYPE_11__ {int alignment; int maxsegsz; int boundary; int lowaddr; } ;
struct TYPE_10__ {TYPE_4__ common; } ;
struct TYPE_9__ {scalar_t__ pagesneeded; } ;


 int FUNC_0 (int ,char*,scalar_t__) ;
 int FUNC_1 (int ,char*,TYPE_1__*,TYPE_1__*,scalar_t__) ;
 int FUNC_2 (int ,char*,int ,int ,int ,int) ;
 int FUNC_3 (int,char*) ;
 int VAR_0 ;
 int FUNC_4 (int,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (struct vm_page*) ;
 scalar_t__ FUNC_6 (TYPE_4__*,scalar_t__) ;
 TYPE_1__ VAR_4 ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int,int) ;

__attribute__((used)) static void
FUNC_9(bus_dma_tag_t VAR_5, bus_dmamap_t VAR_6, struct vm_page **VAR_7,
    int VAR_8, bus_size_t VAR_9, int VAR_10)
{
 bus_size_t VAR_11, VAR_12;
 int VAR_13;
 vm_paddr_t VAR_14;

 if (VAR_6 != &VAR_4 && VAR_6->pagesneeded == 0) {
  FUNC_2(VAR_0, "lowaddr= %d Maxmem= %d, boundary= %d, "
      "alignment= %d", VAR_5->common.lowaddr,
      FUNC_7((vm_paddr_t)VAR_1),
      VAR_5->common.boundary, VAR_5->common.alignment);
  FUNC_1(VAR_0, "map= %p, nobouncemap= %p, pagesneeded= %d",
      VAR_6, &VAR_4, VAR_6->pagesneeded);





  VAR_13 = 0;
  while (VAR_9 > 0) {
   VAR_14 = FUNC_5(VAR_7[VAR_13]) + VAR_8;
   VAR_11 = VAR_3 - VAR_8;
   VAR_12 = FUNC_4(VAR_9, VAR_5->common.maxsegsz);
   VAR_11 = FUNC_4(VAR_11, VAR_12);
   if (FUNC_6(&VAR_5->common, VAR_14) != 0) {
    VAR_11 = FUNC_8(VAR_11,
        VAR_5->common.alignment);
    VAR_11 = FUNC_4(VAR_11, VAR_12);
    FUNC_3((VAR_11 & (VAR_5->common.alignment - 1))
        == 0, ("Segment size is not aligned"));
    VAR_6->pagesneeded++;
   }
   if (((VAR_8 + VAR_11) & ~VAR_2) != 0)
    VAR_13++;
   VAR_8 = (VAR_8 + VAR_11) & VAR_2;
   FUNC_3(VAR_9 >= VAR_11,
       ("Segment length overruns original buffer"));
   VAR_9 -= VAR_11;
  }
  FUNC_0(VAR_0, "pagesneeded= %d\n", VAR_6->pagesneeded);
 }
}
