
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {TYPE_1__* conn; int * handler; TYPE_3__* pathconf; } ;
typedef TYPE_4__ h2o_req_t ;
typedef int h2o_handler_t ;
struct TYPE_11__ {int size; int ** entries; } ;
struct TYPE_12__ {TYPE_2__ handlers; } ;
struct TYPE_10__ {int hosts; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__*,int **) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,int ) ;
 int FUNC_4 (TYPE_4__*) ;

void FUNC_5(h2o_req_t *VAR_0)
{
    FUNC_2(VAR_0);
    FUNC_4(VAR_0);

    if (VAR_0->handler != ((void*)0)) {
        h2o_handler_t **VAR_1 = VAR_0->pathconf->handlers.entries, **VAR_2 = VAR_1 + VAR_0->pathconf->handlers.size;
        for (;; ++VAR_1) {
            FUNC_0(VAR_1 != VAR_2);
            if (*VAR_1 == VAR_0->handler)
                break;
        }
        FUNC_1(VAR_0, VAR_1);
    } else {
        FUNC_3(VAR_0, VAR_0->conn->hosts);
    }
}
