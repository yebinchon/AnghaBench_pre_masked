
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,size_t) ;
 char* FUNC_1 (char const*,char) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*,char*) ;

__attribute__((used)) static size_t FUNC_4(const char *VAR_0, char *VAR_1)
{
    char *VAR_2 = ((void*)0);
    VAR_2 = FUNC_1(VAR_0, ':'); if (VAR_2) VAR_2 += 1;
    VAR_2 = FUNC_1(VAR_2, ','); if (VAR_2) VAR_2 += 1;
    VAR_2 = FUNC_1(VAR_2, ','); if (VAR_2) VAR_2 += 1;
    VAR_2 = FUNC_1(VAR_2, ','); if (VAR_2) VAR_2 += 1;
    VAR_2 = FUNC_1(VAR_2, ','); if (VAR_2) VAR_2 += 1;
    VAR_2 = FUNC_1(VAR_2, ','); if (VAR_2) VAR_2 += 1;
    VAR_2 = FUNC_1(VAR_2, ','); if (VAR_2) VAR_2 += 1;
    VAR_2 = FUNC_1(VAR_2, ','); if (VAR_2) VAR_2 += 1;
    VAR_2 = FUNC_1(VAR_2, ','); if (VAR_2) VAR_2 += 1;
    VAR_2 = FUNC_1(VAR_2, ','); if (VAR_2) VAR_2 += 1;
    if (VAR_2) {
        char *VAR_3 = VAR_2;
        size_t VAR_4 = 0;
        do {
            char *VAR_5 = FUNC_3(VAR_3, "\\N");
            if (VAR_5) {
                size_t VAR_6 = VAR_5 - VAR_3;
                FUNC_0(VAR_1+VAR_4, VAR_3, VAR_6);
                VAR_1[VAR_4 + VAR_6] = '\n';
                VAR_4 = VAR_6 + 1;
                VAR_3 = VAR_5 + 2;
            }
            else {
                size_t VAR_7 = FUNC_2(VAR_3);
                FUNC_0(VAR_1+VAR_4, VAR_3, VAR_7);
                if (VAR_1[VAR_4 + VAR_7 - 1] == '\n')
                    VAR_1[VAR_4 + VAR_7 - 1] = '\0';
                else
                    VAR_1[VAR_4 + VAR_7] = '\0';
                break;
            }
        } while(1);
        return FUNC_2(VAR_1) + 1;
    }
    return 0;
}
