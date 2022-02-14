
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_7__ {int * cb; } ;
struct TYPE_6__ {TYPE_1__* ctx; } ;
struct st_h2o_http1_conn_t {TYPE_3__ _timeout_entry; TYPE_2__ super; } ;
typedef int * h2o_timer_cb ;
struct TYPE_5__ {int loop; } ;


 int FUNC_0 (int ,int ,TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_2(struct st_h2o_http1_conn_t *VAR_0, uint64_t VAR_1, h2o_timer_cb VAR_2)
{
    if (VAR_0->_timeout_entry.cb != ((void*)0))
        FUNC_1(&VAR_0->_timeout_entry);
    VAR_0->_timeout_entry.cb = VAR_2;
    if (VAR_2 != ((void*)0))
        FUNC_0(VAR_0->super.ctx->loop, VAR_1, &VAR_0->_timeout_entry);
}
