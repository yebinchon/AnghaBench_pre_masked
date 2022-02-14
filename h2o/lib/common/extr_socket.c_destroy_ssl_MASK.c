
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int encrypted; } ;
struct TYPE_5__ {struct st_h2o_socket_ssl_t* base; } ;
struct TYPE_6__ {TYPE_1__ session_cache_key; struct st_h2o_socket_ssl_t* server_name; } ;
struct TYPE_7__ {TYPE_2__ client; } ;
struct st_h2o_socket_ssl_t {TYPE_4__ input; int * ossl; TYPE_3__ handshake; int * ptls; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct st_h2o_socket_ssl_t*) ;
 int FUNC_3 (struct st_h2o_socket_ssl_t*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct st_h2o_socket_ssl_t *VAR_0)
{
    if (VAR_0->ptls != ((void*)0)) {
        FUNC_5(VAR_0->ptls);
        VAR_0->ptls = ((void*)0);
    }
    if (VAR_0->ossl != ((void*)0)) {
        if (!FUNC_1(VAR_0->ossl)) {
            FUNC_3(VAR_0->handshake.client.server_name);
            FUNC_3(VAR_0->handshake.client.session_cache_key.base);
        }
        FUNC_0(VAR_0->ossl);
        VAR_0->ossl = ((void*)0);
    }
    FUNC_4(&VAR_0->input.encrypted);
    FUNC_2(VAR_0);
    FUNC_3(VAR_0);
}
