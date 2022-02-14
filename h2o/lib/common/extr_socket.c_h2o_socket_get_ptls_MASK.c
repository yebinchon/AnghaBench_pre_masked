
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ptls_t ;
struct TYPE_5__ {TYPE_1__* ssl; } ;
typedef TYPE_2__ h2o_socket_t ;
struct TYPE_4__ {int * ptls; } ;



ptls_t *FUNC_0(h2o_socket_t *VAR_0)
{
    return VAR_0->ssl != ((void*)0) ? VAR_0->ssl->ptls : ((void*)0);
}
