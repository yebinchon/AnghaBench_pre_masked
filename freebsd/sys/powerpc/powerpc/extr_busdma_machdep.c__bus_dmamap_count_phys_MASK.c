
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vm_paddr_t ;
typedef scalar_t__ bus_size_t ;
typedef TYPE_1__* bus_dmamap_t ;
typedef TYPE_2__* bus_dma_tag_t ;
typedef int bus_addr_t ;
struct TYPE_8__ {scalar_t__ maxsegsz; int alignment; int boundary; int lowaddr; } ;
struct TYPE_7__ {scalar_t__ pagesneeded; } ;


 int FUNC_0 (int ,char*,scalar_t__) ;
 int FUNC_1 (int ,char*,TYPE_1__*,scalar_t__) ;
 int FUNC_2 (int ,char*,int ,int ,int ,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int) ;

__attribute__((used)) static void
FUNC_6(bus_dma_tag_t VAR_4, bus_dmamap_t VAR_5, vm_paddr_t VAR_6,
    bus_size_t VAR_7, int VAR_8)
{
 bus_addr_t VAR_9;
 bus_size_t VAR_10;

 if (VAR_5->pagesneeded == 0) {
  FUNC_2(VAR_0, "lowaddr= %d Maxmem= %d, boundary= %d, "
      "alignment= %d", VAR_4->lowaddr, FUNC_4((vm_paddr_t)VAR_1),
      VAR_4->boundary, VAR_4->alignment);
  FUNC_1(VAR_0, "map= %p, pagesneeded= %d", VAR_5, VAR_5->pagesneeded);




  VAR_9 = VAR_6;
  while (VAR_7 != 0) {
   VAR_10 = FUNC_3(VAR_7, VAR_4->maxsegsz);
   if (FUNC_5(VAR_4, VAR_9) != 0) {
    VAR_10 = FUNC_3(VAR_10,
        VAR_3 - (VAR_9 & VAR_2));
    VAR_5->pagesneeded++;
   }
   VAR_9 += VAR_10;
   VAR_7 -= VAR_10;
  }
  FUNC_0(VAR_0, "pagesneeded= %d\n", VAR_5->pagesneeded);
 }
}
