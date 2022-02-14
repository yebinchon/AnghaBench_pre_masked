
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ state; int sock; } ;
typedef TYPE_1__ h2o_http2_conn_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;

void FUNC_4(h2o_http2_conn_t *VAR_2)
{
    if (VAR_2->state == VAR_0)
        return;
    if (FUNC_1(VAR_2->sock) && FUNC_0(VAR_2) >= VAR_1)
        FUNC_2(VAR_2->sock);
    FUNC_3(VAR_2);
}
