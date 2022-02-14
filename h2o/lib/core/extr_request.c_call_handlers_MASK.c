
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {TYPE_4__* handler; TYPE_2__* pathconf; } ;
typedef TYPE_3__ h2o_req_t ;
struct TYPE_13__ {scalar_t__ (* on_req ) (TYPE_4__*,TYPE_3__*) ;} ;
typedef TYPE_4__ h2o_handler_t ;
struct TYPE_10__ {int size; TYPE_4__** entries; } ;
struct TYPE_11__ {TYPE_1__ handlers; } ;


 int FUNC_0 (TYPE_3__*,char*,char*,int ) ;
 scalar_t__ FUNC_1 (TYPE_4__*,TYPE_3__*) ;

__attribute__((used)) static void FUNC_2(h2o_req_t *VAR_0, h2o_handler_t **VAR_1)
{
    h2o_handler_t **VAR_2 = VAR_0->pathconf->handlers.entries + VAR_0->pathconf->handlers.size;

    for (; VAR_1 != VAR_2; ++VAR_1) {
        VAR_0->handler = *VAR_1;
        if ((*VAR_1)->on_req(*VAR_1, VAR_0) == 0)
            return;
    }

    FUNC_0(VAR_0, "File Not Found", "not found", 0);
}
