
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct secp256k1_strauss_state {struct secp256k1_strauss_point_state* ps; int * pre_a_lam; int * pre_a; int * zr; int * prej; } ;
struct secp256k1_strauss_point_state {int dummy; } ;
typedef int secp256k1_scalar ;
typedef int secp256k1_gej ;
typedef int secp256k1_ge ;
typedef int secp256k1_fe ;
typedef int secp256k1_ecmult_context ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int const*,struct secp256k1_strauss_state*,int *,int,int const*,int const*,int const*) ;

__attribute__((used)) static void FUNC_2(const secp256k1_ecmult_context *VAR_1, secp256k1_gej *VAR_2, const secp256k1_gej *VAR_3, const secp256k1_scalar *VAR_4, const secp256k1_scalar *VAR_5) {
    secp256k1_gej VAR_6[FUNC_0(VAR_0)];
    secp256k1_fe VAR_7[FUNC_0(VAR_0)];
    secp256k1_ge VAR_8[FUNC_0(VAR_0)];
    struct secp256k1_strauss_point_state VAR_9[1];



    struct secp256k1_strauss_state VAR_10;

    VAR_10.prej = VAR_6;
    VAR_10.zr = VAR_7;
    VAR_10.pre_a = VAR_8;



    VAR_10.ps = VAR_9;
    FUNC_1(VAR_1, &VAR_10, VAR_2, 1, VAR_3, VAR_4, VAR_5);
}
