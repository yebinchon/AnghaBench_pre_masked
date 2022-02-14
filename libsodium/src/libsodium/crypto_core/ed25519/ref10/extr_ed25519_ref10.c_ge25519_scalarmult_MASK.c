
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const ge25519_p3 ;
typedef int ge25519_p2 ;
typedef int ge25519_p1p1 ;
typedef int ge25519_cached ;


 int FUNC_0 (int *,int const*,int *) ;
 int FUNC_1 (int *,int *,char) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int const*,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int const*) ;
 int FUNC_6 (int *,int const*) ;
 int FUNC_7 (int *,int const*) ;

void
FUNC_8(ge25519_p3 *VAR_0, const unsigned char *VAR_1, const ge25519_p3 *VAR_2)
{
    signed char VAR_3[64];
    signed char VAR_4;
    ge25519_p1p1 VAR_5;
    ge25519_p2 VAR_6;
    ge25519_p1p1 VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
    ge25519_p3 VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;
    ge25519_cached VAR_21[8];
    ge25519_cached VAR_22;
    int VAR_23;

    FUNC_7(&VAR_21[1 - 1], VAR_2);

    FUNC_6(&VAR_7, VAR_2);
    FUNC_3(&VAR_14, &VAR_7);
    FUNC_7(&VAR_21[2 - 1], &VAR_14);

    FUNC_0(&VAR_8, VAR_2, &VAR_21[2 - 1]);
    FUNC_3(&VAR_15, &VAR_8);
    FUNC_7(&VAR_21[3 - 1], &VAR_15);

    FUNC_6(&VAR_9, &VAR_14);
    FUNC_3(&VAR_16, &VAR_9);
    FUNC_7(&VAR_21[4 - 1], &VAR_16);

    FUNC_0(&VAR_10, VAR_2, &VAR_21[4 - 1]);
    FUNC_3(&VAR_17, &VAR_10);
    FUNC_7(&VAR_21[5 - 1], &VAR_17);

    FUNC_6(&VAR_11, &VAR_15);
    FUNC_3(&VAR_18, &VAR_11);
    FUNC_7(&VAR_21[6 - 1], &VAR_18);

    FUNC_0(&VAR_12, VAR_2, &VAR_21[6 - 1]);
    FUNC_3(&VAR_19, &VAR_12);
    FUNC_7(&VAR_21[7 - 1], &VAR_19);

    FUNC_6(&VAR_13, &VAR_16);
    FUNC_3(&VAR_20, &VAR_13);
    FUNC_7(&VAR_21[8 - 1], &VAR_20);

    for (VAR_23 = 0; VAR_23 < 32; ++VAR_23) {
        VAR_3[2 * VAR_23 + 0] = (VAR_1[VAR_23] >> 0) & 15;
        VAR_3[2 * VAR_23 + 1] = (VAR_1[VAR_23] >> 4) & 15;
    }



    VAR_4 = 0;
    for (VAR_23 = 0; VAR_23 < 63; ++VAR_23) {
        VAR_3[VAR_23] += VAR_4;
        VAR_4 = VAR_3[VAR_23] + 8;
        VAR_4 >>= 4;
        VAR_3[VAR_23] -= VAR_4 * ((signed char) 1 << 4);
    }
    VAR_3[63] += VAR_4;


    FUNC_5(VAR_0);

    for (VAR_23 = 63; VAR_23 != 0; VAR_23--) {
        FUNC_1(&VAR_22, VAR_21, VAR_3[VAR_23]);
        FUNC_0(&VAR_5, VAR_0, &VAR_22);

        FUNC_2(&VAR_6, &VAR_5);
        FUNC_4(&VAR_5, &VAR_6);
        FUNC_2(&VAR_6, &VAR_5);
        FUNC_4(&VAR_5, &VAR_6);
        FUNC_2(&VAR_6, &VAR_5);
        FUNC_4(&VAR_5, &VAR_6);
        FUNC_2(&VAR_6, &VAR_5);
        FUNC_4(&VAR_5, &VAR_6);

        FUNC_3(VAR_0, &VAR_5);
    }
    FUNC_1(&VAR_22, VAR_21, VAR_3[VAR_23]);
    FUNC_0(&VAR_5, VAR_0, &VAR_22);

    FUNC_3(VAR_0, &VAR_5);
}
