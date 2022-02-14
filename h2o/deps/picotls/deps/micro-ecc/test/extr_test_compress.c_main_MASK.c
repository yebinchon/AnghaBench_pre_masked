
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct uECC_Curve_t {int dummy; } ;
typedef int public ;
typedef int decompressed_point ;
typedef int compressed_point ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int *,int *,struct uECC_Curve_t const*) ;
 int FUNC_5 (int *,int *,struct uECC_Curve_t const*) ;
 int FUNC_6 (int *,int *,struct uECC_Curve_t const*) ;
 struct uECC_Curve_t* FUNC_7 () ;
 struct uECC_Curve_t* FUNC_8 () ;
 struct uECC_Curve_t* FUNC_9 () ;
 struct uECC_Curve_t* FUNC_10 () ;
 struct uECC_Curve_t* FUNC_11 () ;
 int FUNC_12 (char*,int *,int) ;

int FUNC_13() {
    uint8_t VAR_2[64];
    uint8_t VAR_3[32];
    uint8_t VAR_4[33];
    uint8_t VAR_5[64];

    int VAR_6;
    int VAR_7;

    const struct uECC_Curve_t * VAR_8[5];
    int VAR_9 = 0;
    FUNC_3("Testing compression and decompression of %d random EC points\n",
           VAR_1);

    for (VAR_7 = 0; VAR_7 < VAR_9; ++VAR_7) {
        for (VAR_6 = 0; VAR_6 < VAR_1; ++VAR_6) {
            FUNC_3(".");
            FUNC_0(VAR_0);

            FUNC_2(VAR_2, 0, sizeof(VAR_2));
            FUNC_2(VAR_5, 0, sizeof(VAR_5));


            if (!FUNC_6(VAR_2, VAR_3, VAR_8[VAR_7])) {
                FUNC_3("uECC_make_key() failed\n");
                continue;
            }


            FUNC_4(VAR_2, VAR_4, VAR_8[VAR_7]);
            FUNC_5(VAR_4, VAR_5, VAR_8[VAR_7]);

            if (FUNC_1(VAR_2, VAR_5, sizeof(VAR_2)) != 0) {
                FUNC_3("Original and decompressed points are not identical!\n");
                FUNC_12("Original point =     ", VAR_2, sizeof(VAR_2));
                FUNC_12("Compressed point =   ", VAR_4, sizeof(VAR_4));
                FUNC_12("Decompressed point = ", VAR_5, sizeof(VAR_5));
            }
        }
        FUNC_3("\n");
    }

    return 0;
}
