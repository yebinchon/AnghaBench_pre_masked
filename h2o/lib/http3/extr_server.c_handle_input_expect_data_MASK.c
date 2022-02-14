
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {scalar_t__ bytes_left_in_data_frame; int handle_input; } ;
struct TYPE_7__ {scalar_t__ content_length; scalar_t__ req_body_bytes_received; } ;
struct st_h2o_http3_server_stream_t {TYPE_2__ recvbuf; TYPE_4__* quic; TYPE_1__ req; } ;
struct TYPE_9__ {int type; scalar_t__ length; } ;
typedef TYPE_3__ h2o_http3_read_frame_t ;
struct TYPE_10__ {int sendstate; int recvstate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (TYPE_3__*,int ,int ,int const**,int const*,char const**) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (TYPE_4__*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct st_h2o_http3_server_stream_t*,int ) ;

int FUNC_6(struct st_h2o_http3_server_stream_t *VAR_8, const uint8_t **VAR_9, const uint8_t *VAR_10,
                             const char **VAR_11)
{
    h2o_http3_read_frame_t VAR_12;
    int VAR_13;


    if ((VAR_13 = FUNC_0(&VAR_12, 0, VAR_4, VAR_9, VAR_10, VAR_11)) != 0)
        return VAR_13;
    switch (VAR_12.type) {
    case 128:
        return VAR_1;
    case 129:
        VAR_8->recvbuf.handle_input = VAR_7;
        return 0;
    case 130:
        if (VAR_8->req.content_length != VAR_5 &&
            VAR_8->req.content_length - VAR_8->req.req_body_bytes_received < VAR_12.length) {
            if (!FUNC_1(&VAR_8->quic->recvstate))
                FUNC_2(VAR_8->quic, VAR_0);


            if (!FUNC_4(&VAR_8->quic->sendstate))
                FUNC_3(VAR_8->quic, VAR_2);
            FUNC_5(VAR_8, VAR_3);
            return 0;
        }
        break;
    default:
        return 0;
    }


    if (VAR_12.length != 0) {
        VAR_8->recvbuf.handle_input = VAR_6;
        VAR_8->recvbuf.bytes_left_in_data_frame = VAR_12.length;
    }

    return 0;
}
