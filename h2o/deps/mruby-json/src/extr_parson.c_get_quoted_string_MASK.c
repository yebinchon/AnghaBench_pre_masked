
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ JSON_Status ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (char const*,size_t) ;
 scalar_t__ FUNC_1 (char const**) ;

__attribute__((used)) static char * FUNC_2(const char **VAR_1) {
    const char *VAR_2 = *VAR_1;
    size_t VAR_3 = 0;
    JSON_Status VAR_4 = FUNC_1(VAR_1);
    if (VAR_4 != VAR_0) {
        return ((void*)0);
    }
    VAR_3 = *VAR_1 - VAR_2 - 2;
    return FUNC_0(VAR_2 + 1, VAR_3);
}
