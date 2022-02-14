
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ intmax_t ;
typedef int JSON_Value ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char const*,int) ;
 int * FUNC_1 (scalar_t__) ;
 int * FUNC_2 (double) ;
 double FUNC_3 (char const*,char**) ;
 scalar_t__ FUNC_4 (char const*,char**,int) ;

__attribute__((used)) static JSON_Value * FUNC_5(const char **VAR_3) {
    char *VAR_4;
    double VAR_5 = 0;
    VAR_2 = 0;
    VAR_5 = FUNC_3(*VAR_3, &VAR_4);
    if (VAR_2 || !FUNC_0(*VAR_3, VAR_4 - *VAR_3)) {
        return ((void*)0);
    }
    *VAR_3 = VAR_4;
    return FUNC_2(VAR_5);
}
