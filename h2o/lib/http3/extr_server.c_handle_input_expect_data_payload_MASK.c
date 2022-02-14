
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {size_t bytes_left_in_data_frame; int handle_input; } ;
struct TYPE_5__ {size_t req_body_bytes_received; int entity; } ;
struct st_h2o_http3_server_stream_t {TYPE_2__ recvbuf; TYPE_1__ req; TYPE_3__* req_body; } ;
struct TYPE_7__ {int size; int bytes; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__**,int *) ;
 int FUNC_1 (TYPE_3__**,int const*,size_t) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(struct st_h2o_http3_server_stream_t *VAR_3, const uint8_t **VAR_4,
                                            const uint8_t *VAR_5, const char **VAR_6)
{
    size_t VAR_7 = VAR_5 - *VAR_4;


    if (VAR_7 > VAR_3->recvbuf.bytes_left_in_data_frame)
        VAR_7 = VAR_3->recvbuf.bytes_left_in_data_frame;
    if (VAR_3->req_body == ((void*)0))
        FUNC_0(&VAR_3->req_body, &VAR_1);
    if (!FUNC_1(&VAR_3->req_body, *VAR_4, VAR_7))
        return VAR_0;
    VAR_3->req.entity = FUNC_2(VAR_3->req_body->bytes, VAR_3->req_body->size);
    VAR_3->req.req_body_bytes_received += VAR_7;
    VAR_3->recvbuf.bytes_left_in_data_frame -= VAR_7;
    *VAR_4 += VAR_7;

    if (VAR_3->recvbuf.bytes_left_in_data_frame == 0)
        VAR_3->recvbuf.handle_input = VAR_2;

    return 0;
}
