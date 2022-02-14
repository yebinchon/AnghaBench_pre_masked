
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_13__ ;


struct secp256k1_strauss_state {int * pre_a; TYPE_1__* ps; int * pre_a_lam; int zr; TYPE_13__* prej; } ;
typedef int const secp256k1_scalar ;
struct TYPE_21__ {int z; int infinity; } ;
typedef TYPE_2__ const secp256k1_gej ;
typedef int secp256k1_ge ;
typedef int secp256k1_fe ;
struct TYPE_22__ {int * pre_g; int * pre_g_128; } ;
typedef TYPE_3__ secp256k1_ecmult_context ;
struct TYPE_20__ {int input_pos; int bits_na_1; int* wnaf_na_1; int bits_na_lam; int* wnaf_na_lam; int bits_na; int* wnaf_na; int const na_lam; int const na_1; } ;
struct TYPE_19__ {int z; } ;


 int FUNC_0 (int *,int *,int,int ) ;
 int FUNC_1 (int *,int ,int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int,TYPE_13__*,int ,TYPE_2__ const*) ;
 void* FUNC_5 (int*,int,int const*,int ) ;
 int FUNC_6 (int *,int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int,int *,int *,TYPE_13__*,int ) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (TYPE_2__ const*,TYPE_2__ const*,int *,int *) ;
 int FUNC_12 (TYPE_2__ const*,TYPE_2__ const*,int *,int *) ;
 int FUNC_13 (TYPE_2__ const*,TYPE_2__ const*,int *) ;
 scalar_t__ FUNC_14 (TYPE_2__ const*) ;
 int FUNC_15 (TYPE_2__ const*,int *) ;
 int FUNC_16 (TYPE_2__ const*) ;
 scalar_t__ FUNC_17 (int const*) ;
 int FUNC_18 (int const*,int const*,int const*) ;
 int FUNC_19 (int const*,int const*,int const*) ;

__attribute__((used)) static void FUNC_20(const secp256k1_ecmult_context *VAR_2, const struct secp256k1_strauss_state *VAR_3, secp256k1_gej *VAR_4, int VAR_5, const secp256k1_gej *VAR_6, const secp256k1_scalar *VAR_7, const secp256k1_scalar *VAR_8) {
    secp256k1_ge VAR_9;
    secp256k1_fe VAR_10;
    int VAR_11[256];
    int VAR_12 = 0;

    int VAR_13;
    int VAR_14 = 0;
    int VAR_15;
    int VAR_16 = 0;

    for (VAR_15 = 0; VAR_15 < VAR_5; ++VAR_15) {
        if (FUNC_17(&VAR_7[VAR_15]) || FUNC_14(&VAR_6[VAR_15])) {
            continue;
        }
        VAR_3->ps[VAR_16].input_pos = VAR_15;
        VAR_3->ps[VAR_16].bits_na = FUNC_5(VAR_3->ps[VAR_16].wnaf_na, 256, &VAR_7[VAR_15], VAR_0);
        if (VAR_3->ps[VAR_16].bits_na > VAR_14) {
            VAR_14 = VAR_3->ps[VAR_16].bits_na;
        }

        ++VAR_16;
    }
    if (VAR_16 > 0) {

        FUNC_4(FUNC_2(VAR_0), VAR_3->prej, VAR_3->zr, &VAR_6[VAR_3->ps[0].input_pos]);
        for (VAR_15 = 1; VAR_15 < VAR_16; ++VAR_15) {
            secp256k1_gej VAR_17 = VAR_6[VAR_3->ps[VAR_15].input_pos];



            FUNC_15(&VAR_17, &(VAR_3->prej[(VAR_15 - 1) * FUNC_2(VAR_0) + FUNC_2(VAR_0) - 1].z));
            FUNC_4(FUNC_2(VAR_0), VAR_3->prej + VAR_15 * FUNC_2(VAR_0), VAR_3->zr + VAR_15 * FUNC_2(VAR_0), &VAR_17);
            FUNC_6(VAR_3->zr + VAR_15 * FUNC_2(VAR_0), VAR_3->zr + VAR_15 * FUNC_2(VAR_0), &(VAR_6[VAR_3->ps[VAR_15].input_pos].z));
        }

        FUNC_9(FUNC_2(VAR_0) * VAR_16, VAR_3->pre_a, &VAR_10, VAR_3->prej, VAR_3->zr);
    } else {
        FUNC_8(&VAR_10, 1);
    }
    if (VAR_8) {
        VAR_12 = FUNC_5(VAR_11, 256, VAR_8, VAR_1);
        if (VAR_12 > VAR_14) {
            VAR_14 = VAR_12;
        }
    }


    FUNC_16(VAR_4);

    for (VAR_13 = VAR_14 - 1; VAR_13 >= 0; VAR_13--) {
        int VAR_18;
        FUNC_13(VAR_4, VAR_4, ((void*)0));
        for (VAR_15 = 0; VAR_15 < VAR_16; ++VAR_15) {
            if (VAR_13 < VAR_3->ps[VAR_15].bits_na && (VAR_18 = VAR_3->ps[VAR_15].wnaf_na[VAR_13])) {
                FUNC_0(&VAR_9, VAR_3->pre_a + VAR_15 * FUNC_2(VAR_0), VAR_18, VAR_0);
                FUNC_11(VAR_4, VAR_4, &VAR_9, ((void*)0));
            }
        }
        if (VAR_13 < VAR_12 && (VAR_18 = VAR_11[VAR_13])) {
            FUNC_1(&VAR_9, *VAR_2->pre_g, VAR_18, VAR_1);
            FUNC_12(VAR_4, VAR_4, &VAR_9, &VAR_10);
        }

    }

    if (!VAR_4->infinity) {
        FUNC_6(&VAR_4->z, &VAR_4->z, &VAR_10);
    }
}
