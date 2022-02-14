
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_9__ {int num_ranges; TYPE_1__* ranges; } ;
struct TYPE_8__ {scalar_t__ eos; scalar_t__ data_off; TYPE_5__ received; } ;
typedef TYPE_2__ quicly_recvstate_t ;
struct TYPE_7__ {scalar_t__ end; scalar_t__ start; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_5__*,scalar_t__,scalar_t__) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_2__*) ;

int FUNC_4(quicly_recvstate_t *VAR_2, uint64_t VAR_3, size_t *VAR_4, int VAR_5)
{
    int VAR_6;

    FUNC_0(!FUNC_3(VAR_2));


    if (VAR_2->eos == VAR_1) {
        if (VAR_5) {
            VAR_2->eos = VAR_3 + *VAR_4;
            if (VAR_2->eos < VAR_2->received.ranges[VAR_2->received.num_ranges - 1].end)
                return VAR_0;
        }
    } else {
        if (VAR_3 + *VAR_4 > VAR_2->eos)
            return VAR_0;
    }


    if (VAR_3 + *VAR_4 <= VAR_2->data_off) {
        *VAR_4 = 0;
        if (VAR_2->received.ranges[0].end == VAR_2->eos)
            goto Complete;
        return 0;
    }


    if (VAR_3 < VAR_2->data_off) {
        size_t VAR_7 = VAR_2->data_off - VAR_3;
        VAR_3 += VAR_7;
        *VAR_4 -= VAR_7;
    }


    if (*VAR_4 != 0)
        if ((VAR_6 = FUNC_1(&VAR_2->received, VAR_3, VAR_3 + *VAR_4)) != 0)
            return VAR_6;
    if (VAR_2->received.num_ranges == 1 && VAR_2->received.ranges[0].start == 0 && VAR_2->received.ranges[0].end == VAR_2->eos)
        goto Complete;

    return 0;

Complete:
    FUNC_2(&VAR_2->received);
    return 0;
}
