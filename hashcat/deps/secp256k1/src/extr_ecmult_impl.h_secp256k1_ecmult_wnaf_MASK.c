
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wnaf ;
typedef int secp256k1_scalar ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int*,int ,int) ;
 unsigned int FUNC_3 (int *,int,int) ;
 int FUNC_4 (int *,int,int) ;
 int FUNC_5 (int *,int *) ;

__attribute__((used)) static int FUNC_6(int *VAR_0, int VAR_1, const secp256k1_scalar *VAR_2, int VAR_3) {
    secp256k1_scalar VAR_4;
    int VAR_5 = -1;
    int VAR_6 = 0;
    int VAR_7 = 1;
    int VAR_8 = 0;

    FUNC_1(VAR_0 != ((void*)0));
    FUNC_1(0 <= VAR_1 && VAR_1 <= 256);
    FUNC_1(VAR_2 != ((void*)0));
    FUNC_1(2 <= VAR_3 && VAR_3 <= 31);

    FUNC_2(VAR_0, 0, VAR_1 * sizeof(VAR_0[0]));

    VAR_4 = *VAR_2;
    if (FUNC_3(&VAR_4, 255, 1)) {
        FUNC_5(&VAR_4, &VAR_4);
        VAR_7 = -1;
    }

    while (VAR_6 < VAR_1) {
        int VAR_9;
        int VAR_10;
        if (FUNC_3(&VAR_4, VAR_6, 1) == (unsigned int)VAR_8) {
            VAR_6++;
            continue;
        }

        VAR_9 = VAR_3;
        if (VAR_9 > VAR_1 - VAR_6) {
            VAR_9 = VAR_1 - VAR_6;
        }

        VAR_10 = FUNC_4(&VAR_4, VAR_6, VAR_9) + VAR_8;

        VAR_8 = (VAR_10 >> (VAR_3-1)) & 1;
        VAR_10 -= VAR_8 << VAR_3;

        VAR_0[VAR_6] = VAR_7 * VAR_10;
        VAR_5 = VAR_6;

        VAR_6 += VAR_9;
    }






    return VAR_5 + 1;
}
