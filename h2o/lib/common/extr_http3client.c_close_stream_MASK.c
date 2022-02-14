
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct st_h2o_http3client_req_t {TYPE_1__* quic; } ;
struct TYPE_3__ {int recvstate; int sendstate; } ;


 int FUNC_0 (struct st_h2o_http3client_req_t*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct st_h2o_http3client_req_t *VAR_0, int VAR_1)
{

    if (!FUNC_4(&VAR_0->quic->sendstate))
        FUNC_3(VAR_0->quic, VAR_1);
    if (!FUNC_1(&VAR_0->quic->recvstate))
        FUNC_2(VAR_0->quic, VAR_1);
    FUNC_0(VAR_0);
}
