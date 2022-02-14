
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const) ;

__attribute__((used)) static bool FUNC_1(const char *VAR_0) {
    for (int VAR_1 = 0; VAR_0[VAR_1] != '\0'; VAR_1++)
        if (!FUNC_0(VAR_0[VAR_1]))
            return 0;
    return 1;
}
