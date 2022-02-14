
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__** cipher_suites; TYPE_2__** key_exchanges; } ;
typedef TYPE_1__ ptls_esni_context_t ;
struct TYPE_6__ {int (* on_exchange ) (TYPE_2__**,int,int *,int ) ;} ;


 int FUNC_0 (TYPE_2__**) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_2__**,int,int *,int ) ;

void FUNC_3(ptls_esni_context_t *VAR_0)
{
    size_t VAR_1;

    if (VAR_0->key_exchanges != ((void*)0)) {
        for (VAR_1 = 0; VAR_0->key_exchanges[VAR_1] != ((void*)0); ++VAR_1)
            VAR_0->key_exchanges[VAR_1]->on_exchange(VAR_0->key_exchanges + VAR_1, 1, ((void*)0), FUNC_1(((void*)0), 0));
        FUNC_0(VAR_0->key_exchanges);
    }
    FUNC_0(VAR_0->cipher_suites);
}
