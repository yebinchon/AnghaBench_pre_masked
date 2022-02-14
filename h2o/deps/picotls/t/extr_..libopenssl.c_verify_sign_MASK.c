
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int len; int * base; } ;
typedef TYPE_1__ ptls_iovec_t ;
typedef int EVP_PKEY_CTX ;
typedef int EVP_PKEY ;
typedef int EVP_MD_CTX ;


 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int *,int **,int ,int *,int *) ;
 int FUNC_2 (int *,int *,int ) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_11(void *VAR_5, ptls_iovec_t VAR_6, ptls_iovec_t VAR_7)
{
    EVP_PKEY *VAR_8 = VAR_5;
    EVP_MD_CTX *VAR_9 = ((void*)0);
    EVP_PKEY_CTX *VAR_10 = ((void*)0);
    int VAR_11 = 0;

    if (VAR_6.base == ((void*)0))
        goto Exit;

    if ((VAR_9 = FUNC_3()) == ((void*)0)) {
        VAR_11 = VAR_3;
        goto Exit;
    }
    if (FUNC_1(VAR_9, &VAR_10, FUNC_10(), ((void*)0), VAR_8) != 1) {
        VAR_11 = VAR_2;
        goto Exit;
    }
    if (FUNC_9(VAR_8) == VAR_0) {
        if (FUNC_6(VAR_10, VAR_4) != 1) {
            VAR_11 = VAR_2;
            goto Exit;
        }
        if (FUNC_7(VAR_10, -1) != 1) {
            VAR_11 = VAR_2;
            goto Exit;
        }
        if (FUNC_5(VAR_10, FUNC_10()) != 1) {
            VAR_11 = VAR_2;
            goto Exit;
        }
    }
    if (FUNC_2(VAR_9, VAR_6.base, VAR_6.len) != 1) {
        VAR_11 = VAR_2;
        goto Exit;
    }
    if (FUNC_0(VAR_9, VAR_7.base, VAR_7.len) != 1) {
        VAR_11 = VAR_1;
        goto Exit;
    }
    VAR_11 = 0;

Exit:
    if (VAR_9 != ((void*)0))
        FUNC_4(VAR_9);
    FUNC_8(VAR_8);
    return VAR_11;
}
