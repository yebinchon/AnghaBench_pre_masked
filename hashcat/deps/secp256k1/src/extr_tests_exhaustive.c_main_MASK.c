
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef int secp256k1_scalar ;
typedef int secp256k1_gej ;
struct TYPE_20__ {scalar_t__ infinity; int y; int x; } ;
typedef TYPE_1__ secp256k1_ge ;
typedef int secp256k1_fe ;
struct TYPE_21__ {int ecmult_gen_ctx; } ;
typedef TYPE_2__ secp256k1_context ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 TYPE_2__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *,int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int VAR_3 ;
 int FUNC_6 (TYPE_1__*,int *) ;
 int FUNC_7 (int *,int *,int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (TYPE_1__*,int *,int) ;
 int FUNC_12 (TYPE_2__*,TYPE_1__*,int *,int) ;
 int FUNC_13 (TYPE_2__*,TYPE_1__*,int) ;
 int FUNC_14 (TYPE_1__*,int) ;
 int FUNC_15 (TYPE_2__*,TYPE_1__*,int) ;
 int FUNC_16 (TYPE_2__*,TYPE_1__*,int) ;
 int FUNC_17 (TYPE_2__*,TYPE_1__*,int) ;
 int FUNC_18 (TYPE_2__*,TYPE_1__*,int) ;

int FUNC_19(void) {
    int VAR_4;
    secp256k1_gej VAR_5[VAR_0];
    secp256k1_ge VAR_6[VAR_0];


    secp256k1_context *VAR_7 = FUNC_2(VAR_1 | VAR_2);




    FUNC_9(&VAR_5[0]);
    FUNC_6(&VAR_6[0], &VAR_5[0]);
    for (VAR_4 = 1; VAR_4 < VAR_0; VAR_4++) {

        secp256k1_fe VAR_8;
        FUNC_1(&VAR_8);

        FUNC_7(&VAR_5[VAR_4], &VAR_5[VAR_4 - 1], &VAR_3);
        FUNC_6(&VAR_6[VAR_4], &VAR_5[VAR_4]);
        FUNC_8(&VAR_5[VAR_4], &VAR_8);


        {
            secp256k1_scalar VAR_9;
            secp256k1_gej VAR_10;
            secp256k1_ge VAR_11;

            FUNC_10(&VAR_9, VAR_4);
            FUNC_4(&VAR_7->ecmult_gen_ctx, &VAR_10, &VAR_9);
            FUNC_6(&VAR_11, &VAR_10);

            FUNC_0(VAR_6[VAR_4].infinity == 0);
            FUNC_0(VAR_11.infinity == 0);
            FUNC_0(FUNC_5(&VAR_11.x, &VAR_6[VAR_4].x));
            FUNC_0(FUNC_5(&VAR_11.y, &VAR_6[VAR_4].y));
        }
    }





    FUNC_11(VAR_6, VAR_5, VAR_0);
    FUNC_12(VAR_7, VAR_6, VAR_5, VAR_0);
    FUNC_13(VAR_7, VAR_6, VAR_0);
    FUNC_17(VAR_7, VAR_6, VAR_0);
    FUNC_18(VAR_7, VAR_6, VAR_0);






    FUNC_3(VAR_7);
    return 0;
}
