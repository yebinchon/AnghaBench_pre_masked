
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int completed; int closure; int type; } ;
struct iso_interrupt_mc_event {TYPE_1__ interrupt; int event; } ;
struct fw_iso_context {int dummy; } ;
struct client {int buffer; int iso_closure; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 struct iso_interrupt_mc_event* FUNC_1 (int,int ) ;
 int FUNC_2 (struct client*,int *,TYPE_1__*,int,int *,int ) ;

__attribute__((used)) static void FUNC_3(struct fw_iso_context *VAR_2,
       dma_addr_t VAR_3, void *VAR_4)
{
 struct client *VAR_5 = VAR_4;
 struct iso_interrupt_mc_event *VAR_6;

 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_1);
 if (VAR_6 == ((void*)0))
  return;

 VAR_6->interrupt.type = VAR_0;
 VAR_6->interrupt.closure = VAR_5->iso_closure;
 VAR_6->interrupt.completed = FUNC_0(&VAR_5->buffer,
            VAR_3);
 FUNC_2(VAR_5, &VAR_6->event, &VAR_6->interrupt,
      sizeof(VAR_6->interrupt), ((void*)0), 0);
}
