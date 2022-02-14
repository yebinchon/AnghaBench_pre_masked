
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int secp256k1_scalar ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int const*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int const*) ;
 int FUNC_9 (int *,int) ;

__attribute__((used)) static int FUNC_10(int *VAR_0, const secp256k1_scalar *VAR_1, int VAR_2, int VAR_3) {
    int VAR_4;
    int VAR_5 = 0;
    int VAR_6 = 0;


    int VAR_7;
    int VAR_8;

    int VAR_9;
    int VAR_10;
    secp256k1_scalar VAR_11;
    int VAR_12;

    FUNC_0(VAR_2 > 0);
    FUNC_0(VAR_3 > 0);
    VAR_9 = FUNC_5(VAR_1);

    VAR_10 = VAR_9 ^ !FUNC_4(VAR_1);

    FUNC_8(&VAR_11, VAR_1);
    VAR_12 = !FUNC_6(&VAR_11);
    VAR_11 = *VAR_1;
    FUNC_2(&VAR_11, VAR_10, VAR_12);





    VAR_4 = FUNC_3(&VAR_11, VAR_9);
    VAR_4 *= VAR_12 * 2 - 1;
    VAR_5 = 1 << VAR_10;


    VAR_7 = FUNC_9(&VAR_11, VAR_2);
    do {
        int VAR_13;
        int VAR_14;


        VAR_8 = FUNC_9(&VAR_11, VAR_2);

        VAR_14 = ((VAR_8 & 1) == 0);
        VAR_13 = 2 * (VAR_7 > 0) - 1;
        VAR_8 += VAR_13 * VAR_14;
        VAR_7 -= VAR_13 * VAR_14 * (1 << VAR_2);


        VAR_0[VAR_6++] = VAR_7 * VAR_4;

        VAR_7 = VAR_8;
    } while (VAR_6 * VAR_2 < VAR_3);
    VAR_0[VAR_6] = VAR_8 * VAR_4;

    FUNC_0(FUNC_7(&VAR_11));
    FUNC_0(VAR_6 == FUNC_1(VAR_3, VAR_2));
    return VAR_5;
}
