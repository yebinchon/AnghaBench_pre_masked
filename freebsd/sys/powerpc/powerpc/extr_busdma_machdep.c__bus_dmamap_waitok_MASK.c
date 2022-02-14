
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct memdesc {int dummy; } ;
typedef TYPE_1__* bus_dmamap_t ;
typedef int bus_dmamap_callback_t ;
typedef TYPE_2__* bus_dma_tag_t ;
struct TYPE_6__ {int flags; } ;
struct TYPE_5__ {void* callback_arg; int * callback; struct memdesc mem; TYPE_2__* dmat; } ;


 int VAR_0 ;

void
FUNC_0(bus_dma_tag_t VAR_1, bus_dmamap_t VAR_2,
      struct memdesc *VAR_3, bus_dmamap_callback_t *VAR_4,
      void *VAR_5)
{

 if (VAR_1->flags & VAR_0) {
  VAR_2->dmat = VAR_1;
  VAR_2->mem = *VAR_3;
  VAR_2->callback = VAR_4;
  VAR_2->callback_arg = VAR_5;
 }
}
