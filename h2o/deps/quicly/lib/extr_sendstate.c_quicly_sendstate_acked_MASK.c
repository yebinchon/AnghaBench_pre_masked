
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_14__ {TYPE_2__* ranges; } ;
struct TYPE_13__ {scalar_t__ num_ranges; TYPE_1__* ranges; } ;
struct TYPE_11__ {scalar_t__ final_size; TYPE_8__ acked; TYPE_7__ pending; } ;
typedef TYPE_3__ quicly_sendstate_t ;
struct TYPE_12__ {int end; int start; } ;
typedef TYPE_4__ quicly_sendstate_sent_t ;
struct TYPE_10__ {scalar_t__ end; } ;
struct TYPE_9__ {scalar_t__ start; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_8__*,int ,int ) ;
 int FUNC_2 (TYPE_7__*,int ,int ) ;

int FUNC_3(quicly_sendstate_t *VAR_0, quicly_sendstate_sent_t *VAR_1, int VAR_2, size_t *VAR_3)
{
    uint64_t VAR_4 = VAR_0->acked.ranges[0].end;
    int VAR_5;


    if ((VAR_5 = FUNC_1(&VAR_0->acked, VAR_1->start, VAR_1->end)) != 0)
        return VAR_5;
    if (!VAR_2) {
        if ((VAR_5 = FUNC_2(&VAR_0->pending, VAR_1->start, VAR_1->end)) != 0)
            return VAR_5;
    }
    FUNC_0(VAR_0->pending.num_ranges == 0 || VAR_0->acked.ranges[0].end <= VAR_0->pending.ranges[0].start);


    if (VAR_4 != VAR_0->acked.ranges[0].end) {
        uint64_t VAR_6 = VAR_0->acked.ranges[0].end;
        if (VAR_6 > VAR_0->final_size) {

            FUNC_0(VAR_6 == VAR_0->final_size + 1);
            --VAR_6;
        }
        *VAR_3 = VAR_6 - VAR_4;
    } else {
        *VAR_3 = 0;
    }

    return 0;
}
