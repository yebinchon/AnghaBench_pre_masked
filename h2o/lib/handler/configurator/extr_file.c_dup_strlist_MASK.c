
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char** FUNC_0 (int) ;

__attribute__((used)) static const char **FUNC_1(const char **VAR_0)
{
    size_t VAR_1;
    const char **VAR_2;

    for (VAR_1 = 0; VAR_0[VAR_1] != ((void*)0); ++VAR_1)
        ;
    VAR_2 = FUNC_0(sizeof(*VAR_2) * (VAR_1 + 1));
    for (VAR_1 = 0; VAR_0[VAR_1] != ((void*)0); ++VAR_1)
        VAR_2[VAR_1] = VAR_0[VAR_1];
    VAR_2[VAR_1] = ((void*)0);

    return VAR_2;
}
