
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int JSON_Value ;


 int * FUNC_0 (char const**,int ) ;

JSON_Value * FUNC_1(const char *VAR_0) {
    if (VAR_0 == ((void*)0)) {
        return ((void*)0);
    }
    if (VAR_0[0] == '\xEF' && VAR_0[1] == '\xBB' && VAR_0[2] == '\xBF') {
        VAR_0 = VAR_0 + 3;
    }
    return FUNC_0((const char**)&VAR_0, 0);
}
