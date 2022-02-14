
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_13__ {int buf; } ;
struct TYPE_12__ {TYPE_3__* ctx; } ;
struct TYPE_14__ {scalar_t__ state; TYPE_5__ _write; TYPE_4__ super; } ;
typedef TYPE_6__ h2o_http2_conn_t ;
struct TYPE_9__ {int * protocol_level_errors; } ;
struct TYPE_10__ {TYPE_1__ events; } ;
struct TYPE_11__ {TYPE_2__ http2; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (int *,int ,int) ;

__attribute__((used)) static void FUNC_3(h2o_http2_conn_t *VAR_1, uint32_t VAR_2, int VAR_3)
{
    FUNC_0(VAR_2 != 0);
    FUNC_0(VAR_1->state < VAR_0);

    VAR_1->super.ctx->http2.events.protocol_level_errors[-VAR_3]++;

    FUNC_2(&VAR_1->_write.buf, VAR_2, -VAR_3);
    FUNC_1(VAR_1);
}
