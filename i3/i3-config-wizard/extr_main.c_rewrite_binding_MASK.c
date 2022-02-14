
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int n; TYPE_2__* array; } ;
typedef TYPE_1__ cmdp_token_ptr ;
struct TYPE_6__ {char* name; int * identifier; } ;
typedef TYPE_2__ cmdp_token ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (TYPE_2__ const*) ;
 int FUNC_2 (int *,long) ;
 int FUNC_3 (int *,char*) ;
 char* FUNC_4 (int,int) ;
 size_t VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (char const*,char*) ;
 int FUNC_6 (char const*) ;
 scalar_t__ FUNC_7 (char const*,char*,int) ;
 long FUNC_8 (char const*,char**,int) ;
 TYPE_1__* VAR_7 ;

__attribute__((used)) static char *FUNC_9(const char *VAR_8) {
    VAR_5 = VAR_1;
    VAR_6 = 1;

    const char *VAR_9 = VAR_8;
    const size_t VAR_10 = FUNC_6(VAR_8);
    int VAR_11;
    const cmdp_token *VAR_12;
    char *VAR_13 = ((void*)0);



    while ((size_t)(VAR_9 - VAR_8) <= VAR_10) {


        while ((*VAR_9 == ' ' || *VAR_9 == '\t') && *VAR_9 != '\0')
            VAR_9++;



        cmdp_token_ptr *VAR_14 = &(VAR_7[VAR_5]);
        for (VAR_11 = 0; VAR_11 < VAR_14->n; VAR_11++) {
            VAR_12 = &(VAR_14->array[VAR_11]);


            if (VAR_12->name[0] == '\'') {
                if (FUNC_7(VAR_9, VAR_12->name + 1, FUNC_6(VAR_12->name) - 1) == 0) {
                    if (VAR_12->identifier != ((void*)0))
                        FUNC_3(VAR_12->identifier, VAR_12->name + 1);
                    VAR_9 += FUNC_6(VAR_12->name) - 1;
                    if ((VAR_13 = FUNC_1(VAR_12)) != ((void*)0))
                        return VAR_13;
                    break;
                }
                continue;
            }

            if (FUNC_5(VAR_12->name, "number") == 0) {

                char *VAR_15 = ((void*)0);
                VAR_4 = 0;
                long int VAR_16 = FUNC_8(VAR_9, &VAR_15, 10);
                if ((VAR_4 == VAR_0 && (VAR_16 == VAR_3 || VAR_16 == VAR_2)) ||
                    (VAR_4 != 0 && VAR_16 == 0))
                    continue;


                if (VAR_15 == VAR_9)
                    continue;

                if (VAR_12->identifier != ((void*)0))
                    FUNC_2(VAR_12->identifier, VAR_16);


                VAR_9 = VAR_15;
                if ((VAR_13 = FUNC_1(VAR_12)) != ((void*)0))
                    return VAR_13;
                break;
            }

            if (FUNC_5(VAR_12->name, "string") == 0 ||
                FUNC_5(VAR_12->name, "word") == 0) {
                const char *VAR_17 = VAR_9;

                if (*VAR_9 == '"') {
                    VAR_17++;
                    VAR_9++;
                    while (*VAR_9 != '\0' && (*VAR_9 != '"' || *(VAR_9 - 1) == '\\'))
                        VAR_9++;
                } else {
                    if (VAR_12->name[0] == 's') {
                        while (*VAR_9 != '\0' && *VAR_9 != '\r' && *VAR_9 != '\n')
                            VAR_9++;
                    } else {



                        while (*VAR_9 != ' ' && *VAR_9 != '\t' &&
                               *VAR_9 != ']' && *VAR_9 != ',' &&
                               *VAR_9 != ';' && *VAR_9 != '\r' &&
                               *VAR_9 != '\n' && *VAR_9 != '\0')
                            VAR_9++;
                    }
                }
                if (VAR_9 != VAR_17) {
                    char *VAR_18 = FUNC_4(VAR_9 - VAR_17 + 1, 1);

                    int VAR_19, VAR_20;
                    for (VAR_19 = 0, VAR_20 = 0;
                         VAR_19 < (VAR_9 - VAR_17);
                         VAR_19++, VAR_20++) {



                        if (VAR_17[VAR_19] == '\\' && VAR_17[VAR_19 + 1] == '"')
                            VAR_19++;
                        VAR_18[VAR_20] = VAR_17[VAR_19];
                    }
                    if (VAR_12->identifier)
                        FUNC_3(VAR_12->identifier, VAR_18);
                    FUNC_0(VAR_18);


                    if (*VAR_9 == '"')
                        VAR_9++;
                    if ((VAR_13 = FUNC_1(VAR_12)) != ((void*)0))
                        return VAR_13;
                    break;
                }
            }

            if (FUNC_5(VAR_12->name, "end") == 0) {

                if (*VAR_9 == '\0' || *VAR_9 == '\n' || *VAR_9 == '\r') {
                    if ((VAR_13 = FUNC_1(VAR_12)) != ((void*)0))
                        return VAR_13;





                    VAR_9++;
                    break;
                }
            }
        }
    }

    return ((void*)0);
}
