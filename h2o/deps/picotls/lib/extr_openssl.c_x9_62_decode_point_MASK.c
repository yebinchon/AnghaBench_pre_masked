
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; int base; } ;
typedef TYPE_1__ ptls_iovec_t ;
typedef int EC_POINT ;
typedef int EC_GROUP ;
typedef int BN_CTX ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int const*) ;
 int FUNC_2 (int const*,int *,int ,int ,int *) ;

__attribute__((used)) static EC_POINT *FUNC_3(const EC_GROUP *VAR_0, ptls_iovec_t VAR_1, BN_CTX *VAR_2)
{
    EC_POINT *VAR_3 = ((void*)0);

    if ((VAR_3 = FUNC_1(VAR_0)) == ((void*)0))
        return ((void*)0);
    if (!FUNC_2(VAR_0, VAR_3, VAR_1.base, VAR_1.len, VAR_2)) {
        FUNC_0(VAR_3);
        return ((void*)0);
    }

    return VAR_3;
}
