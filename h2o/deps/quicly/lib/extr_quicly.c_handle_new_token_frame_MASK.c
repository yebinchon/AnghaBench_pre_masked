
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct st_quicly_handle_payload_state_t {int end; int src; } ;
struct TYPE_16__ {int len; int base; } ;
struct TYPE_13__ {TYPE_7__ token; } ;
typedef TYPE_3__ quicly_new_token_frame_t ;
struct TYPE_12__ {TYPE_1__* ctx; } ;
struct TYPE_14__ {TYPE_2__ super; } ;
typedef TYPE_4__ quicly_conn_t ;
struct TYPE_15__ {int (* cb ) (TYPE_5__*,TYPE_4__*,TYPE_7__) ;} ;
struct TYPE_11__ {TYPE_5__* save_resumption_token; } ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_4__*,int ,int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int ,TYPE_3__*) ;
 int FUNC_3 (TYPE_5__*,TYPE_4__*,TYPE_7__) ;

__attribute__((used)) static int FUNC_4(quicly_conn_t *VAR_1, struct st_quicly_handle_payload_state_t *VAR_2)
{
    quicly_new_token_frame_t VAR_3;
    int VAR_4;

    if ((VAR_4 = FUNC_2(&VAR_2->src, VAR_2->end, &VAR_3)) != 0)
        return VAR_4;
    FUNC_0(VAR_0, VAR_1, FUNC_1(), VAR_3.token.base, VAR_3.token.len);
    if (VAR_1->super.ctx->save_resumption_token == ((void*)0))
        return 0;
    return VAR_1->super.ctx->save_resumption_token->cb(VAR_1->super.ctx->save_resumption_token, VAR_1, VAR_3.token);
}
