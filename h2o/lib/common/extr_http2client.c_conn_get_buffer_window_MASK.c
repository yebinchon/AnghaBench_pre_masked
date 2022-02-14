
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int window; TYPE_4__* buf; } ;
struct TYPE_8__ {TYPE_2__* ctx; int sock; } ;
struct st_h2o_http2client_conn_t {TYPE_5__ output; TYPE_3__ super; } ;
typedef size_t ssize_t ;
struct TYPE_9__ {size_t capacity; size_t size; } ;
struct TYPE_6__ {int latency_optimization; } ;
struct TYPE_7__ {TYPE_1__ http2; } ;


 size_t VAR_0 ;
 size_t FUNC_0 (int *) ;
 size_t FUNC_1 (int ,int *) ;

__attribute__((used)) static ssize_t FUNC_2(struct st_h2o_http2client_conn_t *VAR_1)
{
    ssize_t VAR_2, VAR_3;
    size_t VAR_4, VAR_5;

    VAR_4 = VAR_1->output.buf->capacity;
    if ((VAR_5 = FUNC_1(VAR_1->super.sock,
                                                                    &VAR_1->super.ctx->http2.latency_optimization)) < VAR_4) {
        VAR_4 = VAR_5;
        if (VAR_4 < VAR_1->output.buf->size)
            return 0;
    }

    VAR_2 = VAR_4 - VAR_1->output.buf->size;
    if (VAR_2 < VAR_0)
        return 0;
    VAR_2 -= VAR_0;
    VAR_3 = FUNC_0(&VAR_1->output.window);
    if (VAR_3 < VAR_2)
        VAR_2 = VAR_3;
    return VAR_2;
}
