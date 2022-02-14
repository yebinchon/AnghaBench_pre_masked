
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_offset_t ;
struct bus_dmamap_dmar {int flags; } ;
struct TYPE_2__ {int maxsize; } ;
struct bus_dma_tag_dmar {TYPE_1__ common; } ;
typedef scalar_t__ bus_dmamap_t ;
typedef scalar_t__ bus_dma_tag_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (void*,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void
FUNC_4(bus_dma_tag_t VAR_3, void *VAR_4, bus_dmamap_t VAR_5)
{
 struct bus_dma_tag_dmar *VAR_6;
 struct bus_dmamap_dmar *VAR_7;

 VAR_6 = (struct bus_dma_tag_dmar *)VAR_3;
 VAR_7 = (struct bus_dmamap_dmar *)VAR_5;

 if ((VAR_7->flags & VAR_1) != 0) {
  FUNC_2(VAR_4, VAR_2);
  VAR_7->flags &= ~VAR_1;
 } else {
  FUNC_0((VAR_7->flags & VAR_0) != 0,
      ("dmar_bus_dmamem_free for non alloced map %p", VAR_7));
  FUNC_3((vm_offset_t)VAR_4, VAR_6->common.maxsize);
  VAR_7->flags &= ~VAR_0;
 }

 FUNC_1(VAR_3, VAR_5);
}
