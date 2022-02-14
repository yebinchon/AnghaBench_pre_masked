
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (size_t) ;
 int FUNC_2 (int) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (char*,char const*,size_t) ;
 int FUNC_5 (char*,char*,size_t) ;
 size_t const FUNC_6 (char const*) ;

int FUNC_7(char **VAR_0, int VAR_1, const char **VAR_2, const size_t *VAR_3) {
    char *VAR_4 = ((void*)0);
    int VAR_5;
    size_t VAR_6;
    int VAR_7, VAR_8;


    if (VAR_0 == ((void*)0))
        return -1;


    VAR_7 = 1+FUNC_2(VAR_1)+2;
    for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
        VAR_6 = VAR_3 ? VAR_3[VAR_8] : FUNC_6(VAR_2[VAR_8]);
        VAR_7 += FUNC_1(VAR_6);
    }


    VAR_4 = FUNC_3(VAR_7+1);
    if (VAR_4 == ((void*)0))
        return -1;

    VAR_5 = FUNC_5(VAR_4,"*%d\r\n",VAR_1);
    for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
        VAR_6 = VAR_3 ? VAR_3[VAR_8] : FUNC_6(VAR_2[VAR_8]);
        VAR_5 += FUNC_5(VAR_4+VAR_5,"$%zu\r\n",VAR_6);
        FUNC_4(VAR_4+VAR_5,VAR_2[VAR_8],VAR_6);
        VAR_5 += VAR_6;
        VAR_4[VAR_5++] = '\r';
        VAR_4[VAR_5++] = '\n';
    }
    FUNC_0(VAR_5 == VAR_7);
    VAR_4[VAR_5] = '\0';

    *VAR_0 = VAR_4;
    return VAR_7;
}
