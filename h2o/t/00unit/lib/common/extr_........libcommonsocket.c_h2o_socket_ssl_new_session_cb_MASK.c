
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {TYPE_3__* ssl; } ;
typedef TYPE_4__ h2o_socket_t ;
struct TYPE_6__ {int session_cache_key_hash; int session_cache_key; int * session_cache; } ;
struct TYPE_7__ {TYPE_1__ client; } ;
struct TYPE_8__ {TYPE_2__ handshake; } ;
typedef int SSL_SESSION ;
typedef int SSL ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int ,int ,int ) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_4__*) ;

int FUNC_8(SSL *VAR_0, SSL_SESSION *VAR_1)
{
    h2o_socket_t *VAR_2 = (h2o_socket_t *)FUNC_1(VAR_0);
    FUNC_3(VAR_2 != ((void*)0));
    FUNC_3(VAR_2->ssl != ((void*)0));

    if (!FUNC_2(VAR_0) && VAR_2->ssl->handshake.client.session_cache != ((void*)0)



    ) {
        FUNC_4(VAR_2->ssl->handshake.client.session_cache, FUNC_6(FUNC_7(VAR_2)),
                      VAR_2->ssl->handshake.client.session_cache_key, VAR_2->ssl->handshake.client.session_cache_key_hash,
                      FUNC_5(VAR_1, 1));
        return 1;
    }

    return 0;
}
