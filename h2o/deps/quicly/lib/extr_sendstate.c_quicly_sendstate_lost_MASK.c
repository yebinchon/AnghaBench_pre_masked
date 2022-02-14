
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_14__ {TYPE_3__* ranges; } ;
struct TYPE_10__ {size_t num_ranges; TYPE_1__* ranges; } ;
struct TYPE_12__ {TYPE_8__ pending; TYPE_2__ acked; } ;
typedef TYPE_4__ quicly_sendstate_t ;
struct TYPE_13__ {scalar_t__ start; scalar_t__ end; } ;
typedef TYPE_5__ quicly_sendstate_sent_t ;
struct TYPE_11__ {scalar_t__ start; } ;
struct TYPE_9__ {scalar_t__ end; scalar_t__ start; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_8__*,scalar_t__,scalar_t__) ;

int FUNC_2(quicly_sendstate_t *VAR_0, quicly_sendstate_sent_t *VAR_1)
{
    uint64_t VAR_2 = VAR_1->start, VAR_3 = VAR_1->end;
    size_t VAR_4 = 0;
    int VAR_5;

    while (VAR_2 < VAR_3) {
        if (VAR_2 < VAR_0->acked.ranges[VAR_4].end)
            VAR_2 = VAR_0->acked.ranges[VAR_4].end;
        ++VAR_4;
        if (VAR_4 == VAR_0->acked.num_ranges || VAR_3 <= VAR_0->acked.ranges[VAR_4].start) {
            if (!(VAR_2 < VAR_3))
                return 0;
            return FUNC_1(&VAR_0->pending, VAR_2, VAR_3);
        }
        if (VAR_2 < VAR_0->acked.ranges[VAR_4].start) {
            if ((VAR_5 = FUNC_1(&VAR_0->pending, VAR_2, VAR_0->acked.ranges[VAR_4].start)) != 0)
                return VAR_5;
        }
    }

    FUNC_0(VAR_0->acked.ranges[0].end <= VAR_0->pending.ranges[0].start);
    return 0;
}
