
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 char* FUNC_1 (char const*,char) ;
 scalar_t__ FUNC_2 (char const*,int *,int) ;

__attribute__((used)) static const char *FUNC_3(const char *VAR_0, const char **VAR_1, size_t *VAR_2) {
    const char *VAR_3 = VAR_0;
    if (VAR_3[0] != '$') {
        VAR_3 = FUNC_1(VAR_3,'$');
        if (VAR_3 == ((void*)0)) return ((void*)0);
    }

    *VAR_2 = (int)FUNC_2(VAR_3+1,((void*)0),10);
    VAR_3 = FUNC_1(VAR_3,'\r');
    FUNC_0(VAR_3);
    *VAR_1 = VAR_3+2;
    return VAR_3+2+(*VAR_2)+2;
}
