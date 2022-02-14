
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_callback {scalar_t__ evcb_pri; } ;
struct event_base {scalar_t__ nactivequeues; } ;


 int FUNC_0 (struct event_callback*,int ,int) ;

void
FUNC_1(struct event_base *VAR_0,
    struct event_callback *VAR_1)
{
 FUNC_0(VAR_1, 0, sizeof(*VAR_1));
 VAR_1->evcb_pri = VAR_0->nactivequeues - 1;
}
