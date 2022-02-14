
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
bool FUNC_0(const char *VAR_0) {
    while (*VAR_0 != '\0') {
        if (*VAR_0 != '/')
            return 0;
        VAR_0++;
        if (*VAR_0 == '/')
            return 0;
        while (*VAR_0 != '/' && *VAR_0 != '\0')
            VAR_0++;
    }
    return 1;
}
