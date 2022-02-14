
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_3__ {scalar_t__ recovery_end; scalar_t__ cwnd; scalar_t__ ssthresh; scalar_t__ stash; } ;
typedef TYPE_1__ quicly_cc_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;

void FUNC_1(quicly_cc_t *VAR_1, uint32_t VAR_2, uint64_t VAR_3, uint32_t VAR_4)
{
    FUNC_0(VAR_4 >= VAR_2);

    if (VAR_3 < VAR_1->recovery_end)
        return;


    if (VAR_1->cwnd < VAR_1->ssthresh) {
        VAR_1->cwnd += VAR_2;
        return;
    }

    VAR_1->stash += VAR_2;
    if (VAR_1->stash < VAR_1->cwnd)
        return;

    uint32_t VAR_5 = VAR_1->stash / VAR_1->cwnd;
    VAR_1->stash -= VAR_5 * VAR_1->cwnd;
    VAR_1->cwnd += VAR_5 * VAR_0;
}
