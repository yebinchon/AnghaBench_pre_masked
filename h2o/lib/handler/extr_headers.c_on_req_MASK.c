
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct st_headers_early_hints_sender_t {int deferred_timeout_entry; int cmds; TYPE_3__* req; } ;
struct st_headers_early_hints_handler_t {int cmds; } ;
struct TYPE_7__ {TYPE_2__* conn; int pool; } ;
typedef TYPE_3__ h2o_req_t ;
typedef int h2o_handler_t ;
struct TYPE_6__ {TYPE_1__* ctx; } ;
struct TYPE_5__ {int loop; } ;


 struct st_headers_early_hints_sender_t* FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(h2o_handler_t *VAR_2, h2o_req_t *VAR_3)
{
    struct st_headers_early_hints_handler_t *VAR_4 = (void *)VAR_2;

    struct st_headers_early_hints_sender_t *VAR_5 = FUNC_0(&VAR_3->pool, sizeof(*VAR_5), VAR_1);
    VAR_5->req = VAR_3;
    VAR_5->cmds = VAR_4->cmds;
    FUNC_1(&VAR_5->deferred_timeout_entry, VAR_0);
    FUNC_2(VAR_3->conn->ctx->loop, 0, &VAR_5->deferred_timeout_entry);

    return -1;
}
