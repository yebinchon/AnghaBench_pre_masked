
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char*,char const*,size_t) ;
 char* FUNC_2 (char*,char const*) ;

__attribute__((used)) static void FUNC_3(char *VAR_0, const char *VAR_1, const char *VAR_2) {
    int VAR_3 = 0, VAR_4 = 0;
    size_t VAR_5;
    char *VAR_6 = ((void*)0), VAR_7;
    size_t VAR_8 = FUNC_0(VAR_1);
    size_t VAR_9 = FUNC_0(VAR_2);
    if (VAR_8 == 0 || VAR_9 == 0) {
        return;
    }
    while ((VAR_7 = *VAR_0) != '\0') {
        if (VAR_7 == '\\' && !VAR_4) {
            VAR_4 = 1;
            VAR_0++;
            continue;
        } else if (VAR_7 == '\"' && !VAR_4) {
            VAR_3 = !VAR_3;
        } else if (!VAR_3 && FUNC_1(VAR_0, VAR_1, VAR_8) == 0) {
            for(VAR_5 = 0; VAR_5 < VAR_8; VAR_5++) {
                VAR_0[VAR_5] = ' ';
            }
            VAR_0 = VAR_0 + VAR_8;
            VAR_6 = FUNC_2(VAR_0, VAR_2);
            if (!VAR_6) {
                return;
            }
            for (VAR_5 = 0; VAR_5 < (VAR_6 - VAR_0) + VAR_9; VAR_5++) {
                VAR_0[VAR_5] = ' ';
            }
            VAR_0 = VAR_6 + VAR_9 - 1;
        }
        VAR_4 = 0;
        VAR_0++;
    }
}
