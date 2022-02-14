
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char const*) ;

__attribute__((used)) static size_t FUNC_1(const char *VAR_0) {
    const char *VAR_1 = VAR_0;
    size_t VAR_2;
    do {
        VAR_2 = FUNC_0(VAR_1);
        VAR_1 += VAR_2 + 1;
    } while (VAR_2 != 0);
    return VAR_1 - VAR_0;
}
