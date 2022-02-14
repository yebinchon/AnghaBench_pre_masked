
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int JSON_Value ;


 int FUNC_0 (char const*,size_t) ;
 int * FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char const*,size_t) ;
 size_t FUNC_4 (char const*) ;

JSON_Value * FUNC_5(const char *VAR_0) {
    char *VAR_1 = ((void*)0);
    JSON_Value *VAR_2;
    size_t VAR_3 = 0;
    if (VAR_0 == ((void*)0)) {
        return ((void*)0);
    }
    VAR_3 = FUNC_4(VAR_0);
    if (!FUNC_0(VAR_0, VAR_3)) {
        return ((void*)0);
    }
    VAR_1 = FUNC_3(VAR_0, VAR_3);
    if (VAR_1 == ((void*)0)) {
        return ((void*)0);
    }
    VAR_2 = FUNC_1(VAR_1);
    if (VAR_2 == ((void*)0)) {
        FUNC_2(VAR_1);
    }
    return VAR_2;
}
