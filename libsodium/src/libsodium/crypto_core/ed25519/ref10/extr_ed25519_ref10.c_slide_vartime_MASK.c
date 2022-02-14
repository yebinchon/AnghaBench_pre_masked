
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void
FUNC_0(signed char *VAR_0, const unsigned char *VAR_1)
{
    int VAR_2;
    int VAR_3;
    int VAR_4;
    int VAR_5;
    int VAR_6;

    for (VAR_2 = 0; VAR_2 < 256; ++VAR_2) {
        VAR_0[VAR_2] = 1 & (VAR_1[VAR_2 >> 3] >> (VAR_2 & 7));
    }
    for (VAR_2 = 0; VAR_2 < 256; ++VAR_2) {
        if (! VAR_0[VAR_2]) {
            continue;
        }
        for (VAR_3 = 1; VAR_3 <= 6 && VAR_2 + VAR_3 < 256; ++VAR_3) {
            if (! VAR_0[VAR_2 + VAR_3]) {
                continue;
            }
            VAR_5 = VAR_0[VAR_2 + VAR_3] << VAR_3;
            VAR_6 = VAR_0[VAR_2] + VAR_5;
            if (VAR_6 <= 15) {
                VAR_0[VAR_2] = VAR_6;
                VAR_0[VAR_2 + VAR_3] = 0;
            } else {
                VAR_6 = VAR_0[VAR_2] - VAR_5;
                if (VAR_6 < -15) {
                    break;
                }
                VAR_0[VAR_2] = VAR_6;
                for (VAR_4 = VAR_2 + VAR_3; VAR_4 < 256; ++VAR_4) {
                    if (! VAR_0[VAR_4]) {
                        VAR_0[VAR_4] = 1;
                        break;
                    }
                    VAR_0[VAR_4] = 0;
                }
            }
        }
    }
}
