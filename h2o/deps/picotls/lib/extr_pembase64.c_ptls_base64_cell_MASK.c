
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 char* VAR_0 ;

__attribute__((used)) static void FUNC_0(const uint8_t *VAR_1, char *VAR_2)
{
    int VAR_3[4];

    VAR_3[0] = VAR_1[0] >> 2;
    VAR_3[1] = ((VAR_1[0] & 3) << 4) | (VAR_1[1] >> 4);
    VAR_3[2] = ((VAR_1[1] & 15) << 2) | (VAR_1[2] >> 6);
    VAR_3[3] = VAR_1[2] & 63;

    for (int VAR_4 = 0; VAR_4 < 4; VAR_4++) {
        VAR_2[VAR_4] = VAR_0[VAR_3[VAR_4]];
    }
}
