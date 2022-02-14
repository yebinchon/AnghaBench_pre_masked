
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct secp256k1_pippenger_state {int* wnaf_na; struct secp256k1_pippenger_point_state* ps; } ;
struct secp256k1_pippenger_point_state {scalar_t__ skew_na; } ;
typedef int secp256k1_scratch ;
typedef int secp256k1_scalar ;
typedef int secp256k1_gej ;
typedef int secp256k1_ge ;
typedef int (* secp256k1_ecmult_multi_callback ) (int *,int *,size_t,void*) ;
typedef int secp256k1_ecmult_context ;
typedef int secp256k1_callback ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int *,int *) ;
 int FUNC_2 (int *,int,struct secp256k1_pippenger_state*,int *,int *,int *,size_t) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (size_t) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int const*,int *,int) ;
 int FUNC_8 (int const*,int *,size_t const) ;
 size_t FUNC_9 (int const*,int *) ;

__attribute__((used)) static int FUNC_10(const secp256k1_callback* VAR_1, const secp256k1_ecmult_context *VAR_2, secp256k1_scratch *VAR_3, secp256k1_gej *VAR_4, const secp256k1_scalar *VAR_5, secp256k1_ecmult_multi_callback VAR_6, void *VAR_7, size_t VAR_8, size_t VAR_9) {
    const size_t VAR_10 = FUNC_9(VAR_1, VAR_3);






    size_t VAR_11 = VAR_8 + 1;

    secp256k1_ge *VAR_12;
    secp256k1_scalar *VAR_13;
    secp256k1_gej *VAR_14;
    struct secp256k1_pippenger_state *VAR_15;
    size_t VAR_16 = 0;
    size_t VAR_17 = 0;
    int VAR_18, VAR_19;
    int VAR_20;

    (void)VAR_2;
    FUNC_4(VAR_4);
    if (VAR_5 == ((void*)0) && VAR_8 == 0) {
        return 1;
    }

    VAR_20 = FUNC_5(VAR_8);
    VAR_12 = (secp256k1_ge *) FUNC_7(VAR_1, VAR_3, VAR_11 * sizeof(*VAR_12));
    VAR_13 = (secp256k1_scalar *) FUNC_7(VAR_1, VAR_3, VAR_11 * sizeof(*VAR_13));
    VAR_15 = (struct secp256k1_pippenger_state *) FUNC_7(VAR_1, VAR_3, sizeof(*VAR_15));
    if (VAR_12 == ((void*)0) || VAR_13 == ((void*)0) || VAR_15 == ((void*)0)) {
        FUNC_8(VAR_1, VAR_3, VAR_10);
        return 0;
    }

    VAR_15->ps = (struct secp256k1_pippenger_point_state *) FUNC_7(VAR_1, VAR_3, VAR_11 * sizeof(*VAR_15->ps));
    VAR_15->wnaf_na = (int *) FUNC_7(VAR_1, VAR_3, VAR_11*(FUNC_0(VAR_20+1)) * sizeof(int));
    VAR_14 = (secp256k1_gej *) FUNC_7(VAR_1, VAR_3, (1<<VAR_20) * sizeof(*VAR_14));
    if (VAR_15->ps == ((void*)0) || VAR_15->wnaf_na == ((void*)0) || VAR_14 == ((void*)0)) {
        FUNC_8(VAR_1, VAR_3, VAR_10);
        return 0;
    }

    if (VAR_5 != ((void*)0)) {
        VAR_13[0] = *VAR_5;
        VAR_12[0] = VAR_0;
        VAR_16++;




    }

    while (VAR_17 < VAR_8) {
        if (!VAR_6(&VAR_13[VAR_16], &VAR_12[VAR_16], VAR_17 + VAR_9, VAR_7)) {
            FUNC_8(VAR_1, VAR_3, VAR_10);
            return 0;
        }
        VAR_16++;




        VAR_17++;
    }

    FUNC_2(VAR_14, VAR_20, VAR_15, VAR_4, VAR_13, VAR_12, VAR_16);


    for(VAR_18 = 0; (size_t)VAR_18 < VAR_16; VAR_18++) {
        FUNC_6(&VAR_13[VAR_18]);
        VAR_15->ps[VAR_18].skew_na = 0;
        for(VAR_19 = 0; VAR_19 < FUNC_0(VAR_20+1); VAR_19++) {
            VAR_15->wnaf_na[VAR_18 * FUNC_0(VAR_20+1) + VAR_19] = 0;
        }
    }
    for(VAR_18 = 0; VAR_18 < 1<<VAR_20; VAR_18++) {
        FUNC_3(&VAR_14[VAR_18]);
    }
    FUNC_8(VAR_1, VAR_3, VAR_10);
    return 1;
}
