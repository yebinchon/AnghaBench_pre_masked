
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long VAR_0 ;
 long VAR_1 ;
 long FUNC_0 (char const*,char**,int) ;

bool FUNC_1(const char *VAR_2, long *VAR_3, int VAR_4) {
    char *VAR_5 = ((void*)0);
    long VAR_6 = FUNC_0(VAR_2, &VAR_5, VAR_4);
    if (VAR_6 == VAR_1 || VAR_6 == VAR_0 || VAR_6 < 0 || (VAR_5 != ((void*)0) && *VAR_5 != '\0')) {
        *VAR_3 = VAR_6;
        return 0;
    }

    *VAR_3 = VAR_6;
    return 1;
}
