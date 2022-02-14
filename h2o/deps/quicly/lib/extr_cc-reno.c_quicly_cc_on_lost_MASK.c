
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct TYPE_3__ {scalar_t__ recovery_end; int cwnd; int ssthresh; } ;
typedef TYPE_1__ quicly_cc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_0(quicly_cc_t *VAR_3, uint32_t VAR_4, uint64_t VAR_5, uint64_t VAR_6)
{

    if (VAR_5 < VAR_3->recovery_end)
        return;

    VAR_3->recovery_end = VAR_6;
    VAR_3->cwnd *= VAR_2;
    if (VAR_3->cwnd < VAR_1 * VAR_0)
        VAR_3->cwnd = VAR_1 * VAR_0;
    VAR_3->ssthresh = VAR_3->cwnd;
}
