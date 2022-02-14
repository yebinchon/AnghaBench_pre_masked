
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ size_inflight; scalar_t__ final_size; int pending; int acked; } ;
typedef TYPE_1__ quicly_sendstate_t ;


 int FUNC_0 (int *) ;

void FUNC_1(quicly_sendstate_t *VAR_0)
{
    FUNC_0(&VAR_0->acked);
    FUNC_0(&VAR_0->pending);
    VAR_0->final_size = 0;
    VAR_0->size_inflight = 0;
}
