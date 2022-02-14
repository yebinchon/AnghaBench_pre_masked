
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_8__ {int num_ranges; TYPE_1__* ranges; } ;
struct TYPE_7__ {scalar_t__ eos; TYPE_5__ received; } ;
typedef TYPE_2__ quicly_recvstate_t ;
struct TYPE_6__ {scalar_t__ end; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_2__*) ;

int FUNC_3(quicly_recvstate_t *VAR_2, uint64_t VAR_3, uint64_t *VAR_4)
{
    FUNC_0(!FUNC_2(VAR_2));


    if (VAR_2->eos != VAR_1 && VAR_2->eos != VAR_3)
        return VAR_0;
    if (VAR_3 < VAR_2->received.ranges[VAR_2->received.num_ranges - 1].end)
        return VAR_0;


    *VAR_4 = VAR_3 - VAR_2->received.ranges[VAR_2->received.num_ranges - 1].end;


    FUNC_1(&VAR_2->received);

    return 0;
}
