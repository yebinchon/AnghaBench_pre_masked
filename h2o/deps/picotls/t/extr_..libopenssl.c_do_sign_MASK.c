
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int len; int base; } ;
typedef TYPE_1__ ptls_iovec_t ;
struct TYPE_7__ {int off; int * base; } ;
typedef TYPE_2__ ptls_buffer_t ;
typedef int EVP_PKEY_CTX ;
typedef int EVP_PKEY ;
typedef int EVP_MD_CTX ;
typedef int EVP_MD ;


 int FUNC_0 (int *,int *,size_t*) ;
 int FUNC_1 (int *,int **,int const*,int *,int *) ;
 int FUNC_2 (int *,int ,int ) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_10 (TYPE_2__*,size_t) ;

__attribute__((used)) static int FUNC_11(EVP_PKEY *VAR_4, ptls_buffer_t *VAR_5, ptls_iovec_t VAR_6, const EVP_MD *VAR_7)
{
    EVP_MD_CTX *VAR_8 = ((void*)0);
    EVP_PKEY_CTX *VAR_9;
    size_t VAR_10;
    int VAR_11;

    if ((VAR_8 = FUNC_3()) == ((void*)0)) {
        VAR_11 = VAR_2;
        goto Exit;
    }
    if (FUNC_1(VAR_8, &VAR_9, VAR_7, ((void*)0), VAR_4) != 1) {
        VAR_11 = VAR_1;
        goto Exit;
    }
    if (FUNC_8(VAR_4) == VAR_0) {
        if (FUNC_6(VAR_9, VAR_3) != 1) {
            VAR_11 = VAR_1;
            goto Exit;
        }
        if (FUNC_7(VAR_9, -1) != 1) {
            VAR_11 = VAR_1;
            goto Exit;
        }
        if (FUNC_5(VAR_9, FUNC_9()) != 1) {
            VAR_11 = VAR_1;
            goto Exit;
        }
    }
    if (FUNC_2(VAR_8, VAR_6.base, VAR_6.len) != 1) {
        VAR_11 = VAR_1;
        goto Exit;
    }
    if (FUNC_0(VAR_8, ((void*)0), &VAR_10) != 1) {
        VAR_11 = VAR_1;
        goto Exit;
    }
    if ((VAR_11 = FUNC_10(VAR_5, VAR_10)) != 0)
        goto Exit;
    if (FUNC_0(VAR_8, VAR_5->base + VAR_5->off, &VAR_10) != 1) {
        VAR_11 = VAR_1;
        goto Exit;
    }
    VAR_5->off += VAR_10;

    VAR_11 = 0;
Exit:
    if (VAR_8 != ((void*)0))
        FUNC_4(VAR_8);
    return VAR_11;
}
