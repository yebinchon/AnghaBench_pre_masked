
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_0 ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*,char const*,int) ;
 char* FUNC_3 (char const*,char) ;

__attribute__((used)) static char *FUNC_4(const char *VAR_1)
{
    const char *VAR_2 = FUNC_3(VAR_1, '/');
    char *VAR_3;

    if (VAR_2 == ((void*)0)) {
        VAR_0 = 0;
        FUNC_0("dirname: no slash in given path:%s", VAR_1);
    }
    if ((VAR_3 = FUNC_1(VAR_2 + 1 - VAR_1)) == ((void*)0))
        FUNC_0("no memory");
    FUNC_2(VAR_3, VAR_1, VAR_2 - VAR_1);
    VAR_3[VAR_2 - VAR_1] = '\0';
    return VAR_3;
}
