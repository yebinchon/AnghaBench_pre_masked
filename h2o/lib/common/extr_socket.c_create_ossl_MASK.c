
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* ssl; } ;
typedef TYPE_2__ h2o_socket_t ;
struct TYPE_6__ {int ossl; int ssl_ctx; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(h2o_socket_t *VAR_0)
{
    VAR_0->ssl->ossl = FUNC_0(VAR_0->ssl->ssl_ctx);

    FUNC_1(VAR_0->ssl->ossl, VAR_0);
    FUNC_2(VAR_0);
}
