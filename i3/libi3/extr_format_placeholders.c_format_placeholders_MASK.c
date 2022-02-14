
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* name; char* value; } ;
typedef TYPE_1__ placeholder_t ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char*,char*) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (char*) ;

char *FUNC_4(char *VAR_0, placeholder_t *VAR_1, int VAR_2) {
    if (VAR_0 == ((void*)0))
        return ((void*)0);



    int VAR_3 = FUNC_3(VAR_0) + 1;
    for (char *VAR_4 = VAR_0; *VAR_4 != '\0'; VAR_4++) {
        for (int VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
            if (!FUNC_0(VAR_4, VAR_1[VAR_5].name))
                continue;

            VAR_3 = VAR_3 - FUNC_3(VAR_1[VAR_5].name) + FUNC_3(VAR_1[VAR_5].value);
            VAR_4 += FUNC_3(VAR_1[VAR_5].name) - 1;
            break;
        }
    }


    char VAR_6[VAR_3];
    char *VAR_7 = VAR_6;
    for (char *VAR_8 = VAR_0; *VAR_8 != '\0'; VAR_8++) {
        if (*VAR_8 != '%') {
            *(VAR_7++) = *VAR_8;
            continue;
        }

        bool VAR_9 = 0;
        for (int VAR_10 = 0; VAR_10 < VAR_2; VAR_10++) {
            if (!FUNC_0(VAR_8, VAR_1[VAR_10].name)) {
                continue;
            }

            VAR_9 = 1;
            VAR_7 += FUNC_1(VAR_7, "%s", VAR_1[VAR_10].value);
            VAR_8 += FUNC_3(VAR_1[VAR_10].name) - 1;
            break;
        }

        if (!VAR_9)
            *(VAR_7++) = *VAR_8;
    }

    *VAR_7 = '\0';
    return FUNC_2(VAR_6);
}
