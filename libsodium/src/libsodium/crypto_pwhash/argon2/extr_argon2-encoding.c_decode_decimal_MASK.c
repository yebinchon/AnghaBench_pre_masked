
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static const char *
FUNC_0(const char *VAR_1, unsigned long *VAR_2)
{
    const char *VAR_3;
    unsigned long VAR_4;

    VAR_4 = 0;
    for (VAR_3 = VAR_1;; VAR_1++) {
        int VAR_5;

        VAR_5 = *VAR_1;
        if (VAR_5 < '0' || VAR_5 > '9') {
            break;
        }
        VAR_5 -= '0';
        if (VAR_4 > (VAR_0 / 10)) {
            return ((void*)0);
        }
        VAR_4 *= 10;
        if ((unsigned long) VAR_5 > (VAR_0 - VAR_4)) {
            return ((void*)0);
        }
        VAR_4 += (unsigned long) VAR_5;
    }
    if (VAR_1 == VAR_3 || (*VAR_3 == '0' && VAR_1 != (VAR_3 + 1))) {
        return ((void*)0);
    }
    *VAR_2 = VAR_4;
    return VAR_1;
}
