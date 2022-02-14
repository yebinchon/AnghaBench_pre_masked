
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * _ssl_ctx; } ;
typedef TYPE_1__ h2o_socketpool_t ;
typedef int SSL_CTX ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(h2o_socketpool_t *VAR_0, SSL_CTX *VAR_1)
{
    if (VAR_0->_ssl_ctx != ((void*)0))
        FUNC_0(VAR_0->_ssl_ctx);
    if (VAR_1 != ((void*)0))
        FUNC_1(VAR_1);
    VAR_0->_ssl_ctx = VAR_1;
}
