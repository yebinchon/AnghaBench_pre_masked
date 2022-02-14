
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* ranges; } ;
struct TYPE_8__ {scalar_t__ final_size; TYPE_2__ acked; } ;
typedef TYPE_3__ quicly_sendstate_t ;
struct TYPE_6__ {int end; } ;


 int FUNC_0 (TYPE_3__*) ;

void FUNC_1(quicly_sendstate_t *VAR_0)
{
    FUNC_0(VAR_0);
    VAR_0->acked.ranges[0].end = 1;
    VAR_0->final_size = 0;
}
