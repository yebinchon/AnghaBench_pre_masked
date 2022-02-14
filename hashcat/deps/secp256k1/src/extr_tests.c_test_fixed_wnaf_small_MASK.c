
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int secp256k1_scalar ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int*,int *,int) ;
 int FUNC_4 (int*,int*,int) ;

void FUNC_5(void) {
    int VAR_0 = 4;
    int VAR_1[256] = {0};
    int VAR_2;
    int VAR_3;
    secp256k1_scalar VAR_4;

    FUNC_2(&VAR_4, 0);
    VAR_3 = FUNC_3(VAR_1, &VAR_4, VAR_0);
    for (VAR_2 = FUNC_1(VAR_0)-1; VAR_2 >= 0; --VAR_2) {
        int VAR_5 = VAR_1[VAR_2];
        FUNC_0(VAR_5 == 0);
    }
    FUNC_0(VAR_3 == 0);

    FUNC_2(&VAR_4, 1);
    VAR_3 = FUNC_3(VAR_1, &VAR_4, VAR_0);
    for (VAR_2 = FUNC_1(VAR_0)-1; VAR_2 >= 1; --VAR_2) {
        int VAR_6 = VAR_1[VAR_2];
        FUNC_0(VAR_6 == 0);
    }
    FUNC_0(VAR_1[0] == 1);
    FUNC_0(VAR_3 == 0);

    {
        int VAR_7[8] = { 0xf, 0xf, 0xf, 0xf, 0xf, 0xf, 0xf, 0xf };
        FUNC_2(&VAR_4, 0xffffffff);
        VAR_3 = FUNC_3(VAR_1, &VAR_4, VAR_0);
        FUNC_4(VAR_1, VAR_7, VAR_0);
        FUNC_0(VAR_3 == 0);
    }
    {
        int VAR_8[8] = { -1, -1, -1, -1, -1, -1, -1, 0xf };
        FUNC_2(&VAR_4, 0xeeeeeeee);
        VAR_3 = FUNC_3(VAR_1, &VAR_4, VAR_0);
        FUNC_4(VAR_1, VAR_8, VAR_0);
        FUNC_0(VAR_3 == 1);
    }
    {
        int VAR_9[8] = { 1, 0, 1, 0, 1, 0, 1, 0 };
        FUNC_2(&VAR_4, 0x01010101);
        VAR_3 = FUNC_3(VAR_1, &VAR_4, VAR_0);
        FUNC_4(VAR_1, VAR_9, VAR_0);
        FUNC_0(VAR_3 == 0);
    }
    {
        int VAR_10[8] = { -0xf, 0, 0xf, -0xf, 0, 0xf, 1, 0 };
        FUNC_2(&VAR_4, 0x01ef1ef1);
        VAR_3 = FUNC_3(VAR_1, &VAR_4, VAR_0);
        FUNC_4(VAR_1, VAR_10, VAR_0);
        FUNC_0(VAR_3 == 0);
    }
}
