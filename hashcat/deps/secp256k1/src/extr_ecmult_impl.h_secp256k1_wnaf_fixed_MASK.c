
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int secp256k1_scalar ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int const*,int,int) ;
 scalar_t__ FUNC_2 (int const*) ;
 scalar_t__ FUNC_3 (int const*) ;

__attribute__((used)) static int FUNC_4(int *VAR_1, const secp256k1_scalar *VAR_2, int VAR_3) {
    int VAR_4 = 0;
    int VAR_5;
    int VAR_6;
    int VAR_7;
    const secp256k1_scalar *VAR_8 = VAR_2;

    if (FUNC_3(VAR_2)) {
        for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_3); VAR_5++) {
            VAR_1[VAR_5] = 0;
        }
        return 0;
    }

    if (FUNC_2(VAR_2)) {
        VAR_4 = 1;
    }

    VAR_1[0] = FUNC_1(VAR_8, 0, VAR_3) + VAR_4;


    VAR_7 = VAR_0 - (FUNC_0(VAR_3) - 1) * VAR_3;



    for (VAR_5 = FUNC_0(VAR_3) - 1; VAR_5 > 0; VAR_5--) {
        int VAR_9 = FUNC_1(VAR_8, VAR_5 * VAR_3, VAR_5 == FUNC_0(VAR_3)-1 ? VAR_7 : VAR_3);
        if(VAR_9 != 0) {
            break;
        }
        VAR_1[VAR_5] = 0;
    }
    VAR_6 = VAR_5;
    VAR_5 = 1;

    while (VAR_5 <= VAR_6) {
        int VAR_10 = FUNC_1(VAR_8, VAR_5 * VAR_3, VAR_5 == FUNC_0(VAR_3)-1 ? VAR_7 : VAR_3);
        if ((VAR_10 & 1) == 0) {
            VAR_1[VAR_5 - 1] -= (1 << VAR_3);
            VAR_1[VAR_5] = (VAR_10 + 1);
        } else {
            VAR_1[VAR_5] = VAR_10;
        }





        if (VAR_5 >= 2 && ((VAR_1[VAR_5 - 1] == 1 && VAR_1[VAR_5 - 2] < 0) || (VAR_1[VAR_5 - 1] == -1 && VAR_1[VAR_5 - 2] > 0))) {
            if (VAR_1[VAR_5 - 1] == 1) {
                VAR_1[VAR_5 - 2] += 1 << VAR_3;
            } else {
                VAR_1[VAR_5 - 2] -= 1 << VAR_3;
            }
            VAR_1[VAR_5 - 1] = 0;
        }
        ++VAR_5;
    }

    return VAR_4;
}
