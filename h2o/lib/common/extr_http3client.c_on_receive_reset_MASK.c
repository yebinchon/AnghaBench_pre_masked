
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ bytes_contiguous; TYPE_2__* partial_frame; TYPE_1__* body; } ;
struct st_h2o_http3client_req_t {TYPE_3__ recvbuf; } ;
struct TYPE_9__ {struct st_h2o_http3client_req_t* data; } ;
typedef TYPE_4__ quicly_stream_t ;
struct TYPE_7__ {scalar_t__ size; } ;
struct TYPE_6__ {scalar_t__ size; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct st_h2o_http3client_req_t*,int ) ;
 int FUNC_2 (struct st_h2o_http3client_req_t*) ;
 int FUNC_3 (struct st_h2o_http3client_req_t*,int) ;

__attribute__((used)) static int FUNC_4(quicly_stream_t *VAR_1, int VAR_2)
{
    struct st_h2o_http3client_req_t *VAR_3 = VAR_1->data;

    FUNC_0(VAR_3->recvbuf.body->size + VAR_3->recvbuf.partial_frame->size == VAR_3->recvbuf.bytes_contiguous);

    FUNC_3(VAR_3, VAR_2);
    FUNC_1(VAR_3, VAR_0);
    FUNC_2(VAR_3);

    return 0;
}
