
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 char* FUNC_1 (char const*,size_t) ;

char *FUNC_2(const char *VAR_1, size_t VAR_2) {
    char *VAR_3 = FUNC_1(VAR_1, VAR_2);
    if (VAR_3 == ((void*)0))
        FUNC_0(VAR_0, "strndup()");
    return VAR_3;
}
