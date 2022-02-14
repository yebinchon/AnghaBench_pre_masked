
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int JSON_Value ;
typedef int JSON_Object ;


 int * FUNC_0 (int const*,char const*) ;
 int FUNC_1 (int const*,char const*,int) ;
 int * FUNC_2 (int ) ;
 char* FUNC_3 (char const*,char) ;

JSON_Value * FUNC_4(const JSON_Object *VAR_0, const char *VAR_1) {
    const char *VAR_2 = FUNC_3(VAR_1, '.');
    if (!VAR_2) {
        return FUNC_0(VAR_0, VAR_1);
    }
    VAR_0 = FUNC_2(FUNC_1(VAR_0, VAR_1, VAR_2 - VAR_1));
    return FUNC_4(VAR_0, VAR_2 + 1);
}
