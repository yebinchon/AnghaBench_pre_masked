
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int window; TYPE_7__* buf; } ;
struct TYPE_8__ {scalar_t__ done; int * proceed_req; } ;
struct st_h2o_http2client_stream_t {TYPE_4__ output; TYPE_3__* conn; int stream_id; TYPE_1__ streaming; } ;
struct TYPE_14__ {size_t size; int bytes; } ;
struct TYPE_13__ {int size; } ;
struct TYPE_12__ {char* base; } ;
struct TYPE_9__ {int window; TYPE_6__* buf; } ;
struct TYPE_10__ {TYPE_2__ output; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (struct st_h2o_http2client_stream_t*) ;
 int FUNC_1 (TYPE_7__**,size_t) ;
 TYPE_5__ FUNC_2 (TYPE_6__**,int) ;
 int FUNC_3 (void*,size_t,int ,int ,int ) ;
 int FUNC_4 (int *,size_t) ;
 int FUNC_5 (char*,int ,size_t) ;
 size_t FUNC_6 (size_t,size_t) ;

__attribute__((used)) static size_t FUNC_7(struct st_h2o_http2client_stream_t *VAR_3)
{
    size_t VAR_4 = FUNC_0(VAR_3);
    size_t VAR_5 = FUNC_6(VAR_4, VAR_3->output.buf->size);
    if (VAR_5 == 0)
        return 0;
    char *VAR_6 = FUNC_2(&VAR_3->conn->output.buf, VAR_1 + VAR_5).base;
    int VAR_7 = (VAR_3->streaming.proceed_req == ((void*)0) || VAR_3->streaming.done) && VAR_5 == VAR_3->output.buf->size;
    FUNC_3((void *)VAR_6, VAR_3->output.buf->size, VAR_2,
                                  VAR_7 ? VAR_0 : 0, VAR_3->stream_id);
    FUNC_5(VAR_6 + VAR_1, VAR_3->output.buf->bytes, VAR_5);
    VAR_3->conn->output.buf->size += VAR_1 + VAR_5;
    FUNC_1(&VAR_3->output.buf, VAR_5);

    FUNC_4(&VAR_3->conn->output.window, VAR_5);
    FUNC_4(&VAR_3->output.window, VAR_5);

    return VAR_5;
}
