
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* event_ctx; } ;
typedef TYPE_1__ hashcat_ctx_t ;
struct TYPE_6__ {int mux_event; } ;
typedef TYPE_2__ event_ctx_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;

int FUNC_2 (hashcat_ctx_t *VAR_0)
{
  event_ctx_t *VAR_1 = VAR_0->event_ctx;

  FUNC_1 (VAR_1, 0, sizeof (event_ctx_t));

  FUNC_0 (VAR_1->mux_event);

  return 0;
}
