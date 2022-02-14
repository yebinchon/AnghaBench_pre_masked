
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int JSON_Value ;


 int * FUNC_0 (char const**,int ) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*) ;
 int FUNC_3 (char*,char*,char*) ;

JSON_Value * FUNC_4(const char *VAR_0) {
    JSON_Value *VAR_1 = ((void*)0);
    char *VAR_2 = ((void*)0), *VAR_3 = ((void*)0);
    VAR_2 = FUNC_2(VAR_0);
    if (VAR_2 == ((void*)0)) {
        return ((void*)0);
    }
    FUNC_3(VAR_2, "/*", "*/");
    FUNC_3(VAR_2, "//", "\n");
    VAR_3 = VAR_2;
    VAR_1 = FUNC_0((const char**)&VAR_3, 0);
    FUNC_1(VAR_2);
    return VAR_1;
}
