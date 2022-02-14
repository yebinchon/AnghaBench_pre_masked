
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ eos; scalar_t__ data_off; int received; } ;
typedef TYPE_1__ quicly_recvstate_t ;


 int FUNC_0 (int *) ;

void FUNC_1(quicly_recvstate_t *VAR_0)
{
    FUNC_0(&VAR_0->received);
    VAR_0->data_off = 0;
    VAR_0->eos = 0;
}
