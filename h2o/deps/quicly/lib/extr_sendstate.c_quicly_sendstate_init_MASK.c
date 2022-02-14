
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int final_size; scalar_t__ size_inflight; int pending; int acked; } ;
typedef TYPE_1__ quicly_sendstate_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ) ;

void FUNC_2(quicly_sendstate_t *VAR_1)
{
    FUNC_1(&VAR_1->acked, 0, 0);
    FUNC_0(&VAR_1->pending);
    VAR_1->size_inflight = 0;
    VAR_1->final_size = VAR_0;
}
