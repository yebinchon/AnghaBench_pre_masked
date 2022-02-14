
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int JSON_Value ;
typedef int JSON_Array ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char const**) ;
 int FUNC_1 (char const**) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int * FUNC_7 () ;
 int * FUNC_8 (char const**,size_t) ;

__attribute__((used)) static JSON_Value * FUNC_9(const char **VAR_1, size_t VAR_2) {
    JSON_Value *VAR_3 = FUNC_7(), *VAR_4 = ((void*)0);
    JSON_Array *VAR_5 = FUNC_6(VAR_3);
    if (!VAR_3 || **VAR_1 != '[') {
        return ((void*)0);
    }
    FUNC_0(VAR_1);
    FUNC_1(VAR_1);
    if (**VAR_1 == ']') {
        FUNC_0(VAR_1);
        return VAR_3;
    }
    while (**VAR_1 != '\0') {
        VAR_4 = FUNC_8(VAR_1, VAR_2);
        if (VAR_4 == ((void*)0)) {
            FUNC_5(VAR_3);
            return ((void*)0);
        }
        if (FUNC_2(VAR_5, VAR_4) == VAR_0) {
            FUNC_5(VAR_4);
            FUNC_5(VAR_3);
            return ((void*)0);
        }
        FUNC_1(VAR_1);
        if (**VAR_1 != ',') {
            break;
        }
        FUNC_0(VAR_1);
        FUNC_1(VAR_1);
    }
    FUNC_1(VAR_1);
    if (**VAR_1 != ']' ||
        FUNC_4(VAR_5, FUNC_3(VAR_5)) == VAR_0) {
            FUNC_5(VAR_3);
            return ((void*)0);
    }
    FUNC_0(VAR_1);
    return VAR_3;
}
