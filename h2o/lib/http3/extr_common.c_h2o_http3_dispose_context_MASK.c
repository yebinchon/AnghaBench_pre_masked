
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sock; } ;
struct TYPE_5__ {int conns_accepting; int conns_by_id; TYPE_1__ sock; int clients; } ;
typedef TYPE_2__ h2o_http3_ctx_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;

void FUNC_6(h2o_http3_ctx_t *VAR_0)
{
    FUNC_0(FUNC_5(VAR_0->conns_by_id) == 0);
    FUNC_0(FUNC_5(VAR_0->conns_accepting) == 0);
    FUNC_0(FUNC_1(&VAR_0->clients));

    FUNC_2(VAR_0->sock.sock);
    FUNC_4(VAR_0->conns_by_id);
    FUNC_3(VAR_0->conns_accepting);
}
