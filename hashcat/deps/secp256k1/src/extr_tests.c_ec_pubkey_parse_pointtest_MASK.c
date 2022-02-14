
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char secp256k1_pubkey ;
typedef int secp256k1_ge ;
typedef int pubkey ;
typedef int int32_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (unsigned char*,int) ;
 int FUNC_2 (unsigned char*,int) ;
 int * VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (unsigned char*,unsigned char const*,int) ;
 int FUNC_4 (unsigned char*,unsigned char const*,int) ;
 int FUNC_5 (unsigned char*,int,int) ;
 int FUNC_6 (int ,int *,int*) ;
 int FUNC_7 (int ,unsigned char*,unsigned char*,size_t) ;
 int FUNC_8 (int ,unsigned char*,size_t*,unsigned char*,int ) ;
 int FUNC_9 (int ,int *,unsigned char*) ;
 int FUNC_10 (unsigned char*,int *) ;

void FUNC_11(const unsigned char *VAR_4, int VAR_5, int VAR_6) {
    unsigned char VAR_7[65];
    secp256k1_pubkey VAR_8;
    secp256k1_ge VAR_9;
    size_t VAR_10;
    int32_t VAR_11;
    VAR_11 = 0;
    FUNC_6(VAR_3, VAR_2, &VAR_11);
    for (VAR_10 = 3; VAR_10 <= 65; VAR_10++) {

        int32_t VAR_12;
        FUNC_4(&VAR_7[1], VAR_4, 64);
        FUNC_2(&VAR_7[VAR_10], 65 - VAR_10);
        for (VAR_12 = 0; VAR_12 < 256; VAR_12++) {

            int VAR_13;
            int VAR_14;
            int VAR_15;
            VAR_7[0] = VAR_12;

            VAR_15 = (VAR_4[63] & 1) + 2;

            VAR_13 = VAR_5 && (VAR_10 == 33) && ((VAR_12 & 254) == 2);

            VAR_14 = VAR_5 && VAR_6 && ((VAR_12 & 4) == ((VAR_10 == 65) << 2)) &&
                ((VAR_12 == 4) || ((VAR_12 & 251) == VAR_15)) && ((VAR_10 == 33) || (VAR_10 == 65));
            if (VAR_13 || VAR_14) {

                unsigned char VAR_16[65];
                size_t VAR_17;
                FUNC_5(&VAR_8, 0, sizeof(VAR_8));
                FUNC_2(&VAR_8, sizeof(VAR_8));
                VAR_11 = 0;
                FUNC_0(FUNC_7(VAR_3, &VAR_8, VAR_7, VAR_10) == 1);
                FUNC_1(&VAR_8, sizeof(VAR_8));
                VAR_17 = 65;
                FUNC_2(VAR_16, 65);
                FUNC_0(FUNC_8(VAR_3, VAR_16, &VAR_17, &VAR_8, VAR_0) == 1);
                FUNC_1(VAR_16, VAR_17);
                FUNC_0(VAR_17 == 33);
                FUNC_0(FUNC_3(&VAR_16[1], &VAR_7[1], 32) == 0);
                FUNC_0((VAR_10 != 33) || (VAR_16[0] == VAR_7[0]));
                if (VAR_14) {

                    FUNC_0(VAR_16[0] == VAR_15);
                    FUNC_0(FUNC_9(VAR_3, &VAR_9, &VAR_8) == 1);
                    FUNC_5(&VAR_8, 0, sizeof(VAR_8));
                    FUNC_2(&VAR_8, sizeof(VAR_8));
                    FUNC_10(&VAR_8, &VAR_9);
                    FUNC_1(&VAR_8, sizeof(VAR_8));
                    VAR_17 = 65;
                    FUNC_2(VAR_16, 65);
                    FUNC_0(FUNC_8(VAR_3, VAR_16, &VAR_17, &VAR_8, VAR_1) == 1);
                    FUNC_1(VAR_16, VAR_17);
                    FUNC_0(VAR_17 == 65);
                    FUNC_0(VAR_16[0] == 4);
                    FUNC_0(FUNC_3(&VAR_16[1], VAR_4, 64) == 0);
                }
                FUNC_0(VAR_11 == 0);
            } else {

                FUNC_5(&VAR_8, 0xfe, sizeof(VAR_8));
                VAR_11 = 0;
                FUNC_2(&VAR_8, sizeof(VAR_8));
                FUNC_0(FUNC_7(VAR_3, &VAR_8, VAR_7, VAR_10) == 0);
                FUNC_1(&VAR_8, sizeof(VAR_8));
                FUNC_0(VAR_11 == 0);
                FUNC_0(FUNC_9(VAR_3, &VAR_9, &VAR_8) == 0);
                FUNC_0(VAR_11 == 1);
            }
        }
    }
    FUNC_6(VAR_3, ((void*)0), ((void*)0));
}
