
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int quic; } ;
struct st_h2o_http3_server_conn_t {TYPE_1__ h3; } ;
typedef int ptls_t ;
typedef int h2o_conn_t ;


 int * FUNC_0 (int ) ;

__attribute__((used)) static ptls_t *FUNC_1(h2o_conn_t *VAR_0)
{
    struct st_h2o_http3_server_conn_t *VAR_1 = (void *)VAR_0;
    return FUNC_0(VAR_1->h3.quic);
}
