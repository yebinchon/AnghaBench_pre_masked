
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;


typedef int const secp256k1_scalar ;
struct TYPE_26__ {int z; } ;
typedef TYPE_1__ secp256k1_gej ;
typedef int secp256k1_ge_storage ;
struct TYPE_27__ {int y; } ;
typedef TYPE_2__ const secp256k1_ge ;
typedef int secp256k1_fe ;


 int FUNC_0 (TYPE_2__ const*,TYPE_2__ const*,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (TYPE_2__ const*,int *,TYPE_1__*) ;
 int FUNC_6 (int *,int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_2__ const*,int *) ;
 int FUNC_9 (TYPE_2__ const*,TYPE_2__ const*) ;
 int FUNC_10 (TYPE_2__ const*,TYPE_2__ const*) ;
 int FUNC_11 (TYPE_2__ const*,TYPE_1__*) ;
 int FUNC_12 (int *,int *,int) ;
 int FUNC_13 (int *,TYPE_2__ const*) ;
 int FUNC_14 (TYPE_1__*,TYPE_1__*,TYPE_2__ const*) ;
 int FUNC_15 (TYPE_1__*,TYPE_1__*,int *) ;
 int FUNC_16 (TYPE_1__*,TYPE_1__*,int *) ;
 int FUNC_17 (TYPE_1__*,TYPE_2__ const*) ;
 int FUNC_18 (int const*,int const*,int const*) ;
 int FUNC_19 (int*,int const*,int,int) ;

__attribute__((used)) static void FUNC_20(secp256k1_gej *VAR_1, const secp256k1_ge *VAR_2, const secp256k1_scalar *VAR_3, int VAR_4) {
    secp256k1_ge VAR_5[FUNC_1(VAR_0)];
    secp256k1_ge VAR_6;
    secp256k1_fe VAR_7;

    int VAR_8;






    int VAR_9[1 + FUNC_3(VAR_0 - 1)];

    int VAR_10;


    int VAR_11 = VAR_4;
    {
        VAR_8 = FUNC_19(VAR_9, VAR_3, VAR_0 - 1, VAR_4);



    }







    FUNC_17(VAR_1, VAR_2);
    FUNC_5(VAR_5, &VAR_7, VAR_1);
    for (VAR_10 = 0; VAR_10 < FUNC_1(VAR_0); VAR_10++) {
        FUNC_7(&VAR_5[VAR_10].y);
    }
    VAR_10 = VAR_9[FUNC_4(VAR_11, VAR_0 - 1)];
    FUNC_2(VAR_10 != 0);
    FUNC_0(&VAR_6, VAR_5, VAR_10, VAR_0);
    FUNC_17(VAR_1, &VAR_6);
    for (VAR_10 = FUNC_4(VAR_11, VAR_0 - 1) - 1; VAR_10 >= 0; VAR_10--) {
        int VAR_12;
        int VAR_13;
        for (VAR_13 = 0; VAR_13 < VAR_0 - 1; ++VAR_13) {
            FUNC_15(VAR_1, VAR_1, ((void*)0));
        }

        VAR_12 = VAR_9[VAR_10];
        FUNC_0(&VAR_6, VAR_5, VAR_12, VAR_0);
        FUNC_2(VAR_12 != 0);
        FUNC_14(VAR_1, VAR_1, &VAR_6);
    }

    FUNC_6(&VAR_1->z, &VAR_1->z, &VAR_7);

    {

        secp256k1_ge VAR_14 = *VAR_2;
        secp256k1_ge_storage VAR_15;



        secp256k1_ge_storage VAR_16;
        secp256k1_gej VAR_17;
        FUNC_17(&VAR_17, &VAR_14);
        FUNC_16(&VAR_17, &VAR_17, ((void*)0));
        FUNC_11(&VAR_14, &VAR_17);
        FUNC_13(&VAR_15, VAR_2);





        FUNC_13(&VAR_16, &VAR_14);


        FUNC_12(&VAR_15, &VAR_16, VAR_8 == 2);







        FUNC_8(&VAR_14, &VAR_15);
        FUNC_10(&VAR_14, &VAR_14);
        FUNC_14(VAR_1, VAR_1, &VAR_14);
    }
}
