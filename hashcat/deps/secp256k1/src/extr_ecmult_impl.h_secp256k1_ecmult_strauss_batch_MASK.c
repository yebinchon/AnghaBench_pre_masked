
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct secp256k1_strauss_state {int * pre_a; int * zr; int * prej; struct secp256k1_strauss_point_state* ps; int * pre_a_lam; } ;
struct secp256k1_strauss_point_state {int dummy; } ;
typedef int secp256k1_scratch ;
typedef int secp256k1_scalar ;
typedef int secp256k1_gej ;
typedef int secp256k1_ge ;
typedef int secp256k1_fe ;
typedef int (* secp256k1_ecmult_multi_callback ) (int *,int *,size_t,void*) ;
typedef int secp256k1_ecmult_context ;
typedef int secp256k1_callback ;


 size_t FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int const*,struct secp256k1_strauss_state*,int *,size_t,int *,int *,int const*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int const*,int *,size_t) ;
 int FUNC_5 (int const*,int *,size_t const) ;
 size_t FUNC_6 (int const*,int *) ;

__attribute__((used)) static int FUNC_7(const secp256k1_callback* VAR_1, const secp256k1_ecmult_context *VAR_2, secp256k1_scratch *VAR_3, secp256k1_gej *VAR_4, const secp256k1_scalar *VAR_5, secp256k1_ecmult_multi_callback VAR_6, void *VAR_7, size_t VAR_8, size_t VAR_9) {
    secp256k1_gej* VAR_10;
    secp256k1_scalar* VAR_11;
    struct secp256k1_strauss_state VAR_12;
    size_t VAR_13;
    const size_t VAR_14 = FUNC_6(VAR_1, VAR_3);

    FUNC_3(VAR_4);
    if (VAR_5 == ((void*)0) && VAR_8 == 0) {
        return 1;
    }

    VAR_10 = (secp256k1_gej*)FUNC_4(VAR_1, VAR_3, VAR_8 * sizeof(secp256k1_gej));
    VAR_11 = (secp256k1_scalar*)FUNC_4(VAR_1, VAR_3, VAR_8 * sizeof(secp256k1_scalar));
    VAR_12.prej = (secp256k1_gej*)FUNC_4(VAR_1, VAR_3, VAR_8 * FUNC_0(VAR_0) * sizeof(secp256k1_gej));
    VAR_12.zr = (secp256k1_fe*)FUNC_4(VAR_1, VAR_3, VAR_8 * FUNC_0(VAR_0) * sizeof(secp256k1_fe));




    VAR_12.pre_a = (secp256k1_ge*)FUNC_4(VAR_1, VAR_3, VAR_8 * FUNC_0(VAR_0) * sizeof(secp256k1_ge));

    VAR_12.ps = (struct secp256k1_strauss_point_state*)FUNC_4(VAR_1, VAR_3, VAR_8 * sizeof(struct secp256k1_strauss_point_state));

    if (VAR_10 == ((void*)0) || VAR_11 == ((void*)0) || VAR_12.prej == ((void*)0) || VAR_12.zr == ((void*)0) || VAR_12.pre_a == ((void*)0)) {
        FUNC_5(VAR_1, VAR_3, VAR_14);
        return 0;
    }

    for (VAR_13 = 0; VAR_13 < VAR_8; VAR_13++) {
        secp256k1_ge VAR_15;
        if (!VAR_6(&VAR_11[VAR_13], &VAR_15, VAR_13+VAR_9, VAR_7)) {
            FUNC_5(VAR_1, VAR_3, VAR_14);
            return 0;
        }
        FUNC_2(&VAR_10[VAR_13], &VAR_15);
    }
    FUNC_1(VAR_2, &VAR_12, VAR_4, VAR_8, VAR_10, VAR_11, VAR_5);
    FUNC_5(VAR_1, VAR_3, VAR_14);
    return 1;
}
