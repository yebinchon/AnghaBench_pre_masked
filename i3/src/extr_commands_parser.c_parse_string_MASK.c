
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (int,int) ;

char *FUNC_1(const char **VAR_0, bool VAR_1) {
    const char *VAR_2 = *VAR_0;

    if (**VAR_0 == '"') {
        VAR_2++;
        (*VAR_0)++;
        for (; **VAR_0 != '\0' && **VAR_0 != '"'; (*VAR_0)++)
            if (**VAR_0 == '\\' && *(*VAR_0 + 1) != '\0')
                (*VAR_0)++;
    } else {
        if (!VAR_1) {




            while (**VAR_0 != ';' && **VAR_0 != ',' &&
                   **VAR_0 != '\0' && **VAR_0 != '\r' &&
                   **VAR_0 != '\n')
                (*VAR_0)++;
        } else {



            while (**VAR_0 != ' ' && **VAR_0 != '\t' &&
                   **VAR_0 != ']' && **VAR_0 != ',' &&
                   **VAR_0 != ';' && **VAR_0 != '\r' &&
                   **VAR_0 != '\n' && **VAR_0 != '\0')
                (*VAR_0)++;
        }
    }
    if (*VAR_0 == VAR_2)
        return ((void*)0);

    char *VAR_3 = FUNC_0(*VAR_0 - VAR_2 + 1, 1);

    int VAR_4, VAR_5;
    for (VAR_4 = 0, VAR_5 = 0;
         VAR_4 < (*VAR_0 - VAR_2);
         VAR_4++, VAR_5++) {



        if (VAR_2[VAR_4] == '\\' && (VAR_2[VAR_4 + 1] == '"' || VAR_2[VAR_4 + 1] == '\\'))
            VAR_4++;
        VAR_3[VAR_5] = VAR_2[VAR_4];
    }

    return VAR_3;
}
