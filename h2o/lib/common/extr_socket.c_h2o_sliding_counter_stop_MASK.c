
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_6__ {int sum; size_t index; scalar_t__* slots; } ;
struct TYPE_5__ {scalar_t__ start_at; } ;
struct TYPE_7__ {int average; TYPE_2__ prev; TYPE_1__ cur; } ;
typedef TYPE_3__ h2o_sliding_counter_t ;


 int FUNC_0 (int) ;

void FUNC_1(h2o_sliding_counter_t *VAR_0, uint64_t VAR_1)
{
    uint64_t VAR_2;

    FUNC_0(VAR_0->cur.start_at != 0);


    if (VAR_1 <= VAR_0->cur.start_at)
        VAR_2 = 0;
    else
        VAR_2 = VAR_1 - VAR_0->cur.start_at;
    VAR_0->cur.start_at = 0;


    VAR_0->prev.sum += VAR_2;
    VAR_0->prev.sum -= VAR_0->prev.slots[VAR_0->prev.index];
    VAR_0->prev.slots[VAR_0->prev.index] = VAR_2;
    if (++VAR_0->prev.index >= sizeof(VAR_0->prev.slots) / sizeof(VAR_0->prev.slots[0]))
        VAR_0->prev.index = 0;


    VAR_0->average = VAR_0->prev.sum / (sizeof(VAR_0->prev.slots) / sizeof(VAR_0->prev.slots[0]));
}
