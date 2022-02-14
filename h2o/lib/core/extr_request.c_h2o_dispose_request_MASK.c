
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int num_loggers; int pool; int * error_logs; TYPE_2__** loggers; int * pathconf; int _timeout_entry; } ;
typedef TYPE_1__ h2o_req_t ;
struct TYPE_8__ {int (* log_access ) (TYPE_2__*,TYPE_1__*) ;} ;
typedef TYPE_2__ h2o_logger_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int **) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*) ;

void FUNC_5(h2o_req_t *VAR_0)
{
    FUNC_0(VAR_0);

    FUNC_3(&VAR_0->_timeout_entry);

    if (VAR_0->pathconf != ((void*)0)) {
        h2o_logger_t **VAR_1 = VAR_0->loggers, **VAR_2 = VAR_1 + VAR_0->num_loggers;
        for (; VAR_1 != VAR_2; ++VAR_1) {
            (*VAR_1)->log_access((*VAR_1), VAR_0);
        }
    }

    if (VAR_0->error_logs != ((void*)0))
        FUNC_1(&VAR_0->error_logs);

    FUNC_2(&VAR_0->pool);
}
