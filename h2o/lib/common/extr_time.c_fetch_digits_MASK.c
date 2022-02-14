
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(const char *VAR_0, size_t VAR_1)
{
    int VAR_2 = 0;
    for (; VAR_1 != 0; ++VAR_0, --VAR_1) {
        if (!('0' <= *VAR_0 && *VAR_0 <= '9'))
            return -1;
        VAR_2 = VAR_2 * 10 + *VAR_0 - '0';
    }
    return VAR_2;
}
