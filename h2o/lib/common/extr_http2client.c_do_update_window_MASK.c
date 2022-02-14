
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int window; TYPE_2__* body; } ;
struct TYPE_4__ {int ctx; } ;
struct st_h2o_http2client_stream_t {TYPE_3__ input; int stream_id; int conn; TYPE_1__ super; } ;
typedef int h2o_httpclient_t ;
struct TYPE_5__ {size_t size; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int *,size_t) ;
 size_t FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(h2o_httpclient_t *VAR_0)
{
    struct st_h2o_http2client_stream_t *VAR_1 = (void *)VAR_0;
    size_t VAR_2 = FUNC_2(VAR_1->super.ctx);
    size_t VAR_3 = VAR_1->input.body->size;
    FUNC_0(VAR_3 <= VAR_2);
    FUNC_1(VAR_1->conn, VAR_1->stream_id, &VAR_1->input.window, VAR_2 - VAR_3);
}
