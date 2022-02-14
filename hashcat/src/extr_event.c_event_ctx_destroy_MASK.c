
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* event_ctx; } ;
typedef TYPE_1__ hashcat_ctx_t ;
struct TYPE_5__ {int mux_event; } ;
typedef TYPE_2__ event_ctx_t ;


 int FUNC_0 (int ) ;

void FUNC_1 (hashcat_ctx_t *VAR_0)
{
  event_ctx_t *VAR_1 = VAR_0->event_ctx;

  FUNC_0 (VAR_1->mux_event);
}
