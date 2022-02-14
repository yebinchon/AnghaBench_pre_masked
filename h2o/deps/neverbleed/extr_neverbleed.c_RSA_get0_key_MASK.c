
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * d; int * e; int * n; } ;
typedef TYPE_1__ RSA ;
typedef int BIGNUM ;



__attribute__((used)) static void FUNC_0(const RSA *VAR_0, const BIGNUM **VAR_1, const BIGNUM **VAR_2, const BIGNUM **VAR_3)
{
    if (VAR_1) {
        *VAR_1 = VAR_0->n;
    }

    if (VAR_2) {
        *VAR_2 = VAR_0->e;
    }

    if (VAR_3) {
        *VAR_3 = VAR_0->d;
    }
}
