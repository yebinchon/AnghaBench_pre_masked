
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {size_t bytes_written; int (* cb ) (int *,size_t,int ) ;} ;
struct st_h2o_http3client_req_t {TYPE_3__* quic; int super; TYPE_2__ proceed_req; TYPE_1__* sendbuf; } ;
struct TYPE_9__ {struct st_h2o_http3client_req_t* data; } ;
typedef TYPE_4__ quicly_stream_t ;
struct TYPE_8__ {int sendstate; } ;
struct TYPE_6__ {size_t size; scalar_t__ bytes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,scalar_t__,size_t) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,size_t,int ) ;

__attribute__((used)) static int FUNC_3(quicly_stream_t *VAR_2, size_t VAR_3, void *VAR_4, size_t *VAR_5, int *VAR_6)
{
    struct st_h2o_http3client_req_t *VAR_7 = VAR_2->data;

    if (*VAR_5 >= VAR_7->sendbuf->size - VAR_3) {
        *VAR_5 = VAR_7->sendbuf->size - VAR_3;
        *VAR_6 = 1;
    } else {
        *VAR_6 = 0;
    }
    FUNC_0(VAR_4, VAR_7->sendbuf->bytes + VAR_3, *VAR_5);

    if (*VAR_6 && VAR_7->proceed_req.bytes_written != 0) {
        size_t VAR_8 = VAR_7->proceed_req.bytes_written;
        VAR_7->proceed_req.bytes_written = 0;
        VAR_7->proceed_req.cb(&VAR_7->super, VAR_8,
                            FUNC_1(&VAR_7->quic->sendstate) ? VAR_1 : VAR_0);
    }

    return 0;
}
