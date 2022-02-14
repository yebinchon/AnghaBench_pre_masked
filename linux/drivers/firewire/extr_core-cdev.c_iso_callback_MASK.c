
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {size_t header_length; int header; int cycle; int closure; int type; } ;
struct iso_interrupt_event {TYPE_1__ interrupt; int event; } ;
struct fw_iso_context {int dummy; } ;
struct client {int iso_closure; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct iso_interrupt_event* FUNC_0 (int,int ) ;
 int FUNC_1 (int ,void*,size_t) ;
 int FUNC_2 (struct client*,int *,TYPE_1__*,int,int *,int ) ;

__attribute__((used)) static void FUNC_3(struct fw_iso_context *VAR_2, u32 VAR_3,
    size_t VAR_4, void *VAR_5, void *VAR_6)
{
 struct client *VAR_7 = VAR_6;
 struct iso_interrupt_event *VAR_8;

 VAR_8 = FUNC_0(sizeof(*VAR_8) + VAR_4, VAR_1);
 if (VAR_8 == ((void*)0))
  return;

 VAR_8->interrupt.type = VAR_0;
 VAR_8->interrupt.closure = VAR_7->iso_closure;
 VAR_8->interrupt.cycle = VAR_3;
 VAR_8->interrupt.header_length = VAR_4;
 FUNC_1(VAR_8->interrupt.header, VAR_5, VAR_4);
 FUNC_2(VAR_7, &VAR_8->event, &VAR_8->interrupt,
      sizeof(VAR_8->interrupt) + VAR_4, ((void*)0), 0);
}
