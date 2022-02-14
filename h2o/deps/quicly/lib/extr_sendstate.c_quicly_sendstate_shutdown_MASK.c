
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_8__ {int num_ranges; TYPE_1__* ranges; } ;
struct TYPE_7__ {scalar_t__ size_inflight; scalar_t__ final_size; TYPE_5__ pending; } ;
typedef TYPE_2__ quicly_sendstate_t ;
struct TYPE_6__ {scalar_t__ end; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_5__*,scalar_t__,scalar_t__) ;
 int FUNC_2 (TYPE_2__*) ;

int FUNC_3(quicly_sendstate_t *VAR_1, uint64_t VAR_2)
{
    int VAR_3;

    FUNC_0(FUNC_2(VAR_1));
    FUNC_0(VAR_1->size_inflight <= VAR_2);

    if (VAR_1->pending.num_ranges != 0 && VAR_1->pending.ranges[VAR_1->pending.num_ranges - 1].end == VAR_0) {
        VAR_1->pending.ranges[VAR_1->pending.num_ranges - 1].end = VAR_2 + 1;
    } else {
        if ((VAR_3 = FUNC_1(&VAR_1->pending, VAR_1->size_inflight, VAR_2 + 1)) != 0)
            return VAR_3;
    }

    VAR_1->final_size = VAR_2;
    return 0;
}
