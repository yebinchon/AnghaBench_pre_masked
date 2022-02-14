
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_x9_62_keyex_context_t {int privkey; int bn_ctx; } ;
typedef int ptls_key_exchange_context_t ;
typedef int ptls_iovec_t ;
typedef int EC_POINT ;
typedef int EC_GROUP ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *,int const*,int ,int *) ;
 int * FUNC_3 (int const*,int ,int ) ;
 int FUNC_4 (struct st_x9_62_keyex_context_t*) ;

__attribute__((used)) static int FUNC_5(ptls_key_exchange_context_t **VAR_1, int VAR_2, ptls_iovec_t *VAR_3, ptls_iovec_t VAR_4)
{
    struct st_x9_62_keyex_context_t *VAR_5 = (struct st_x9_62_keyex_context_t *)*VAR_1;
    const EC_GROUP *VAR_6 = FUNC_0(VAR_5->privkey);
    EC_POINT *VAR_7 = ((void*)0);
    int VAR_8;

    if (VAR_3 == ((void*)0)) {
        VAR_8 = 0;
        goto Exit;
    }

    if ((VAR_7 = FUNC_3(VAR_6, VAR_4, VAR_5->bn_ctx)) == ((void*)0)) {
        VAR_8 = VAR_0;
        goto Exit;
    }
    if ((VAR_8 = FUNC_2(VAR_3, VAR_6, VAR_5->privkey, VAR_7)) != 0)
        goto Exit;

Exit:
    if (VAR_7 != ((void*)0))
        FUNC_1(VAR_7);
    if (VAR_2) {
        FUNC_4(VAR_5);
        *VAR_1 = ((void*)0);
    }
    return VAR_8;
}
