
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char** FUNC_0 (int,int) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static char **FUNC_2(char **VAR_0, char *VAR_1, char *VAR_2, char *VAR_3) {
    int VAR_4;
    for (VAR_4 = 0; VAR_0[VAR_4] != ((void*)0); VAR_4++)
        ;
    char **VAR_5 = FUNC_0(VAR_4 + 3, sizeof(char *));


    int VAR_6 = 0;
    bool VAR_7 = 0;
    for (int VAR_8 = 0; VAR_8 < VAR_4; ++VAR_8) {
        if (VAR_7) {
            VAR_7 = 0;
            continue;
        }
        if (!FUNC_1(VAR_0[VAR_8], VAR_1) ||
            (VAR_3 && !FUNC_1(VAR_0[VAR_8], VAR_3))) {
            if (VAR_2)
                VAR_7 = 1;
            continue;
        }
        VAR_5[VAR_6++] = VAR_0[VAR_8];
    }


    VAR_5[VAR_6++] = VAR_1;
    VAR_5[VAR_6] = VAR_2;

    return VAR_5;
}
