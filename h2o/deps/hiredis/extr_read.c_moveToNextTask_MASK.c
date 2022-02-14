
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t ridx; TYPE_2__* rstack; } ;
typedef TYPE_1__ redisReader ;
struct TYPE_5__ {scalar_t__ type; int idx; int elements; } ;
typedef TYPE_2__ redisReadTask ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(redisReader *VAR_1) {
    redisReadTask *VAR_2, *VAR_3;
    while (VAR_1->ridx >= 0) {

        if (VAR_1->ridx == 0) {
            VAR_1->ridx--;
            return;
        }

        VAR_2 = &(VAR_1->rstack[VAR_1->ridx]);
        VAR_3 = &(VAR_1->rstack[VAR_1->ridx-1]);
        FUNC_0(VAR_3->type == VAR_0);
        if (VAR_2->idx == VAR_3->elements-1) {
            VAR_1->ridx--;
        } else {

            FUNC_0(VAR_2->idx < VAR_3->elements);
            VAR_2->type = -1;
            VAR_2->elements = -1;
            VAR_2->idx++;
            return;
        }
    }
}
