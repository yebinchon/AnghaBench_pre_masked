
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int const secp256k1_scalar ;
typedef int secp256k1_gej ;
struct TYPE_4__ {int y; int x; } ;
typedef TYPE_1__ secp256k1_ge ;
typedef int secp256k1_ecmult_gen_context ;


 int FUNC_0 (int) ;
 int FUNC_1 (int const*,int *,int const*) ;
 int FUNC_2 (unsigned char*,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int const*,int const*,int const*) ;
 int FUNC_9 (int const*) ;
 int FUNC_10 (int const*,int const*) ;
 scalar_t__ FUNC_11 (int const*) ;
 scalar_t__ FUNC_12 (int const*) ;
 int FUNC_13 (int const*,int const*,int const*) ;
 int FUNC_14 (int const*,int const*) ;
 int FUNC_15 (int const*,unsigned char*,int*) ;

__attribute__((used)) static int FUNC_16(const secp256k1_ecmult_gen_context *VAR_0, secp256k1_scalar *VAR_1, secp256k1_scalar *VAR_2, const secp256k1_scalar *VAR_3, const secp256k1_scalar *VAR_4, const secp256k1_scalar *VAR_5, int *VAR_6) {
    unsigned char VAR_7[32];
    secp256k1_gej VAR_8;
    secp256k1_ge VAR_9;
    secp256k1_scalar VAR_10;
    int VAR_11 = 0;

    FUNC_1(VAR_0, &VAR_8, VAR_5);
    FUNC_6(&VAR_9, &VAR_8);
    FUNC_4(&VAR_9.x);
    FUNC_4(&VAR_9.y);
    FUNC_2(VAR_7, &VAR_9.x);
    FUNC_15(VAR_1, VAR_7, &VAR_11);

    FUNC_0(!FUNC_12(VAR_1));
    FUNC_0(VAR_11 == 0);

    if (VAR_6) {



        *VAR_6 = (VAR_11 ? 2 : 0) | (FUNC_3(&VAR_9.y) ? 1 : 0);
    }
    FUNC_13(&VAR_10, VAR_1, VAR_3);
    FUNC_8(&VAR_10, &VAR_10, VAR_4);
    FUNC_10(VAR_2, VAR_5);
    FUNC_13(VAR_2, VAR_2, &VAR_10);
    FUNC_9(&VAR_10);
    FUNC_7(&VAR_8);
    FUNC_5(&VAR_9);
    if (FUNC_12(VAR_2)) {
        return 0;
    }
    if (FUNC_11(VAR_2)) {
        FUNC_14(VAR_2, VAR_2);
        if (VAR_6) {
            *VAR_6 ^= 1;
        }
    }
    return 1;
}
