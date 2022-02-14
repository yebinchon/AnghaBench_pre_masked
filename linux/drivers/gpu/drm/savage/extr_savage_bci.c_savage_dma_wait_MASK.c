
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_8__ {int* status_ptr; unsigned int event_wrap; int event_counter; scalar_t__ (* wait_evnt ) (TYPE_3__*,int) ;TYPE_2__* dma_pages; int fake_dma; int * cmd_dma; } ;
typedef TYPE_3__ drm_savage_private_t ;
struct TYPE_6__ {unsigned int wrap; int event; } ;
struct TYPE_7__ {TYPE_1__ age; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (TYPE_3__*,int) ;

void FUNC_4(drm_savage_private_t * VAR_1, unsigned int VAR_2)
{
 uint16_t VAR_3;
 unsigned int VAR_4;


 if (VAR_1->cmd_dma == &VAR_1->fake_dma)
  return;

 FUNC_2();
 if (VAR_1->status_ptr)
  VAR_3 = VAR_1->status_ptr[1] & 0xffff;
 else
  VAR_3 = FUNC_1(VAR_0) & 0xffff;
 VAR_4 = VAR_1->event_wrap;
 if (VAR_3 > VAR_1->event_counter)
  VAR_4--;

 if (VAR_1->dma_pages[VAR_2].age.wrap > VAR_4 ||
     (VAR_1->dma_pages[VAR_2].age.wrap == VAR_4 &&
      VAR_1->dma_pages[VAR_2].age.event > VAR_3)) {
  if (VAR_1->wait_evnt(VAR_1,
     VAR_1->dma_pages[VAR_2].age.event)
      < 0)
   FUNC_0("wait_evnt failed!\n");
 }
}
