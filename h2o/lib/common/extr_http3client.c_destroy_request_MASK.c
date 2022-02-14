
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int _timeout; } ;
struct TYPE_4__ {int noncontiguous; int partial_frame; int body; } ;
struct st_h2o_http3client_req_t {int link; TYPE_1__ super; TYPE_2__ recvbuf; int sendbuf; int * quic; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct st_h2o_http3client_req_t*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct st_h2o_http3client_req_t *VAR_0)
{
    FUNC_0(VAR_0->quic == ((void*)0));
    FUNC_2(&VAR_0->sendbuf);
    FUNC_2(&VAR_0->recvbuf.body);
    FUNC_2(&VAR_0->recvbuf.partial_frame);
    FUNC_2(&VAR_0->recvbuf.noncontiguous);
    if (FUNC_5(&VAR_0->super._timeout))
        FUNC_6(&VAR_0->super._timeout);
    if (FUNC_3(&VAR_0->link))
        FUNC_4(&VAR_0->link);
    FUNC_1(VAR_0);
}
