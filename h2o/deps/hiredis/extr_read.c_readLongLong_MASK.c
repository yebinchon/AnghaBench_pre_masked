
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static long long FUNC_0(char *VAR_0) {
    long long VAR_1 = 0;
    int VAR_2, VAR_3 = 1;
    char VAR_4;

    if (*VAR_0 == '-') {
        VAR_3 = -1;
        VAR_0++;
    } else if (*VAR_0 == '+') {
        VAR_3 = 1;
        VAR_0++;
    }

    while ((VAR_4 = *(VAR_0++)) != '\r') {
        VAR_2 = VAR_4 - '0';
        if (VAR_2 >= 0 && VAR_2 < 10) {
            VAR_1 *= 10;
            VAR_1 += VAR_2;
        } else {

            return -1;
        }
    }

    return VAR_3*VAR_1;
}
