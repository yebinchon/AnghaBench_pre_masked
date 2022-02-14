
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct uECC_Curve_t {int dummy; } ;
typedef int hash ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int FUNC_3 (int *,int *,struct uECC_Curve_t const*) ;
 struct uECC_Curve_t* FUNC_4 () ;
 struct uECC_Curve_t* FUNC_5 () ;
 struct uECC_Curve_t* FUNC_6 () ;
 struct uECC_Curve_t* FUNC_7 () ;
 struct uECC_Curve_t* FUNC_8 () ;
 int FUNC_9 (int *,int *,int,int *,struct uECC_Curve_t const*) ;
 int FUNC_10 (int *,int *,int,int *,struct uECC_Curve_t const*) ;

int FUNC_11() {
    int VAR_1, VAR_2;
    uint8_t VAR_3[32] = {0};
    uint8_t VAR_4[64] = {0};
    uint8_t VAR_5[32] = {0};
    uint8_t VAR_6[64] = {0};

    const struct uECC_Curve_t * VAR_7[5];
    int VAR_8 = 0;
    FUNC_2("Testing 256 signatures\n");
    for (VAR_2 = 0; VAR_2 < VAR_8; ++VAR_2) {
        for (VAR_1 = 0; VAR_1 < 256; ++VAR_1) {
            FUNC_2(".");
            FUNC_0(VAR_0);

            if (!FUNC_3(VAR_4, VAR_3, VAR_7[VAR_2])) {
                FUNC_2("uECC_make_key() failed\n");
                return 1;
            }
            FUNC_1(VAR_5, VAR_4, sizeof(VAR_5));

            if (!FUNC_9(VAR_3, VAR_5, sizeof(VAR_5), VAR_6, VAR_7[VAR_2])) {
                FUNC_2("uECC_sign() failed\n");
                return 1;
            }

            if (!FUNC_10(VAR_4, VAR_5, sizeof(VAR_5), VAR_6, VAR_7[VAR_2])) {
                FUNC_2("uECC_verify() failed\n");
                return 1;
            }
        }
        FUNC_2("\n");
    }

    return 0;
}
