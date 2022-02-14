
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* ssl; } ;
typedef TYPE_2__ h2o_socket_t ;
struct TYPE_4__ {int * ptls; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

int FUNC_2(h2o_socket_t *VAR_0)
{
    FUNC_0(VAR_0->ssl != ((void*)0));

    if (VAR_0->ssl->ptls != ((void*)0) && !FUNC_1(VAR_0->ssl->ptls))
        return 1;
    return 0;
}
