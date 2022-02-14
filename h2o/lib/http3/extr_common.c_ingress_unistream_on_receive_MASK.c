
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct st_h2o_http3_ingress_unistream_t {int (* handle_input ) (int *,struct st_h2o_http3_ingress_unistream_t*,int const**,int const*,char const**) ;TYPE_2__* quic; TYPE_4__* recvbuf; } ;
struct TYPE_6__ {struct st_h2o_http3_ingress_unistream_t* data; int conn; } ;
typedef TYPE_1__ quicly_stream_t ;
typedef int h2o_http3_conn_t ;
struct TYPE_8__ {scalar_t__ bytes; } ;
struct TYPE_7__ {int recvstate; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__**,size_t) ;
 int FUNC_1 (TYPE_4__**,size_t,void const*,size_t) ;
 int ** FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*,size_t) ;
 int FUNC_6 (int *,struct st_h2o_http3_ingress_unistream_t*,int const**,int const*,char const**) ;

__attribute__((used)) static int FUNC_7(quicly_stream_t *VAR_1, size_t VAR_2, const void *VAR_3, size_t VAR_4)
{
    h2o_http3_conn_t *VAR_5 = *FUNC_2(VAR_1->conn);
    struct st_h2o_http3_ingress_unistream_t *VAR_6 = VAR_1->data;
    int VAR_7;


    if ((VAR_7 = FUNC_1(&VAR_6->recvbuf, VAR_2, VAR_3, VAR_4)) != 0)
        return VAR_7;


    if (FUNC_4(&VAR_6->quic->recvstate))
        return VAR_0;


    const uint8_t *VAR_8 = (const uint8_t *)VAR_6->recvbuf->bytes,
                  *VAR_9 = VAR_8 + FUNC_3(&VAR_6->quic->recvstate);
    if (VAR_8 == VAR_9)
        return 0;


    const char *VAR_10 = ((void*)0);
    VAR_7 = VAR_6->handle_input(VAR_5, VAR_6, &VAR_8, VAR_9, &VAR_10);


    size_t VAR_11 = VAR_8 - (const uint8_t *)VAR_6->recvbuf->bytes;
    if (VAR_11 != 0) {
        FUNC_0(&VAR_6->recvbuf, VAR_11);
        FUNC_5(VAR_6->quic, VAR_11);
    }

    return VAR_7;
}
