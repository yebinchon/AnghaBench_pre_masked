
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int crypto_generichash_state ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,unsigned char*,int) ;
 int FUNC_2 (int *,unsigned char*,unsigned int,unsigned int) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,unsigned char*,size_t) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int) ;

int
FUNC_8(void)
{

    crypto_generichash_state *VAR_4;
    unsigned char VAR_5[64];
    unsigned char VAR_6[VAR_1];
    unsigned char VAR_7[VAR_3];
    size_t VAR_8, VAR_9, VAR_10;

    FUNC_0(FUNC_3() >= sizeof *VAR_4);
    VAR_4 = (crypto_generichash_state *)
        FUNC_7(FUNC_3());
    for (VAR_8 = 0; VAR_8 < VAR_3; ++VAR_8) {
        VAR_7[VAR_8] = (unsigned char) VAR_8;
    }
    for (VAR_9 = 0; VAR_9 < 64; ++VAR_9) {
        VAR_5[VAR_9] = (unsigned char) VAR_9;
        if (FUNC_2(VAR_4, VAR_7,
                                    1 + VAR_9 % VAR_3,
                                    1 + VAR_9 % VAR_1) != 0) {
            FUNC_5("crypto_generichash_init()\n");
            return 1;
        }
        FUNC_4(VAR_4, VAR_5, VAR_9);
        FUNC_4(VAR_4, VAR_5, VAR_9);
        FUNC_4(VAR_4, VAR_5, VAR_9);
        if (FUNC_1(VAR_4, VAR_6,
                                     1 + VAR_9 % VAR_1) != 0) {
            FUNC_5("crypto_generichash_final() should have returned 0\n");
        }
        for (VAR_10 = 0; VAR_10 < 1 + VAR_9 % VAR_1; ++VAR_10) {
            FUNC_5("%02x", (unsigned int) VAR_6[VAR_10]);
        }
        FUNC_5("\n");
        if (FUNC_1(VAR_4, VAR_6,
                                     1 + VAR_9 % VAR_1) != -1) {
            FUNC_5("crypto_generichash_final() should have returned -1\n");
        }
    }

    FUNC_0(FUNC_2(VAR_4, VAR_7, sizeof VAR_7, 0U) == -1);
    FUNC_0(FUNC_2(VAR_4, VAR_7, sizeof VAR_7,
                                   VAR_1 + 1U) == -1);
    FUNC_0(FUNC_2(VAR_4, VAR_7, VAR_3 + 1U,
                                   sizeof VAR_6) == -1);
    FUNC_0(FUNC_2(VAR_4, VAR_7, 0U, sizeof VAR_6) == 0);
    FUNC_0(FUNC_2(VAR_4, VAR_7, 1U, sizeof VAR_6) == 0);
    FUNC_0(FUNC_2(VAR_4, ((void*)0), 1U, 0U) == -1);
    FUNC_0(FUNC_2(VAR_4, ((void*)0), VAR_2,
                                   1U) == 0);
    FUNC_0(FUNC_2(VAR_4, ((void*)0), VAR_2,
                                   0U) == -1);

    FUNC_6(VAR_4);

    return 0;
}
