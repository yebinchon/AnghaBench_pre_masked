
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int timeout_entry; } ;
struct TYPE_11__ {TYPE_3__* ctx; } ;
struct TYPE_13__ {scalar_t__ state; TYPE_5__ _write; TYPE_4__ super; TYPE_2__* sock; } ;
typedef TYPE_6__ h2o_http2_conn_t ;
struct TYPE_10__ {int loop; } ;
struct TYPE_8__ {int * write; } ;
struct TYPE_9__ {TYPE_1__ _cb; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int *) ;

__attribute__((used)) static void FUNC_3(h2o_http2_conn_t *VAR_1)
{
    FUNC_0(VAR_1->state < VAR_0);
    if (VAR_1->sock->_cb.write == ((void*)0) && !FUNC_1(&VAR_1->_write.timeout_entry)) {
        FUNC_2(VAR_1->super.ctx->loop, 0, &VAR_1->_write.timeout_entry);
    }
}
