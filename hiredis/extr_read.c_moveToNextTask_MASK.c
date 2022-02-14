
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
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(redisReader *VAR_3) {
    redisReadTask *VAR_4, *VAR_5;
    while (VAR_3->ridx >= 0) {

        if (VAR_3->ridx == 0) {
            VAR_3->ridx--;
            return;
        }

        VAR_4 = &(VAR_3->rstack[VAR_3->ridx]);
        VAR_5 = &(VAR_3->rstack[VAR_3->ridx-1]);
        FUNC_0(VAR_5->type == VAR_0 ||
               VAR_5->type == VAR_1 ||
               VAR_5->type == VAR_2);
        if (VAR_4->idx == VAR_5->elements-1) {
            VAR_3->ridx--;
        } else {

            FUNC_0(VAR_4->idx < VAR_5->elements);
            VAR_4->type = -1;
            VAR_4->elements = -1;
            VAR_4->idx++;
            return;
        }
    }
}
