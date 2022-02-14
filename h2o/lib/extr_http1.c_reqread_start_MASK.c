
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {TYPE_3__* ctx; } ;
struct st_h2o_http1_conn_t {TYPE_6__* sock; TYPE_4__ super; } ;
struct TYPE_12__ {TYPE_5__* input; } ;
struct TYPE_11__ {scalar_t__ size; } ;
struct TYPE_9__ {TYPE_2__* globalconf; } ;
struct TYPE_7__ {int req_timeout; } ;
struct TYPE_8__ {TYPE_1__ http1; } ;


 int FUNC_0 (TYPE_6__*,int ) ;
 int FUNC_1 (struct st_h2o_http1_conn_t*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct st_h2o_http1_conn_t*,int ,int ) ;

__attribute__((used)) static inline void FUNC_3(struct st_h2o_http1_conn_t *VAR_2)
{
    FUNC_2(VAR_2, VAR_2->super.ctx->globalconf->http1.req_timeout, VAR_1);
    FUNC_0(VAR_2->sock, VAR_0);
    if (VAR_2->sock->input->size != 0)
        FUNC_1(VAR_2);
}
