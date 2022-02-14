
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct rp_handler_t {int sockpool; int super; } ;
struct rp_handler_context_t {int * client_ctx; } ;
typedef int h2o_handler_t ;
struct TYPE_4__ {int loop; } ;
typedef TYPE_1__ h2o_context_t ;


 int FUNC_0 (int *) ;
 struct rp_handler_context_t* FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(h2o_handler_t *VAR_0, h2o_context_t *VAR_1)
{
    struct rp_handler_t *VAR_2 = (void *)VAR_0;
    struct rp_handler_context_t *VAR_3 = FUNC_1(VAR_1, &VAR_2->super);

    if (VAR_3->client_ctx != ((void*)0))
        FUNC_0(VAR_3->client_ctx);

    FUNC_2(VAR_2->sockpool, VAR_1->loop);
}
