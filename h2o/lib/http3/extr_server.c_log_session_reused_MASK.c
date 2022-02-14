
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int quic; } ;
struct st_h2o_http3_server_conn_t {TYPE_1__ h3; } ;
typedef int ptls_t ;
struct TYPE_5__ {scalar_t__ conn; } ;
typedef TYPE_2__ h2o_req_t ;
typedef int h2o_iovec_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (int ) ;

__attribute__((used)) static h2o_iovec_t FUNC_4(h2o_req_t *VAR_0)
{
    struct st_h2o_http3_server_conn_t *VAR_1 = (struct st_h2o_http3_server_conn_t *)VAR_0->conn;
    ptls_t *VAR_2 = FUNC_3(VAR_1->h3.quic);
    return FUNC_2(VAR_2) ? FUNC_1(FUNC_0("1")) : FUNC_1(FUNC_0("0"));
}
