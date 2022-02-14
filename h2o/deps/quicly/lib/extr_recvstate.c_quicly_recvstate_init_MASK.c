
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int eos; scalar_t__ data_off; int received; } ;
typedef TYPE_1__ quicly_recvstate_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;

void FUNC_1(quicly_recvstate_t *VAR_1)
{
    FUNC_0(&VAR_1->received, 0, 0);
    VAR_1->data_off = 0;
    VAR_1->eos = VAR_0;
}
