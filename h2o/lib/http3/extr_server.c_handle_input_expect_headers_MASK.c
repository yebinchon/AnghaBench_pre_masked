
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;


typedef int uint8_t ;
struct TYPE_16__ {int path; int authority; int scheme; int method; } ;
struct TYPE_22__ {scalar_t__ content_length; int headers; TYPE_3__ input; int pool; } ;
struct TYPE_14__ {int handle_input; } ;
struct st_h2o_http3_server_stream_t {TYPE_9__ req; TYPE_8__* quic; TYPE_1__ recvbuf; } ;
struct TYPE_19__ {TYPE_5__* ctx; } ;
struct TYPE_15__ {int dec; } ;
struct TYPE_13__ {TYPE_2__ qpack; } ;
struct st_h2o_http3_server_conn_t {TYPE_6__ super; TYPE_11__ h3; } ;
struct TYPE_20__ {int type; int length; int payload; } ;
typedef TYPE_7__ h2o_http3_read_frame_t ;
struct TYPE_21__ {int recvstate; int stream_id; } ;
struct TYPE_18__ {TYPE_4__* globalconf; } ;
struct TYPE_17__ {scalar_t__ max_request_entity_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 struct st_h2o_http3_server_conn_t* FUNC_0 (struct st_h2o_http3_server_stream_t*) ;
 int FUNC_1 (TYPE_7__*,int ,int ,int const**,int const*,char const**) ;
 int FUNC_2 (TYPE_11__*,int *,size_t) ;
 int FUNC_3 (int *,int ,int ,int *,int *,int *,int *,int *,int*,scalar_t__*,int *,int *,size_t*,int ,int ,char const**) ;
 int FUNC_4 (TYPE_9__*,char*,char const*,int ) ;
 int FUNC_5 (TYPE_9__*,char*,char*,int ) ;
 int VAR_9 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_8__*,int ) ;
 int FUNC_8 (struct st_h2o_http3_server_stream_t*,int ) ;

__attribute__((used)) static int FUNC_9(struct st_h2o_http3_server_stream_t *VAR_10, const uint8_t **VAR_11, const uint8_t *VAR_12,
                                       const char **VAR_13)
{
    struct st_h2o_http3_server_conn_t *VAR_14 = FUNC_0(VAR_10);
    h2o_http3_read_frame_t VAR_15;
    int VAR_16, VAR_17;
    uint8_t VAR_18[VAR_0];
    size_t VAR_19;


    if ((VAR_17 = FUNC_1(&VAR_15, 0, VAR_7, VAR_11, VAR_12, VAR_13)) != 0)
        return VAR_17;
    if (VAR_15.type != VAR_4) {
        switch (VAR_15.type) {
        case 128:
            return VAR_3;
        default:
            break;
        }
        return 0;
    }
    VAR_10->recvbuf.handle_input = VAR_9;


    if ((VAR_17 = FUNC_3(&VAR_10->req.pool, FUNC_0(VAR_10)->h3.qpack.dec, VAR_10->quic->stream_id,
                                       &VAR_10->req.input.method, &VAR_10->req.input.scheme, &VAR_10->req.input.authority,
                                       &VAR_10->req.input.path, &VAR_10->req.headers, &VAR_16,
                                       &VAR_10->req.content_length, ((void*)0) , VAR_18, &VAR_19,
                                       VAR_15.payload, VAR_15.length, VAR_13)) != 0) {

        if (VAR_17 == VAR_1) {
            if (!FUNC_6(&VAR_10->quic->recvstate))
                FUNC_7(VAR_10->quic, VAR_2);
            FUNC_4(&VAR_10->req, "Invalid Request", *VAR_13, 0);
            *VAR_13 = ((void*)0);
            return 0;
        }
    }
    if (VAR_19 != 0)
        FUNC_2(&VAR_14->h3, VAR_18, VAR_19);


    if (VAR_10->req.content_length != VAR_8 &&
        VAR_10->req.content_length > VAR_14->super.ctx->globalconf->max_request_entity_size) {
        if (!FUNC_6(&VAR_10->quic->recvstate))
            FUNC_7(VAR_10->quic, VAR_2);
        FUNC_8(VAR_10, VAR_6);
        FUNC_5(&VAR_10->req, "Request Entity Too Large", "request entity is too large", 0);
        return 0;
    }


    FUNC_8(VAR_10, VAR_5);

    return 0;
}
