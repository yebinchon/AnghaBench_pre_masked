
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int secp256k1_scalar ;
typedef int secp256k1_gej ;
struct TYPE_5__ {int x; } ;
typedef TYPE_1__ secp256k1_ge ;
typedef int secp256k1_fe ;
typedef int secp256k1_ecmult_context ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*,int *,int *,int *,int *) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (unsigned char*,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned char*) ;
 int FUNC_6 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_7 (int *,int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *,TYPE_1__ const*) ;
 int FUNC_10 (int const*,int *) ;
 int FUNC_11 (unsigned char*,int const*) ;
 int FUNC_12 (int *,int const*) ;
 scalar_t__ FUNC_13 (int const*) ;
 int FUNC_14 (int *,int *,int const*) ;
 int FUNC_15 (int *,unsigned char*,int *) ;

__attribute__((used)) static int FUNC_16(const secp256k1_ecmult_context *VAR_2, const secp256k1_scalar *VAR_3, const secp256k1_scalar *VAR_4, const secp256k1_ge *VAR_5, const secp256k1_scalar *VAR_6) {
    unsigned char VAR_7[32];
    secp256k1_scalar VAR_8, VAR_9, VAR_10;

    secp256k1_fe VAR_11;

    secp256k1_gej VAR_12;
    secp256k1_gej VAR_13;

    if (FUNC_13(VAR_3) || FUNC_13(VAR_4)) {
        return 0;
    }

    FUNC_12(&VAR_8, VAR_4);
    FUNC_14(&VAR_9, &VAR_8, VAR_6);
    FUNC_14(&VAR_10, &VAR_8, VAR_3);
    FUNC_9(&VAR_12, VAR_5);
    FUNC_0(VAR_2, &VAR_13, &VAR_12, &VAR_10, &VAR_9);
    if (FUNC_8(&VAR_13)) {
        return 0;
    }
    FUNC_11(VAR_7, VAR_3);
    FUNC_5(&VAR_11, VAR_7);
    if (FUNC_7(&VAR_11, &VAR_13)) {

        return 1;
    }
    if (FUNC_2(&VAR_11, &VAR_1) >= 0) {

        return 0;
    }
    FUNC_1(&VAR_11, &VAR_0);
    if (FUNC_7(&VAR_11, &VAR_13)) {

        return 1;
    }
    return 0;

}
