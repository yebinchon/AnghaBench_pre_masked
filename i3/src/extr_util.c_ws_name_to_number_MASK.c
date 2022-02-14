
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long VAR_0 ;
 long VAR_1 ;
 long FUNC_0 (char const*,char**,int) ;

long FUNC_1(const char *VAR_2) {

    char *VAR_3 = ((void*)0);
    long VAR_4 = FUNC_0(VAR_2, &VAR_3, 10);
    if (VAR_4 == VAR_1 ||
        VAR_4 == VAR_0 ||
        VAR_4 < 0 ||
        VAR_3 == VAR_2) {
        VAR_4 = -1;
    }

    return VAR_4;
}
