
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int JSON_Value ;
typedef scalar_t__ JSON_Status ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 size_t FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (int const*,char*,size_t) ;
 scalar_t__ FUNC_3 (size_t) ;

char * FUNC_4(const JSON_Value *VAR_1) {
    JSON_Status VAR_2 = VAR_0;
    size_t VAR_3 = FUNC_1(VAR_1);
    char *VAR_4 = ((void*)0);
    if (VAR_3 == 0) {
        return ((void*)0);
    }
    VAR_4 = (char*)FUNC_3(VAR_3);
    if (VAR_4 == ((void*)0)) {
        return ((void*)0);
    }
    VAR_2 = FUNC_2(VAR_1, VAR_4, VAR_3);
    if (VAR_2 == VAR_0) {
        FUNC_0(VAR_4);
        return ((void*)0);
    }
    return VAR_4;
}
