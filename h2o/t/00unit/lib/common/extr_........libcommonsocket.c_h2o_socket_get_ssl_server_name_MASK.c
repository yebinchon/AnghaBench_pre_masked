
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* ssl; } ;
typedef TYPE_2__ h2o_socket_t ;
struct TYPE_4__ {int * ossl; int * ptls; } ;


 char const* FUNC_0 (int *,int ) ;
 int VAR_0 ;
 char const* FUNC_1 (int *) ;

const char *FUNC_2(const h2o_socket_t *VAR_1)
{
    if (VAR_1->ssl != ((void*)0)) {





            if (VAR_1->ssl->ossl != ((void*)0)) {
            return FUNC_0(VAR_1->ssl->ossl, VAR_0);
        }
    }
    return ((void*)0);
}
