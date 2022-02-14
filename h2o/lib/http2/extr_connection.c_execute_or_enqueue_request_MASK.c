
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ state; int blocked_by_server; } ;
typedef TYPE_1__ h2o_http2_stream_t ;
typedef int h2o_http2_conn_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *,TYPE_1__*,int) ;
 int FUNC_3 (int *,TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_4 (int *,TYPE_1__*) ;

__attribute__((used)) static void FUNC_5(h2o_http2_conn_t *VAR_2, h2o_http2_stream_t *VAR_3)
{
    FUNC_0(VAR_3->state == VAR_0 || VAR_3->state == VAR_1);

    if (FUNC_4(VAR_2, VAR_3))
        return;

    FUNC_3(VAR_2, VAR_3, VAR_1);
    if (!VAR_3->blocked_by_server)
        FUNC_2(VAR_2, VAR_3, 1);
    FUNC_1(VAR_2, VAR_3);
}
