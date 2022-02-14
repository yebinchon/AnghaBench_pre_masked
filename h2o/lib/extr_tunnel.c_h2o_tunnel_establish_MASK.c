
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_14__ {int timeout_entry; TYPE_4__* ctx; TYPE_3__** sock; int timeout; } ;
typedef TYPE_2__ h2o_tunnel_t ;
struct TYPE_15__ {TYPE_1__* input; TYPE_2__* data; } ;
typedef TYPE_3__ h2o_socket_t ;
struct TYPE_16__ {int loop; } ;
typedef TYPE_4__ h2o_context_t ;
struct TYPE_13__ {scalar_t__ size; } ;


 TYPE_2__* FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,int (*) (TYPE_3__*,int *)) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (TYPE_3__*,int *) ;
 int VAR_0 ;

h2o_tunnel_t *FUNC_5(h2o_context_t *VAR_1, h2o_socket_t *VAR_2, h2o_socket_t *VAR_3, uint64_t VAR_4)
{
    h2o_tunnel_t *VAR_5 = FUNC_0(sizeof(*VAR_5));
    VAR_5->ctx = VAR_1;
    VAR_5->timeout = VAR_4;
    VAR_5->sock[0] = VAR_2;
    VAR_5->sock[1] = VAR_3;
    VAR_2->data = VAR_5;
    VAR_3->data = VAR_5;
    FUNC_2(&VAR_5->timeout_entry, VAR_0);
    FUNC_3(VAR_5->ctx->loop, VAR_4, &VAR_5->timeout_entry);


    if (VAR_3->input->size)
        FUNC_4(VAR_3, ((void*)0));
    if (VAR_2->input->size)
        FUNC_4(VAR_2, ((void*)0));
    FUNC_1(VAR_3, FUNC_4);
    FUNC_1(VAR_2, FUNC_4);

    return VAR_5;
}
