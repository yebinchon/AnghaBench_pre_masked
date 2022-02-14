
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct st_h2o_http3_egress_unistream_t {int quic; TYPE_8__* sendbuf; } ;
typedef int quicly_stream_id_t ;
struct TYPE_12__ {int * base; } ;
typedef TYPE_4__ h2o_iovec_t ;
struct TYPE_9__ {int dec; } ;
struct TYPE_10__ {struct st_h2o_http3_egress_unistream_t* qpack_decoder; } ;
struct TYPE_11__ {TYPE_2__ egress; } ;
struct TYPE_13__ {TYPE_1__ qpack; TYPE_3__ _control_streams; } ;
typedef TYPE_5__ h2o_http3_conn_t ;
struct TYPE_14__ {scalar_t__ size; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 TYPE_4__ FUNC_2 (TYPE_8__**,scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int *,int ) ;
 scalar_t__ FUNC_4 (int ,int) ;

void FUNC_5(h2o_http3_conn_t *VAR_1, quicly_stream_id_t VAR_2)
{
    struct st_h2o_http3_egress_unistream_t *VAR_3 = VAR_1->_control_streams.egress.qpack_decoder;


    h2o_iovec_t VAR_4 = FUNC_2(&VAR_3->sendbuf, VAR_3->sendbuf->size + VAR_0);
    FUNC_1(VAR_4.base != ((void*)0));
    VAR_3->sendbuf->size += FUNC_3(VAR_1->qpack.dec, (uint8_t *)VAR_4.base, VAR_2);


    FUNC_0(FUNC_4(VAR_3->quic, 1) == 0);
}
