
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int JSON_Value ;
typedef int JSON_Object ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char const**) ;
 int FUNC_1 (char const**) ;
 char* FUNC_2 (char const**) ;
 scalar_t__ FUNC_3 (int *,char*,int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 int * FUNC_8 () ;
 int * FUNC_9 (char const**,size_t) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static JSON_Value * FUNC_11(const char **VAR_1, size_t VAR_2) {
    JSON_Value *VAR_3 = FUNC_8(), *VAR_4 = ((void*)0);
    JSON_Object *VAR_5 = FUNC_7(VAR_3);
    char *VAR_6 = ((void*)0);
    if (VAR_3 == ((void*)0) || **VAR_1 != '{') {
        return ((void*)0);
    }
    FUNC_0(VAR_1);
    FUNC_1(VAR_1);
    if (**VAR_1 == '}') {
        FUNC_0(VAR_1);
        return VAR_3;
    }
    while (**VAR_1 != '\0') {
        VAR_6 = FUNC_2(VAR_1);
        if (VAR_6 == ((void*)0)) {
            FUNC_6(VAR_3);
            return ((void*)0);
        }
        FUNC_1(VAR_1);
        if (**VAR_1 != ':') {
            FUNC_10(VAR_6);
            FUNC_6(VAR_3);
            return ((void*)0);
        }
        FUNC_0(VAR_1);
        VAR_4 = FUNC_9(VAR_1, VAR_2);
        if (VAR_4 == ((void*)0)) {
            FUNC_10(VAR_6);
            FUNC_6(VAR_3);
            return ((void*)0);
        }
        if (FUNC_3(VAR_5, VAR_6, VAR_4) == VAR_0) {
            FUNC_10(VAR_6);
            FUNC_6(VAR_4);
            FUNC_6(VAR_3);
            return ((void*)0);
        }
        FUNC_10(VAR_6);
        FUNC_1(VAR_1);
        if (**VAR_1 != ',') {
            break;
        }
        FUNC_0(VAR_1);
        FUNC_1(VAR_1);
    }
    FUNC_1(VAR_1);
    if (**VAR_1 != '}' ||
        FUNC_5(VAR_5, FUNC_4(VAR_5)) == VAR_0) {
            FUNC_6(VAR_3);
            return ((void*)0);
    }
    FUNC_0(VAR_1);
    return VAR_3;
}
