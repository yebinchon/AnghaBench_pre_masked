
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_x9_62_keyex_context_t {int super; int * privkey; } ;
typedef int ptls_key_exchange_context_t ;
typedef int ptls_key_exchange_algorithm_t ;
typedef int EC_KEY ;


 int FUNC_0 (int *,struct st_x9_62_keyex_context_t**) ;
 int FUNC_1 (struct st_x9_62_keyex_context_t*) ;
 int FUNC_2 (struct st_x9_62_keyex_context_t*) ;

__attribute__((used)) static int FUNC_3(ptls_key_exchange_algorithm_t *VAR_0, ptls_key_exchange_context_t **VAR_1, EC_KEY *VAR_2)
{
    struct st_x9_62_keyex_context_t *VAR_3 = ((void*)0);
    int VAR_4;

    if ((VAR_4 = FUNC_0(VAR_0, &VAR_3)) != 0)
        goto Exit;
    VAR_3->privkey = VAR_2;
    if ((VAR_4 = FUNC_2(VAR_3)) != 0)
        goto Exit;
    VAR_4 = 0;

Exit:
    if (VAR_4 == 0) {
        *VAR_1 = &VAR_3->super;
    } else {
        if (VAR_3 != ((void*)0))
            FUNC_1(VAR_3);
        *VAR_1 = ((void*)0);
    }
    return VAR_4;
}
