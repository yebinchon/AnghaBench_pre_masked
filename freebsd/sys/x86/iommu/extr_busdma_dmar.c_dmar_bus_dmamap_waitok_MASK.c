
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct memdesc {int dummy; } ;
struct bus_dmamap_dmar {void* callback_arg; int * callback; struct bus_dma_tag_dmar* tag; struct memdesc mem; } ;
struct bus_dma_tag_dmar {int dummy; } ;
typedef int * bus_dmamap_t ;
typedef int bus_dmamap_callback_t ;
typedef scalar_t__ bus_dma_tag_t ;



__attribute__((used)) static void
FUNC_0(bus_dma_tag_t VAR_0, bus_dmamap_t VAR_1,
    struct memdesc *VAR_2, bus_dmamap_callback_t *VAR_3, void *VAR_4)
{
 struct bus_dmamap_dmar *VAR_5;

 if (VAR_1 == ((void*)0))
  return;
 VAR_5 = (struct bus_dmamap_dmar *)VAR_1;
 VAR_5->mem = *VAR_2;
 VAR_5->tag = (struct bus_dma_tag_dmar *)VAR_0;
 VAR_5->callback = VAR_3;
 VAR_5->callback_arg = VAR_4;
}
