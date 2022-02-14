
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned char*,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (unsigned char*,size_t) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(unsigned char *VAR_0, size_t *VAR_1, int* VAR_2, int* VAR_3) {
    int VAR_4;
    int VAR_5[2], VAR_6[2], VAR_7[2], VAR_8[2], VAR_9[2], VAR_10[2];
    size_t VAR_11, VAR_12, VAR_13;
    int VAR_14;
    int VAR_15;

    *VAR_1 = 0;
    VAR_4 = FUNC_2(2) == 0;
    *VAR_2 = VAR_4;
    *VAR_3 = 0;
    VAR_14 = VAR_4 ? 0 : FUNC_4(10) == 0;

    for (VAR_15 = 0; VAR_15 < 2; VAR_15++) {

        VAR_5[VAR_15] = VAR_4 ? 1 : (FUNC_2(3) != 0);

        VAR_6[VAR_15] = VAR_5[VAR_15] ? FUNC_4(33) : 32 + FUNC_4(200) * FUNC_4(8) / 8;
        FUNC_0(VAR_6[VAR_15] <= 232);

        VAR_8[VAR_15] = (VAR_5[VAR_15] == 0 && VAR_6[VAR_15] == 32) ? 1 : (VAR_6[VAR_15] == 0 ? 0 : FUNC_2(1));

        VAR_9[VAR_15] = VAR_6[VAR_15] == 0 ? 0 : (VAR_8[VAR_15] ? 128 + FUNC_2(7) : 1 + FUNC_4(127));

        VAR_10[VAR_15] = VAR_4 ? ((VAR_6[VAR_15] == 0 || VAR_8[VAR_15]) ? 1 : 0) : (VAR_5[VAR_15] ? FUNC_4(3) : FUNC_4(300 - VAR_6[VAR_15]) * FUNC_4(8) / 8);
        if (VAR_10[VAR_15] > ((VAR_6[VAR_15] == 0 || VAR_8[VAR_15]) ? 1 : 0)) {
            *VAR_3 = 1;
        }
        FUNC_0(VAR_6[VAR_15] + VAR_10[VAR_15] <= 300);

        VAR_7[VAR_15] = VAR_6[VAR_15] + VAR_10[VAR_15] < 128 ? 0 : (VAR_6[VAR_15] + VAR_10[VAR_15] < 256 ? 1 : 2);
        if (!VAR_4) {

            int VAR_16 = FUNC_4(127 - VAR_7[VAR_15]) * FUNC_4(16) * FUNC_4(16) / 256;
            VAR_7[VAR_15] += VAR_16;
            if (VAR_16 != 0) {
                *VAR_3 = 1;
            }
        }
        FUNC_0(VAR_6[VAR_15] + VAR_10[VAR_15] + VAR_7[VAR_15] <= 427);
    }


    VAR_11 = 2 + VAR_7[0] + VAR_6[0] + VAR_10[0] + 2 + VAR_7[1] + VAR_6[1] + VAR_10[1];
    FUNC_0(VAR_11 <= 856);


    VAR_12 = (VAR_4 || VAR_14) ? 0 : FUNC_4(980 - VAR_11) * FUNC_4(8) / 8;
    if (VAR_12 != 0) {
        *VAR_3 = 1;
    }
    VAR_11 += VAR_12;
    FUNC_0(VAR_11 <= 980);


    VAR_13 = VAR_4 ? 0 : FUNC_4(990 - VAR_11) * FUNC_4(8) / 8;
    if (VAR_13 != 0) {
        *VAR_3 = 1;
    }
    FUNC_0(VAR_11 + VAR_13 <= 990);


    VAR_0[(*VAR_1)++] = 0x30;
    if (VAR_14) {

        VAR_0[(*VAR_1)++] = 0x80;
        *VAR_3 = 1;
    } else {
        int VAR_17 = VAR_11 < 128 ? 0 : (VAR_11 < 256 ? 1 : 2);
        if (!VAR_4) {
            int VAR_18 = FUNC_4(127 - VAR_17) * FUNC_4(16) * FUNC_4(16) / 256;
            VAR_17 += VAR_18;
            if (VAR_18 != 0) {
                *VAR_3 = 1;
            }
        }
        if (VAR_17 == 0) {

            VAR_0[(*VAR_1)++] = VAR_11;
        } else {

            VAR_0[(*VAR_1)++] = 128 + VAR_17;
            FUNC_1(VAR_0 + *VAR_1, VAR_17, VAR_11);
            *VAR_1 += VAR_17;
        }
        VAR_11 += VAR_17;
    }
    VAR_11 += 2;
    FUNC_0(VAR_11 + VAR_13 <= 1119);

    for (VAR_15 = 0; VAR_15 < 2; VAR_15++) {

        VAR_0[(*VAR_1)++] = 0x02;
        if (VAR_7[VAR_15] == 0) {

            VAR_0[(*VAR_1)++] = VAR_6[VAR_15] + VAR_10[VAR_15];
        } else {

            VAR_0[(*VAR_1)++] = 128 + VAR_7[VAR_15];
            FUNC_1(VAR_0 + *VAR_1, VAR_7[VAR_15], VAR_6[VAR_15] + VAR_10[VAR_15]);
            *VAR_1 += VAR_7[VAR_15];
        }

        while (VAR_10[VAR_15] > 0) {
            VAR_0[(*VAR_1)++] = 0x00;
            VAR_10[VAR_15]--;
        }
        if (VAR_6[VAR_15] == 32 && !VAR_5[VAR_15]) {

            int VAR_19;
            for (VAR_19 = 0; VAR_19 < 16; VAR_19++) {
                VAR_0[(*VAR_1)++] = 0xFF;
            }
            VAR_6[VAR_15] -= 16;
        }

        if (VAR_6[VAR_15] > 0) {
            VAR_0[(*VAR_1)++] = VAR_9[VAR_15];
            VAR_6[VAR_15]--;
        }

        FUNC_3(VAR_0 + *VAR_1, VAR_6[VAR_15]);
        *VAR_1 += VAR_6[VAR_15];
        VAR_6[VAR_15] = 0;
    }


    FUNC_3(VAR_0 + *VAR_1, VAR_12);
    *VAR_1 += VAR_12;


    if (VAR_14) {
        VAR_0[(*VAR_1)++] = 0;
        VAR_0[(*VAR_1)++] = 0;
        VAR_11 += 2;
    }
    FUNC_0(VAR_11 + VAR_13 <= 1121);


    FUNC_3(VAR_0 + *VAR_1, VAR_13);
    *VAR_1 += VAR_13;
    VAR_11 += VAR_13;
    FUNC_0(VAR_11 <= 1121);
    FUNC_0(VAR_11 == *VAR_1);
}
