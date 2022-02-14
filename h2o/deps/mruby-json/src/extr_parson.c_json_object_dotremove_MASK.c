
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int JSON_Status ;
typedef int JSON_Object ;


 int VAR_0 ;
 int * FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char const*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char const*,int) ;
 char* FUNC_4 (char const*,char) ;

JSON_Status FUNC_5(JSON_Object *VAR_1, const char *VAR_2) {
    const char *VAR_3 = FUNC_4(VAR_2, '.');
    char *VAR_4 = ((void*)0);
    JSON_Object *VAR_5 = ((void*)0);
    if (VAR_3 == ((void*)0)) {
        return FUNC_1(VAR_1, VAR_2);
    } else {
        VAR_4 = FUNC_3(VAR_2, VAR_3 - VAR_2);
        VAR_5 = FUNC_0(VAR_1, VAR_4);
        FUNC_2(VAR_4);
        if (VAR_5 == ((void*)0)) {
            return VAR_0;
        }
        return FUNC_5(VAR_5, VAR_3 + 1);
    }
}
