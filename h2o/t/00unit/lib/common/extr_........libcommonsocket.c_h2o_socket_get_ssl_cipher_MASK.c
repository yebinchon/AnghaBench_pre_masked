
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* aead; } ;
typedef TYPE_3__ ptls_cipher_suite_t ;
struct TYPE_10__ {TYPE_2__* ssl; } ;
typedef TYPE_4__ h2o_socket_t ;
struct TYPE_8__ {int * ossl; int * ptls; } ;
struct TYPE_7__ {char const* name; } ;


 char const* FUNC_0 (int *) ;
 TYPE_3__* FUNC_1 (int *) ;

const char *FUNC_2(h2o_socket_t *VAR_0)
{
    if (VAR_0->ssl != ((void*)0)) {
        if (VAR_0->ssl->ptls != ((void*)0)) {
            ptls_cipher_suite_t *VAR_1 = FUNC_1(VAR_0->ssl->ptls);
            if (VAR_1 != ((void*)0))
                return VAR_1->aead->name;
        } else if (VAR_0->ssl->ossl != ((void*)0)) {
            return FUNC_0(VAR_0->ssl->ossl);
        }
    }
    return ((void*)0);
}
