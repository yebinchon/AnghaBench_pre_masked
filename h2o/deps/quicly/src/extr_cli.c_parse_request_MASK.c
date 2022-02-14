
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* base; size_t len; } ;
typedef TYPE_1__ ptls_iovec_t ;


 int FUNC_0 (char*,char*) ;

__attribute__((used)) static int FUNC_1(ptls_iovec_t VAR_0, char **VAR_1, int *VAR_2)
{
    size_t VAR_3 = 0, VAR_4;

    FUNC_0("Request received: %s\n", VAR_0.base);
    for (VAR_3 = 0; VAR_3 != VAR_0.len; ++VAR_3)
        if (VAR_0.base[VAR_3] == ' ')
            goto EndOfMethod;
    return 0;

EndOfMethod:
    ++VAR_3;
    VAR_4 = VAR_3;
    for (; VAR_3 != VAR_0.len; ++VAR_3)
        if (VAR_0.base[VAR_3] == ' ' || VAR_0.base[VAR_3] == '\r' || VAR_0.base[VAR_3] == '\n')
            goto EndOfPath;
    return 0;

EndOfPath:
    *VAR_1 = (char *)(VAR_0.base + VAR_4);
    *VAR_2 = VAR_0.base[VAR_3] == ' ';
    VAR_0.base[VAR_3] = '\0';
    return 1;
}
