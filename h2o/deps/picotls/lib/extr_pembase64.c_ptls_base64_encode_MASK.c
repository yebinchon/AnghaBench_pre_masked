
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 char* VAR_0 ;
 int FUNC_0 (int const*,char*) ;

int FUNC_1(const uint8_t *VAR_1, size_t VAR_2, char *VAR_3)
{
    int VAR_4 = 0;
    int VAR_5 = 0;

    while ((VAR_2 - VAR_4) >= 3) {
        FUNC_0(VAR_1 + VAR_4, VAR_3 + VAR_5);
        VAR_4 += 3;
        VAR_5 += 4;
    }

    switch (VAR_2 - VAR_4) {
    case 0:
        break;
    case 1:
        VAR_3[VAR_5++] = VAR_0[VAR_1[VAR_4] >> 2];
        VAR_3[VAR_5++] = VAR_0[(VAR_1[VAR_4] & 3) << 4];
        VAR_3[VAR_5++] = '=';
        VAR_3[VAR_5++] = '=';
        break;
    case 2:
        VAR_3[VAR_5++] = VAR_0[VAR_1[VAR_4] >> 2];
        VAR_3[VAR_5++] = VAR_0[((VAR_1[VAR_4] & 3) << 4) | (VAR_1[VAR_4 + 1] >> 4)];
        VAR_3[VAR_5++] = VAR_0[((VAR_1[VAR_4 + 1] & 15) << 2)];
        VAR_3[VAR_5++] = '=';
        break;
    default:
        break;
    }
    VAR_3[VAR_5++] = 0;

    return VAR_5;
}
