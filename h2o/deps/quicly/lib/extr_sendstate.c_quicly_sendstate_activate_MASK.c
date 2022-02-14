
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_7__ {int num_ranges; TYPE_1__* ranges; } ;
struct TYPE_6__ {scalar_t__ final_size; int size_inflight; TYPE_4__ pending; } ;
typedef TYPE_2__ quicly_sendstate_t ;
struct TYPE_5__ {scalar_t__ end; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_4__*,int ,scalar_t__) ;

int FUNC_1(quicly_sendstate_t *VAR_1)
{
    uint64_t VAR_2 = VAR_1->final_size;


    if (VAR_2 != VAR_0)
        ++VAR_2;


    if (VAR_1->pending.num_ranges != 0 && VAR_1->pending.ranges[VAR_1->pending.num_ranges - 1].end == VAR_2)
        return 0;

    return FUNC_0(&VAR_1->pending, VAR_1->size_inflight, VAR_2);
}
