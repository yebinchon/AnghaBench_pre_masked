
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct secp256k1_pippenger_state {int* wnaf_na; struct secp256k1_pippenger_point_state* ps; } ;
struct secp256k1_pippenger_point_state {size_t input_pos; int skew_na; } ;
typedef int secp256k1_scalar ;
typedef int secp256k1_gej ;
typedef int const secp256k1_ge ;


 int FUNC_0 (int) ;
 size_t FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int const*) ;
 int FUNC_3 (int const*,int const*) ;
 int FUNC_4 (int *,int *,int const*,int *) ;
 int FUNC_5 (int *,int *,int *,int *) ;
 int FUNC_6 (int *,int *,int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int const*) ;
 int FUNC_9 (int*,int const*,int) ;

__attribute__((used)) static int FUNC_10(secp256k1_gej *VAR_0, int VAR_1, struct secp256k1_pippenger_state *VAR_2, secp256k1_gej *VAR_3, const secp256k1_scalar *VAR_4, const secp256k1_ge *VAR_5, size_t VAR_6) {
    size_t VAR_7 = FUNC_1(VAR_1+1);
    size_t VAR_8;
    size_t VAR_9 = 0;
    int VAR_10;
    int VAR_11;

    for (VAR_8 = 0; VAR_8 < VAR_6; ++VAR_8) {
        if (FUNC_8(&VAR_4[VAR_8]) || FUNC_2(&VAR_5[VAR_8])) {
            continue;
        }
        VAR_2->ps[VAR_9].input_pos = VAR_8;
        VAR_2->ps[VAR_9].skew_na = FUNC_9(&VAR_2->wnaf_na[VAR_9*VAR_7], &VAR_4[VAR_8], VAR_1+1);
        VAR_9++;
    }
    FUNC_7(VAR_3);

    if (VAR_9 == 0) {
        return 1;
    }

    for (VAR_10 = VAR_7 - 1; VAR_10 >= 0; VAR_10--) {
        secp256k1_gej VAR_12;

        for(VAR_11 = 0; VAR_11 < FUNC_0(VAR_1+2); VAR_11++) {
            FUNC_7(&VAR_0[VAR_11]);
        }

        for (VAR_8 = 0; VAR_8 < VAR_9; ++VAR_8) {
            int VAR_13 = VAR_2->wnaf_na[VAR_8*VAR_7 + VAR_10];
            struct secp256k1_pippenger_point_state VAR_14 = VAR_2->ps[VAR_8];
            secp256k1_ge VAR_15;
            int VAR_16;

            if (VAR_10 == 0) {

                int VAR_17 = VAR_14.skew_na;
                if (VAR_17) {
                    FUNC_3(&VAR_15, &VAR_5[VAR_14.input_pos]);
                    FUNC_4(&VAR_0[0], &VAR_0[0], &VAR_15, ((void*)0));
                }
            }
            if (VAR_13 > 0) {
                VAR_16 = (VAR_13 - 1)/2;
                FUNC_4(&VAR_0[VAR_16], &VAR_0[VAR_16], &VAR_5[VAR_14.input_pos], ((void*)0));
            } else if (VAR_13 < 0) {
                VAR_16 = -(VAR_13 + 1)/2;
                FUNC_3(&VAR_15, &VAR_5[VAR_14.input_pos]);
                FUNC_4(&VAR_0[VAR_16], &VAR_0[VAR_16], &VAR_15, ((void*)0));
            }
        }

        for(VAR_11 = 0; VAR_11 < VAR_1; VAR_11++) {
            FUNC_6(VAR_3, VAR_3, ((void*)0));
        }

        FUNC_7(&VAR_12);
        for(VAR_11 = FUNC_0(VAR_1+2) - 1; VAR_11 > 0; VAR_11--) {
            FUNC_5(&VAR_12, &VAR_12, &VAR_0[VAR_11], ((void*)0));
            FUNC_5(VAR_3, VAR_3, &VAR_12, ((void*)0));
        }

        FUNC_5(&VAR_12, &VAR_12, &VAR_0[0], ((void*)0));
        FUNC_6(VAR_3, VAR_3, ((void*)0));
        FUNC_5(VAR_3, VAR_3, &VAR_12, ((void*)0));
    }
    return 1;
}
