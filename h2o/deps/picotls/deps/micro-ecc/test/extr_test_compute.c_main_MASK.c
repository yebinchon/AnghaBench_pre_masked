
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct uECC_Curve_t {int dummy; } ;
typedef int public_computed ;
typedef int public ;
typedef int private ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (char*) ;
 int VAR_0 ;
 int FUNC_4 (int *,int *,struct uECC_Curve_t const*) ;
 int FUNC_5 (int *,int *,struct uECC_Curve_t const*) ;
 struct uECC_Curve_t* FUNC_6 () ;
 struct uECC_Curve_t* FUNC_7 () ;
 struct uECC_Curve_t* FUNC_8 () ;
 struct uECC_Curve_t* FUNC_9 () ;
 struct uECC_Curve_t* FUNC_10 () ;
 int FUNC_11 (char*,int *,int) ;

int FUNC_12() {
    int VAR_1;
    int VAR_2;
    uint8_t VAR_3[32];
    uint8_t VAR_4[64];
    uint8_t VAR_5[64];

    int VAR_6;

    const struct uECC_Curve_t * VAR_7[5];
    int VAR_8 = 0;
    FUNC_3("Testing 256 random private key pairs\n");
    for (VAR_6 = 0; VAR_6 < VAR_8; ++VAR_6) {
        for (VAR_1 = 0; VAR_1 < 256; ++VAR_1) {
            FUNC_3(".");
            FUNC_0(VAR_0);

            FUNC_2(VAR_4, 0, sizeof(VAR_4));
            FUNC_2(VAR_5, 0, sizeof(VAR_5));

            if (!FUNC_5(VAR_4, VAR_3, VAR_7[VAR_6])) {
                FUNC_3("uECC_make_key() failed\n");
                continue;
            }

            if (!FUNC_4(VAR_3, VAR_5, VAR_7[VAR_6])) {
                FUNC_3("uECC_compute_public_key() failed\n");
            }

            if (FUNC_1(VAR_4, VAR_5, sizeof(VAR_4)) != 0) {
                FUNC_3("Computed and provided public keys are not identical!\n");
                FUNC_11("Computed public key = ", VAR_5, sizeof(VAR_5));
                FUNC_11("Provided public key = ", VAR_4, sizeof(VAR_4));
                FUNC_11("Private key = ", VAR_3, sizeof(VAR_3));
            }
        }

        FUNC_3("\n");
        FUNC_3("Testing private key = 0\n");

        FUNC_2(VAR_3, 0, sizeof(VAR_3));
        VAR_2 = FUNC_4(VAR_3, VAR_5, VAR_7[VAR_6]);
        if (VAR_2) {
            FUNC_3("uECC_compute_public_key() should have failed\n");
        }
        FUNC_3("\n");
    }

    return 0;
}
