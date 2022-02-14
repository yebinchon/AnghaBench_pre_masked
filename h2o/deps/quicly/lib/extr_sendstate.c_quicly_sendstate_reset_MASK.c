
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ final_size; scalar_t__ size_inflight; int pending; int acked; } ;
typedef TYPE_1__ quicly_sendstate_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,scalar_t__) ;
 int FUNC_2 (int *) ;

void FUNC_3(quicly_sendstate_t *VAR_1)
{
    int VAR_2;

    if (VAR_1->final_size == VAR_0)
        VAR_1->final_size = VAR_1->size_inflight;

    VAR_2 = FUNC_1(&VAR_1->acked, 0, VAR_1->final_size + 1);
    FUNC_0(VAR_2 == 0 && "guaranteed to succeed, because the numebr of ranges never increases");
    FUNC_2(&VAR_1->pending);
}
