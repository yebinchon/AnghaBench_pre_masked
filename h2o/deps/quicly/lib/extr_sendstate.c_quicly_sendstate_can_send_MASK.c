
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_6__ {scalar_t__ num_ranges; TYPE_1__* ranges; } ;
struct TYPE_7__ {scalar_t__ const size_inflight; scalar_t__ final_size; TYPE_2__ pending; } ;
typedef TYPE_3__ quicly_sendstate_t ;
struct TYPE_5__ {scalar_t__ start; } ;


 int FUNC_0 (int) ;

int FUNC_1(quicly_sendstate_t *VAR_0, const uint64_t *VAR_1)
{
    if (VAR_0->pending.num_ranges != 0) {


        uint64_t VAR_2 = VAR_1 != ((void*)0) ? *VAR_1 : VAR_0->size_inflight;
        if (VAR_0->pending.ranges[0].start < VAR_2)
            return 1;

        if (VAR_0->pending.ranges[0].start >= VAR_0->final_size) {
            FUNC_0(VAR_0->pending.ranges[0].start == VAR_0->final_size);
            return 1;
        }
    }

    return 0;
}
