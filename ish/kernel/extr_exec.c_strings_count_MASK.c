
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*) ;

__attribute__((used)) static unsigned FUNC_1(const char *VAR_0) {
    unsigned VAR_1 = 0;
    while (*VAR_0 != '\0') {
        VAR_0 += FUNC_0(VAR_0) + 1;
        VAR_1++;
    }
    return VAR_1;
}
