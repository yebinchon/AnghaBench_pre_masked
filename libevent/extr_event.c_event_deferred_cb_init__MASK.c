
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int evcb_selfcb; } ;
struct event_callback {int evcb_closure; int evcb_pri; void* evcb_arg; TYPE_1__ evcb_cb_union; } ;
typedef int ev_uint8_t ;
typedef int deferred_cb_fn ;


 int VAR_0 ;
 int FUNC_0 (struct event_callback*,int ,int) ;

void
FUNC_1(struct event_callback *VAR_1, ev_uint8_t VAR_2, deferred_cb_fn VAR_3, void *VAR_4)
{
 FUNC_0(VAR_1, 0, sizeof(*VAR_1));
 VAR_1->evcb_cb_union.evcb_selfcb = VAR_3;
 VAR_1->evcb_arg = VAR_4;
 VAR_1->evcb_pri = VAR_2;
 VAR_1->evcb_closure = VAR_0;
}
