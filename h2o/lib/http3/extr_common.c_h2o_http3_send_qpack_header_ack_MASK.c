
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct st_h2o_http3_egress_unistream_t {int quic; int sendbuf; } ;
struct TYPE_5__ {struct st_h2o_http3_egress_unistream_t* qpack_encoder; } ;
struct TYPE_6__ {TYPE_1__ egress; } ;
struct TYPE_7__ {TYPE_2__ _control_streams; } ;
typedef TYPE_3__ h2o_http3_conn_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,void const*,size_t) ;
 int FUNC_3 (int ,int) ;

void FUNC_4(h2o_http3_conn_t *VAR_0, const void *VAR_1, size_t VAR_2)
{
    struct st_h2o_http3_egress_unistream_t *VAR_3 = VAR_0->_control_streams.egress.qpack_encoder;

    FUNC_1(VAR_3 != ((void*)0));
    FUNC_2(&VAR_3->sendbuf, VAR_1, VAR_2);
    FUNC_0(FUNC_3(VAR_3->quic, 1));
}
