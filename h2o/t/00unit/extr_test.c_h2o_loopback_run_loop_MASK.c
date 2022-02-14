
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* ctx; } ;
struct TYPE_9__ {int * scheme; } ;
struct TYPE_11__ {int version; TYPE_3__ input; } ;
struct TYPE_10__ {TYPE_2__ super; int _is_complete; TYPE_5__ req; } ;
typedef TYPE_4__ h2o_loopback_conn_t ;
struct TYPE_7__ {int loop; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (int ,int ) ;

void FUNC_3(h2o_loopback_conn_t *VAR_3)
{
    if (VAR_3->req.input.scheme == ((void*)0))
        VAR_3->req.input.scheme = &VAR_0;
    if (VAR_3->req.version == 0)
        VAR_3->req.version = 0x100;

    FUNC_1(&VAR_3->req);

    while (!VAR_3->_is_complete) {



        FUNC_0(VAR_3->super.ctx->loop, VAR_1);

    }
}
