
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int secp256k1_scalar ;
typedef int secp256k1_gej ;
typedef int secp256k1_ge ;
struct TYPE_3__ {int * expected_output; int * output; int * seckeys; int * pubkeys; int * scalars; int ctx; int * scratch; void* ecmult_multi; } ;
typedef TYPE_1__ bench_data ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int *) ;
 scalar_t__ FUNC_3 (int,char**,char*) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (TYPE_1__*,int,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ) ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int FUNC_9 (int *,int *,int) ;
 int FUNC_10 (int *,int *,int *) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *,int *,int *) ;
 int FUNC_13 (int *,int) ;
 int * FUNC_14 (int ,size_t) ;
 int FUNC_15 (int ,int *) ;
 int FUNC_16 (int) ;
 int VAR_9 ;

int FUNC_17(int VAR_10, char **VAR_11) {
    bench_data VAR_12;
    int VAR_13, VAR_14;
    secp256k1_gej* VAR_15;
    size_t VAR_16;

    VAR_12.ctx = FUNC_7(VAR_2 | VAR_3);
    VAR_16 = FUNC_16(VAR_1) + VAR_4*16;
    VAR_12.scratch = FUNC_14(VAR_12.ctx, VAR_16);
    VAR_12.ecmult_multi = VAR_5;

    if (VAR_10 > 1) {
        if(FUNC_3(VAR_10, VAR_11, "pippenger_wnaf")) {
            FUNC_5("Using pippenger_wnaf:\n");
            VAR_12.ecmult_multi = VAR_6;
        } else if(FUNC_3(VAR_10, VAR_11, "strauss_wnaf")) {
            FUNC_5("Using strauss_wnaf:\n");
            VAR_12.ecmult_multi = VAR_7;
        } else if(FUNC_3(VAR_10, VAR_11, "simple")) {
            FUNC_5("Using simple algorithm:\n");
            VAR_12.ecmult_multi = VAR_5;
            FUNC_15(VAR_12.ctx, VAR_12.scratch);
            VAR_12.scratch = ((void*)0);
        } else {
            FUNC_0(VAR_9, "%s: unrecognized argument '%s'.\n", VAR_11[0], VAR_11[1]);
            FUNC_0(VAR_9, "Use 'pippenger_wnaf', 'strauss_wnaf', 'simple' or no argument to benchmark a combined algorithm.\n");
            return 1;
        }
    }


    VAR_12.scalars = FUNC_4(sizeof(secp256k1_scalar) * VAR_1);
    VAR_12.seckeys = FUNC_4(sizeof(secp256k1_scalar) * VAR_1);
    VAR_12.pubkeys = FUNC_4(sizeof(secp256k1_ge) * VAR_1);
    VAR_12.expected_output = FUNC_4(sizeof(secp256k1_gej) * (VAR_0 + 1));
    VAR_12.output = FUNC_4(sizeof(secp256k1_gej) * (VAR_0 + 1));


    VAR_15 = FUNC_4(sizeof(secp256k1_gej) * VAR_1);
    FUNC_11(&VAR_15[0], &VAR_8);
    FUNC_13(&VAR_12.seckeys[0], 1);
    for (VAR_13 = 0; VAR_13 < VAR_1; ++VAR_13) {
        FUNC_2(VAR_13, &VAR_12.scalars[VAR_13]);
        if (VAR_13) {
            FUNC_10(&VAR_15[VAR_13], &VAR_15[VAR_13 - 1], ((void*)0));
            FUNC_12(&VAR_12.seckeys[VAR_13], &VAR_12.seckeys[VAR_13 - 1], &VAR_12.seckeys[VAR_13 - 1]);
        }
    }
    FUNC_9(VAR_12.pubkeys, VAR_15, VAR_1);
    FUNC_1(VAR_15);

    for (VAR_13 = 1; VAR_13 <= 8; ++VAR_13) {
        FUNC_6(&VAR_12, VAR_13, 1);
    }

    for (VAR_14 = 0; VAR_14 <= 11; ++VAR_14) {
        for (VAR_13 = 9; VAR_13 <= 16; ++VAR_13) {
            FUNC_6(&VAR_12, VAR_13 << VAR_14, 1);
        }
    }
    if (VAR_12.scratch != ((void*)0)) {
        FUNC_15(VAR_12.ctx, VAR_12.scratch);
    }
    FUNC_8(VAR_12.ctx);
    FUNC_1(VAR_12.scalars);
    FUNC_1(VAR_12.pubkeys);
    FUNC_1(VAR_12.seckeys);
    FUNC_1(VAR_12.output);
    FUNC_1(VAR_12.expected_output);

    return(0);
}
