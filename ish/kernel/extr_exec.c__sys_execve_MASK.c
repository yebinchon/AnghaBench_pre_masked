
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int filename ;
typedef int dword_t ;
typedef int addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (char const*) ;
 int FUNC_4 (char*,char*,char*) ;
 scalar_t__ FUNC_5 (int ,char*,int) ;
 int FUNC_6 (int ,char*,int ) ;

dword_t FUNC_7(addr_t VAR_4, addr_t VAR_5, addr_t VAR_6) {
    char VAR_7[VAR_1];
    if (FUNC_5(VAR_4, VAR_7, sizeof(VAR_7)))
        return VAR_2;

    int VAR_8 = VAR_3;
    char *VAR_9 = FUNC_2(VAR_0);
    if (VAR_9 == ((void*)0))
        goto err_free_argv;
    VAR_8 = FUNC_6(VAR_5, VAR_9, VAR_0);

    if (VAR_8 < 0)
        goto err_free_argv;
    char *VAR_10 = FUNC_2(VAR_0);
    if (VAR_10 == ((void*)0))
        goto err_free_envp;
    VAR_8 = FUNC_6(VAR_6, VAR_10, VAR_0);
    if (VAR_8 < 0)
        goto err_free_envp;

    FUNC_0("execve(\"%s\", {", VAR_7);
    const char *VAR_11 = VAR_9;
    while (*VAR_11 != '\0') {
        FUNC_0("\"%s\", ", VAR_11);
        VAR_11 += FUNC_3(VAR_11) + 1;
    }
    VAR_11 = VAR_10;
    while (*VAR_11 != '\0') {
        FUNC_0("\"%s\", ", VAR_11);
        VAR_11 += FUNC_3(VAR_11) + 1;
    }
    FUNC_0("})");

    return FUNC_4(VAR_7, VAR_9, VAR_10);

err_free_envp:
    FUNC_1(VAR_10);
err_free_argv:
    FUNC_1(VAR_9);
    return VAR_8;
}
