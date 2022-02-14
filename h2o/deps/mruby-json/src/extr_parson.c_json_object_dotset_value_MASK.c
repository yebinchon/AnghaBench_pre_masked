
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int JSON_Value ;
typedef scalar_t__ JSON_Status ;
typedef int JSON_Object ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,char*,int *) ;
 int * FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (int *,char const*,int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 () ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (char const*,int) ;
 char* FUNC_7 (char const*,char) ;

JSON_Status FUNC_8(JSON_Object *VAR_1, const char *VAR_2, JSON_Value *VAR_3) {
    const char *VAR_4 = ((void*)0);
    char *VAR_5 = ((void*)0);
    JSON_Object *VAR_6 = ((void*)0);
    JSON_Value *VAR_7 = ((void*)0);
    if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_3 == ((void*)0)) {
        return VAR_0;
    }
    VAR_4 = FUNC_7(VAR_2, '.');
    if (VAR_4 == ((void*)0)) {
        return FUNC_2(VAR_1, VAR_2, VAR_3);
    } else {
        VAR_5 = FUNC_6(VAR_2, VAR_4 - VAR_2);
        VAR_6 = FUNC_1(VAR_1, VAR_5);
        if (VAR_6 == ((void*)0)) {
            VAR_7 = FUNC_4();
            if (VAR_7 == ((void*)0)) {
                FUNC_5(VAR_5);
                return VAR_0;
            }
            if (FUNC_0(VAR_1, VAR_5, VAR_7) == VAR_0) {
                FUNC_3(VAR_7);
                FUNC_5(VAR_5);
                return VAR_0;
            }
            VAR_6 = FUNC_1(VAR_1, VAR_5);
        }
        FUNC_5(VAR_5);
        return FUNC_8(VAR_6, VAR_4 + 1, VAR_3);
    }
}
