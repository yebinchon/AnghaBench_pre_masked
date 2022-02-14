
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vm_paddr_t ;
typedef scalar_t__ vm_offset_t ;
typedef scalar_t__ pmap_t ;
typedef scalar_t__ bus_size_t ;
typedef TYPE_1__* bus_dmamap_t ;
typedef TYPE_2__* bus_dma_tag_t ;
typedef int bus_addr_t ;
struct TYPE_8__ {int alignment; int boundary; int lowaddr; } ;
struct TYPE_7__ {scalar_t__ pagesneeded; } ;


 int FUNC_0 (int ,char*,scalar_t__) ;
 int FUNC_1 (int ,char*,TYPE_1__*,scalar_t__) ;
 int FUNC_2 (int ,char*,int ,int ,int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (scalar_t__,int ) ;
 scalar_t__ FUNC_7 (TYPE_2__*,int ) ;

__attribute__((used)) static void
FUNC_8(bus_dma_tag_t VAR_5, bus_dmamap_t VAR_6, pmap_t VAR_7,
    void *VAR_8, bus_size_t VAR_9, int VAR_10)
{
        vm_offset_t VAR_11;
        vm_offset_t VAR_12;
        bus_addr_t VAR_13;

 if (VAR_6->pagesneeded == 0) {
  FUNC_2(VAR_0, "lowaddr= %d Maxmem= %d, boundary= %d, "
      "alignment= %d", VAR_5->lowaddr, FUNC_5((vm_paddr_t)VAR_1),
      VAR_5->boundary, VAR_5->alignment);
  FUNC_1(VAR_0, "map= %p, pagesneeded= %d", VAR_6, VAR_6->pagesneeded);




  VAR_11 = (vm_offset_t)VAR_8;
  VAR_12 = (vm_offset_t)VAR_8 + VAR_9;

  while (VAR_11 < VAR_12) {
   bus_size_t VAR_14;

   VAR_14 = VAR_3 - ((vm_offset_t)VAR_11 & VAR_2);
   if (VAR_7 == VAR_4)
    VAR_13 = FUNC_4(VAR_11);
   else
    VAR_13 = FUNC_3(VAR_7, VAR_11);
   if (FUNC_7(VAR_5, VAR_13) != 0) {
    VAR_14 = FUNC_6(VAR_14, VAR_5->alignment);
    VAR_6->pagesneeded++;
   }
   VAR_11 += VAR_14;
  }
  FUNC_0(VAR_0, "pagesneeded= %d\n", VAR_6->pagesneeded);
 }
}
