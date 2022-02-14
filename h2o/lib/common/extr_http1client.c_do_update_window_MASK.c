
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {TYPE_3__* ctx; TYPE_2__** buf; } ;
struct st_h2o_http1client_t {int reader; TYPE_5__* sock; TYPE_4__ super; } ;
typedef int h2o_httpclient_t ;
struct TYPE_8__ {int read; } ;
struct TYPE_12__ {TYPE_1__ _cb; } ;
struct TYPE_10__ {scalar_t__ max_buffer_size; } ;
struct TYPE_9__ {scalar_t__ size; } ;


 scalar_t__ FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (TYPE_5__*,int ) ;
 int FUNC_2 (TYPE_5__*) ;

__attribute__((used)) static void FUNC_3(h2o_httpclient_t *VAR_0)
{
    struct st_h2o_http1client_t *VAR_1 = (void *)VAR_0;
    if ((*VAR_1->super.buf)->size >= VAR_1->super.ctx->max_buffer_size) {
        if (FUNC_0(VAR_1->sock)) {
            VAR_1->reader = VAR_1->sock->_cb.read;
            FUNC_2(VAR_1->sock);
        }
    } else {
        if (!FUNC_0(VAR_1->sock)) {
            FUNC_1(VAR_1->sock, VAR_1->reader);
        }
    }
}
