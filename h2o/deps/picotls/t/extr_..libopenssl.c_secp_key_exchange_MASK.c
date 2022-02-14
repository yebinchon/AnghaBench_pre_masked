
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ data; } ;
typedef TYPE_1__ ptls_key_exchange_algorithm_t ;
typedef int ptls_iovec_t ;
typedef int EC_GROUP ;
typedef int BN_CTX ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int *,int *,int *,int ,int *) ;

__attribute__((used)) static int FUNC_5(ptls_key_exchange_algorithm_t *VAR_2, ptls_iovec_t *VAR_3, ptls_iovec_t *VAR_4, ptls_iovec_t VAR_5)
{
    EC_GROUP *VAR_6 = ((void*)0);
    BN_CTX *VAR_7 = ((void*)0);
    int VAR_8;

    if ((VAR_6 = FUNC_3((int)VAR_2->data)) == ((void*)0)) {
        VAR_8 = VAR_0;
        goto Exit;
    }
    if ((VAR_7 = FUNC_1()) == ((void*)0)) {
        VAR_8 = VAR_1;
        goto Exit;
    }

    VAR_8 = FUNC_4(VAR_6, VAR_3, VAR_4, VAR_5, VAR_7);

Exit:
    if (VAR_7 != ((void*)0))
        FUNC_0(VAR_7);
    if (VAR_6 != ((void*)0))
        FUNC_2(VAR_6);
    return VAR_8;
}
