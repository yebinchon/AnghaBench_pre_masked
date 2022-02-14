
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,char*) ;

int FUNC_1(int VAR_0, char** VAR_1, char *VAR_2) {
    char** VAR_3 = VAR_1 + VAR_0;
    VAR_1++;
    if (VAR_1 == VAR_3) {
        return 1;
    }
    while (VAR_1 != ((void*)0) && VAR_1 != VAR_3) {
        if (FUNC_0(*VAR_1, VAR_2) == 0) {
            return 1;
        }
        VAR_1++;
    }
    return 0;
}
