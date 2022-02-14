
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int secp256k1_gej ;
typedef int secp256k1_ge_storage ;
typedef int secp256k1_ge ;
typedef int secp256k1_fe ;
struct TYPE_4__ {int *** prec; } ;
typedef TYPE_1__ secp256k1_ecmult_gen_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (void**,size_t const,void* const,size_t const) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int *,unsigned char const*) ;
 int VAR_5 ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *,int *,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *,int *,int *) ;
 int FUNC_8 (int *,int *,int *,int *) ;
 int FUNC_9 (int *,int *,int *) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,int *) ;

__attribute__((used)) static void FUNC_12(secp256k1_ecmult_gen_context *VAR_6, void **VAR_7) {

    secp256k1_ge VAR_8[VAR_2 * VAR_1];
    secp256k1_gej VAR_9;
    secp256k1_gej VAR_10;
    int VAR_11, VAR_12;
    size_t const VAR_13 = VAR_3;
    void* const VAR_14 = *VAR_7;


    if (VAR_6->prec != ((void*)0)) {
        return;
    }

    VAR_6->prec = (secp256k1_ge_storage (*)[VAR_2][VAR_1])FUNC_1(VAR_7, VAR_13, VAR_14, VAR_13);


    FUNC_11(&VAR_9, &VAR_5);


    {
        static const unsigned char VAR_15[33] = "The scalar for this x is unknown";
        secp256k1_fe VAR_16;
        secp256k1_ge VAR_17;
        int VAR_18;
        VAR_18 = FUNC_3(&VAR_16, VAR_15);
        (void)VAR_18;
        FUNC_0(VAR_18);
        VAR_18 = FUNC_5(&VAR_17, &VAR_16, 0);
        (void)VAR_18;
        FUNC_0(VAR_18);
        FUNC_11(&VAR_10, &VAR_17);

        FUNC_7(&VAR_10, &VAR_10, &VAR_5, ((void*)0));
    }


    {
        secp256k1_gej VAR_19[VAR_2 * VAR_1];
        secp256k1_gej VAR_20;
        secp256k1_gej VAR_21;
        VAR_20 = VAR_9;
        VAR_21 = VAR_10;
        for (VAR_12 = 0; VAR_12 < VAR_2; VAR_12++) {

            VAR_19[VAR_12*VAR_1] = VAR_21;
            for (VAR_11 = 1; VAR_11 < VAR_1; VAR_11++) {
                FUNC_8(&VAR_19[VAR_12*VAR_1 + VAR_11], &VAR_19[VAR_12*VAR_1 + VAR_11 - 1], &VAR_20, ((void*)0));
            }

            for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++) {
                FUNC_9(&VAR_20, &VAR_20, ((void*)0));
            }

            FUNC_9(&VAR_21, &VAR_21, ((void*)0));
            if (VAR_12 == VAR_2 - 2) {

                FUNC_10(&VAR_21, &VAR_21);
                FUNC_8(&VAR_21, &VAR_21, &VAR_10, ((void*)0));
            }
        }
        FUNC_4(VAR_8, VAR_19, VAR_2 * VAR_1);
    }
    for (VAR_12 = 0; VAR_12 < VAR_2; VAR_12++) {
        for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++) {
            FUNC_6(&(*VAR_6->prec)[VAR_12][VAR_11], &VAR_8[VAR_12*VAR_1 + VAR_11]);
        }
    }




    FUNC_2(VAR_6, ((void*)0));
}
