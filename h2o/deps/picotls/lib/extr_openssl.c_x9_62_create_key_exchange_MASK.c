
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct st_x9_62_keyex_context_t {int super; int * privkey; } ;
typedef int ptls_key_exchange_context_t ;
struct TYPE_4__ {scalar_t__ data; } ;
typedef TYPE_1__ ptls_key_exchange_algorithm_t ;
typedef int EC_GROUP ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int) ;
 int VAR_0 ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,struct st_x9_62_keyex_context_t**) ;
 int FUNC_4 (struct st_x9_62_keyex_context_t*) ;
 int FUNC_5 (struct st_x9_62_keyex_context_t*) ;

__attribute__((used)) static int FUNC_6(ptls_key_exchange_algorithm_t *VAR_1, ptls_key_exchange_context_t **VAR_2)
{
    EC_GROUP *VAR_3 = ((void*)0);
    struct st_x9_62_keyex_context_t *VAR_4 = ((void*)0);
    int VAR_5;


    if ((VAR_3 = FUNC_1((int)VAR_1->data)) == ((void*)0)) {
        VAR_5 = VAR_0;
        goto Exit;
    }
    if ((VAR_5 = FUNC_3(VAR_1, &VAR_4)) != 0)
        goto Exit;
    if ((VAR_4->privkey = FUNC_2(VAR_3)) == ((void*)0)) {
        VAR_5 = VAR_0;
        goto Exit;
    }
    if ((VAR_5 = FUNC_5(VAR_4)) != 0)
        goto Exit;
    VAR_5 = 0;

Exit:
    if (VAR_3 != ((void*)0))
        FUNC_0(VAR_3);
    if (VAR_5 == 0) {
        *VAR_2 = &VAR_4->super;
    } else {
        if (VAR_4 != ((void*)0))
            FUNC_4(VAR_4);
        *VAR_2 = ((void*)0);
    }

    return VAR_5;
}
