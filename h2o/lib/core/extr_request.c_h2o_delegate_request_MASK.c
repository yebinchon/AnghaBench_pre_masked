
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int * handler; TYPE_2__* pathconf; } ;
typedef TYPE_3__ h2o_req_t ;
typedef int h2o_handler_t ;
struct TYPE_6__ {int size; int ** entries; } ;
struct TYPE_7__ {TYPE_1__ handlers; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,int **) ;

void FUNC_2(h2o_req_t *VAR_0)
{
    h2o_handler_t **VAR_1 = VAR_0->pathconf->handlers.entries, **VAR_2 = VAR_1 + VAR_0->pathconf->handlers.size;
    for (;; ++VAR_1) {
        FUNC_0(VAR_1 != VAR_2);
        if (*VAR_1 == VAR_0->handler)
            break;
    }
    ++VAR_1;
    FUNC_1(VAR_0, VAR_1);
}
