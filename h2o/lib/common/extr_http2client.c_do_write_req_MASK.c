
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int sending_link; int * buf; } ;
struct TYPE_7__ {int done; int * proceed_req; } ;
struct st_h2o_http2client_stream_t {TYPE_5__* conn; TYPE_3__ output; TYPE_1__ streaming; } ;
struct TYPE_10__ {int len; int base; } ;
typedef TYPE_4__ h2o_iovec_t ;
typedef int h2o_httpclient_t ;
struct TYPE_8__ {int sending_streams; } ;
struct TYPE_11__ {TYPE_2__ output; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int **,int ,int ) ;
 int FUNC_2 (int **,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int FUNC_5 (TYPE_5__*) ;

__attribute__((used)) static int FUNC_6(h2o_httpclient_t *VAR_1, h2o_iovec_t VAR_2, int VAR_3)
{
    struct st_h2o_http2client_stream_t *VAR_4 = (void *)VAR_1;
    FUNC_0(VAR_4->streaming.proceed_req != ((void*)0));

    if (VAR_3)
        VAR_4->streaming.done = 1;

    if (VAR_4->output.buf == ((void*)0)) {
        FUNC_2(&VAR_4->output.buf, &VAR_0);
    }

    if (VAR_2.len != 0) {
        FUNC_1(&VAR_4->output.buf, VAR_2.base, VAR_2.len);
    }

    if (!FUNC_4(&VAR_4->output.sending_link)) {
        FUNC_3(&VAR_4->conn->output.sending_streams, &VAR_4->output.sending_link);
        FUNC_5(VAR_4->conn);
    }

    return 0;
}
