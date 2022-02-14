
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int conns_accepting; int conns_by_id; } ;
typedef TYPE_1__ h2o_http3_ctx_t ;


 size_t FUNC_0 (int ) ;

size_t FUNC_1(h2o_http3_ctx_t *VAR_0)
{
    return FUNC_0(VAR_0->conns_by_id) + FUNC_0(VAR_0->conns_accepting);
}
