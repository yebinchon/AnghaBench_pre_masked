
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int JSON_Value ;
typedef int JSON_Status ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 scalar_t__ FUNC_2 (char*,int *) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (int const*) ;

JSON_Status FUNC_5(const JSON_Value *VAR_3, const char *VAR_4) {
    JSON_Status VAR_5 = VAR_2;
    FILE *VAR_6 = ((void*)0);
    char *VAR_7 = FUNC_4(VAR_3);
    if (VAR_7 == ((void*)0)) {
        return VAR_1;
    }
    VAR_6 = FUNC_1(VAR_4, "w");
    if (VAR_6 == ((void*)0)) {
        FUNC_3(VAR_7);
        return VAR_1;
    }
    if (FUNC_2(VAR_7, VAR_6) == VAR_0) {
        VAR_5 = VAR_1;
    }
    if (FUNC_0(VAR_6) == VAR_0) {
        VAR_5 = VAR_1;
    }
    FUNC_3(VAR_7);
    return VAR_5;
}
