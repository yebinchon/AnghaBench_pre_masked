
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int khint_t ;
struct TYPE_5__ {int conns_accepting; } ;
typedef TYPE_1__ h2o_http3_ctx_t ;
struct TYPE_6__ {scalar_t__ _accept_hashkey; } ;
typedef TYPE_2__ h2o_http3_conn_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(h2o_http3_ctx_t *VAR_0, h2o_http3_conn_t *VAR_1)
{
    if (VAR_1->_accept_hashkey != 0) {
        khint_t VAR_2;
        if ((VAR_2 = FUNC_2(VAR_0->conns_accepting, VAR_1->_accept_hashkey)) != FUNC_1(VAR_0->conns_accepting))
            FUNC_0(VAR_0->conns_accepting, VAR_2);
        VAR_1->_accept_hashkey = 0;
    }
}
