
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,char const*) ;
 scalar_t__ FUNC_1 (char const*) ;

__attribute__((used)) static int FUNC_2(char *VAR_0, const char *VAR_1) {
    if (VAR_0 == ((void*)0)) {
        return (int)FUNC_1(VAR_1);
    }
    return FUNC_0(VAR_0, "%s", VAR_1);
}
