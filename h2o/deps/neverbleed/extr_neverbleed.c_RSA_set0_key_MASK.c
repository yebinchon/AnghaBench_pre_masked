
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * d; int * e; int * n; } ;
typedef TYPE_1__ RSA ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(RSA *VAR_0, BIGNUM *VAR_1, BIGNUM *VAR_2, BIGNUM *VAR_3)
{
    if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0)) {
        return 0;
    }

    FUNC_0(VAR_0->n);
    FUNC_0(VAR_0->e);
    FUNC_0(VAR_0->d);
    VAR_0->n = VAR_1;
    VAR_0->e = VAR_2;
    VAR_0->d = VAR_3;

    return 1;
}
