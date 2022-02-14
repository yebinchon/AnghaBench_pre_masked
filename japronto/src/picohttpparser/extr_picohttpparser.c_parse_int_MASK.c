
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;

__attribute__((used)) static const char *FUNC_1(const char *VAR_0, const char *VAR_1, int *VAR_2, int *VAR_3)
{
    int VAR_4;
    FUNC_0();
    if (!('0' <= *VAR_0 && *VAR_0 <= '9')) {
        *VAR_3 = -1;
        return ((void*)0);
    }
    VAR_4 = 0;
    for (;; ++VAR_0) {
        FUNC_0();
        if ('0' <= *VAR_0 && *VAR_0 <= '9') {
            VAR_4 = VAR_4 * 10 + *VAR_0 - '0';
        } else {
            break;
        }
    }

    *VAR_2 = VAR_4;
    return VAR_0;
}
