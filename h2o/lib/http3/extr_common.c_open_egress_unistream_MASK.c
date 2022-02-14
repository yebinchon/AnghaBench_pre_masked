
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct st_h2o_http3_egress_unistream_t {TYPE_1__* quic; int sendbuf; } ;
struct TYPE_8__ {struct st_h2o_http3_egress_unistream_t* data; } ;
typedef TYPE_1__ quicly_stream_t ;
struct TYPE_9__ {int len; int base; } ;
typedef TYPE_2__ h2o_iovec_t ;
struct TYPE_10__ {int quic; } ;
typedef TYPE_3__ h2o_http3_conn_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int ,TYPE_1__**,int) ;
 int FUNC_3 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_4(h2o_http3_conn_t *VAR_0, struct st_h2o_http3_egress_unistream_t **VAR_1, h2o_iovec_t VAR_2)
{
    quicly_stream_t *VAR_3;
    int VAR_4;

    if ((VAR_4 = FUNC_2(VAR_0->quic, &VAR_3, 1)) != 0)
        return VAR_4;
    *VAR_1 = VAR_3->data;
    FUNC_0((*VAR_1)->quic == VAR_3);

    FUNC_1(&(*VAR_1)->sendbuf, VAR_2.base, VAR_2.len);
    return FUNC_3((*VAR_1)->quic, 1);
}
