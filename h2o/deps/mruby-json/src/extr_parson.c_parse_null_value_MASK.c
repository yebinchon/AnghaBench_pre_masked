
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int JSON_Value ;


 size_t FUNC_0 (char*) ;
 int * FUNC_1 () ;
 scalar_t__ FUNC_2 (char*,char const*,size_t) ;

__attribute__((used)) static JSON_Value * FUNC_3(const char **VAR_0) {
    size_t VAR_1 = FUNC_0("null");
    if (FUNC_2("null", *VAR_0, VAR_1) == 0) {
        *VAR_0 += VAR_1;
        return FUNC_1();
    }
    return ((void*)0);
}
