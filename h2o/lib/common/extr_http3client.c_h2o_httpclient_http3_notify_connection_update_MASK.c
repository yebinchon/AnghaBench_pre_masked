
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ cb; } ;
struct st_h2o_http3client_conn_t {TYPE_1__ timeout; } ;
typedef int h2o_http3_ctx_t ;
typedef int h2o_http3_conn_t ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;

void FUNC_2(h2o_http3_ctx_t *VAR_1, h2o_http3_conn_t *VAR_2)
{
    struct st_h2o_http3client_conn_t *VAR_3 = (void *)VAR_2;

    if (FUNC_0(&VAR_3->timeout) && VAR_3->timeout.cb == VAR_0)
        FUNC_1(&VAR_3->timeout);
}
