
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int prev; } ;
struct st_quicly_default_scheduler_state_t {TYPE_4__ blocked; TYPE_4__ active; } ;
struct TYPE_6__ {int default_scheduler; } ;
struct TYPE_7__ {TYPE_1__ pending_link; } ;
struct TYPE_8__ {TYPE_2__ _send_aux; int sendstate; } ;
typedef TYPE_3__ quicly_stream_t ;
typedef TYPE_4__ quicly_linklist_t ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static void FUNC_3(struct st_quicly_default_scheduler_state_t *VAR_0, quicly_stream_t *VAR_1, int VAR_2)
{
    if (!FUNC_1(&VAR_1->_send_aux.pending_link.default_scheduler)) {
        quicly_linklist_t *VAR_3 = &VAR_0->active;
        if (VAR_2 && !FUNC_2(&VAR_1->sendstate, ((void*)0)))
            VAR_3 = &VAR_0->blocked;
        FUNC_0(VAR_3->prev, &VAR_1->_send_aux.pending_link.default_scheduler);
    }
}
