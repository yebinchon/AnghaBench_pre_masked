
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {TYPE_2__* ssl; } ;
typedef TYPE_5__ h2o_socket_t ;
typedef int h2o_iovec_t ;
struct TYPE_10__ {scalar_t__ state; } ;
struct TYPE_9__ {TYPE_4__ async_resumption; } ;
struct TYPE_7__ {TYPE_3__ server; } ;
struct TYPE_8__ {int * ossl; TYPE_1__ handshake; int * ptls; } ;
typedef int SSL_SESSION ;


 scalar_t__ VAR_0 ;
 unsigned char* FUNC_0 (int *,unsigned int*) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (unsigned char const*,unsigned int) ;

h2o_iovec_t FUNC_3(h2o_socket_t *VAR_1)
{
    if (VAR_1->ssl != ((void*)0)) {
        if (VAR_1->ssl->ptls != ((void*)0)) {

        } else if (VAR_1->ssl->ossl != ((void*)0)) {
            SSL_SESSION *VAR_2;
            if (VAR_1->ssl->handshake.server.async_resumption.state == VAR_0 &&
                (VAR_2 = FUNC_1(VAR_1->ssl->ossl)) != ((void*)0)) {
                unsigned VAR_3;
                const unsigned char *VAR_4 = FUNC_0(VAR_2, &VAR_3);
                return FUNC_2(VAR_4, VAR_3);
            }
        }
    }

    return FUNC_2(((void*)0), 0);
}
