
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_11__ {int * cb; } ;
struct TYPE_12__ {scalar_t__ content_length; scalar_t__ req_body_bytes_received; TYPE_2__ write_req; int process_called; } ;
struct TYPE_10__ {int (* handle_input ) (struct st_h2o_http3_server_stream_t*,int const**,int const*,char const**) ;TYPE_9__* buf; } ;
struct st_h2o_http3_server_stream_t {int state; int read_blocked; int link; TYPE_4__* req_body; TYPE_3__ req; TYPE_6__* quic; TYPE_1__ recvbuf; } ;
struct TYPE_14__ {int req_streaming; int recv_body_blocked; int pending; } ;
struct st_h2o_http3_server_conn_t {TYPE_5__ delayed_streams; } ;
struct TYPE_16__ {size_t size; scalar_t__ bytes; } ;
struct TYPE_15__ {int recvstate; } ;
struct TYPE_13__ {scalar_t__ size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

 int VAR_5 ;


 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct st_h2o_http3_server_conn_t*) ;
 struct st_h2o_http3_server_conn_t* FUNC_2 (struct st_h2o_http3_server_stream_t*) ;
 int FUNC_3 (TYPE_9__**,size_t) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct st_h2o_http3_server_stream_t*,int const**,int const*,char const**) ;
 int FUNC_7 (struct st_h2o_http3_server_stream_t*,int const**,int const*,char const**) ;
 size_t FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (TYPE_6__*,int) ;
 scalar_t__ FUNC_11 (TYPE_6__*) ;
 int FUNC_12 (TYPE_6__*,size_t) ;
 int FUNC_13 (struct st_h2o_http3_server_conn_t*) ;
 int FUNC_14 (struct st_h2o_http3_server_stream_t*,int ) ;
 int FUNC_15 (struct st_h2o_http3_server_stream_t*,int const**,int const*,char const**) ;

__attribute__((used)) static int FUNC_16(struct st_h2o_http3_server_stream_t *VAR_9, const char **VAR_10)
{
    struct st_h2o_http3_server_conn_t *VAR_11 = FUNC_2(VAR_9);
    size_t VAR_12 = FUNC_8(&VAR_9->quic->recvstate);
    FUNC_0(VAR_12 <= VAR_9->recvbuf.buf->size);
    const uint8_t *VAR_13 = (const uint8_t *)VAR_9->recvbuf.buf->bytes, *VAR_14 = VAR_13 + VAR_12;
    int VAR_15 = 0;


    if (FUNC_11(VAR_9->quic)) {
        VAR_13 = VAR_14;
    } else {
        while (VAR_13 != VAR_14) {
            if ((VAR_15 = VAR_9->recvbuf.handle_input(VAR_9, &VAR_13, VAR_14, VAR_10)) != 0)
                break;
            if (FUNC_11(VAR_9->quic)) {
                VAR_13 = VAR_14;
                break;
            }
        }
    }
    if (!(VAR_15 == 0 || VAR_15 == VAR_1))
        return VAR_15;
    size_t VAR_16 = VAR_13 - (const uint8_t *)VAR_9->recvbuf.buf->bytes;
    FUNC_3(&VAR_9->recvbuf.buf, VAR_16);
    FUNC_12(VAR_9->quic, VAR_16);
    if (FUNC_11(VAR_9->quic))
        return 0;

    if (FUNC_9(&VAR_9->quic->recvstate)) {
        if (VAR_15 != 0) {

            FUNC_0(VAR_15 == VAR_1);
            FUNC_10(VAR_9->quic, VAR_0);
            FUNC_14(VAR_9, VAR_4);
        } else if (VAR_9->recvbuf.buf->size == 0 && (VAR_9->recvbuf.handle_input == FUNC_6 ||
                                                      VAR_9->recvbuf.handle_input == FUNC_7)) {

            if (VAR_9->req.content_length != VAR_8 && VAR_9->req.content_length != VAR_9->req.req_body_bytes_received) {
                FUNC_10(VAR_9->quic, VAR_9->req.req_body_bytes_received < VAR_9->req.content_length
                                                      ? VAR_1
                                                      : VAR_0);
                FUNC_14(VAR_9, VAR_4);
            } else {
                if (VAR_9->req.write_req.cb != ((void*)0)) {
                    if (!FUNC_5(&VAR_9->link))
                        FUNC_4(&VAR_11->delayed_streams.req_streaming, &VAR_9->link);
                    FUNC_13(VAR_11);
                } else if (!VAR_9->req.process_called && VAR_9->state < VAR_7) {

                    switch (VAR_9->state) {
                    case 128:
                    case 130:
                    case 129:
                        break;
                    default:
                        FUNC_0(!"unexpected state");
                        break;
                    }
                    FUNC_14(VAR_9, VAR_6);
                    FUNC_4(&VAR_11->delayed_streams.pending, &VAR_9->link);
                    FUNC_13(VAR_11);
                }
            }
        } else {
            FUNC_10(VAR_9->quic, VAR_2);
            FUNC_14(VAR_9, VAR_4);
        }
    } else {
        if (VAR_9->state == 130 && VAR_9->req_body != ((void*)0) &&
            VAR_9->req_body->size >= VAR_3) {

            VAR_9->read_blocked = 1;
            FUNC_4(&VAR_11->delayed_streams.recv_body_blocked, &VAR_9->link);
            FUNC_14(VAR_9, VAR_5);
            FUNC_1(VAR_11);
        } else if (VAR_9->req.write_req.cb != ((void*)0) && VAR_9->req_body->size != 0) {

            if (!FUNC_5(&VAR_9->link))
                FUNC_4(&VAR_11->delayed_streams.req_streaming, &VAR_9->link);
            FUNC_13(VAR_11);
        }
    }

    return 0;
}
