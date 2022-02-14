
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {TYPE_2__* pathconf; int * error_logs; } ;
typedef TYPE_3__ h2o_req_t ;
struct TYPE_12__ {int len; int base; } ;
typedef TYPE_4__ h2o_iovec_t ;
struct TYPE_9__ {scalar_t__ emit_request_errors; } ;
struct TYPE_10__ {TYPE_1__ error_log; } ;


 int FUNC_0 (int **,int ,int ) ;
 int FUNC_1 (int **,int *) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_4__,TYPE_4__) ;

__attribute__((used)) static void FUNC_3(void *VAR_1, h2o_iovec_t VAR_2, h2o_iovec_t VAR_3)
{
    h2o_req_t *VAR_4 = (void *)VAR_1;
    if (VAR_4->error_logs == ((void*)0))
        FUNC_1(&VAR_4->error_logs, &VAR_0);
    FUNC_0(&VAR_4->error_logs, VAR_2.base, VAR_2.len);
    FUNC_0(&VAR_4->error_logs, VAR_3.base, VAR_3.len);

    if (VAR_4->pathconf->error_log.emit_request_errors) {
        FUNC_2(VAR_2, VAR_3);
    }
}
