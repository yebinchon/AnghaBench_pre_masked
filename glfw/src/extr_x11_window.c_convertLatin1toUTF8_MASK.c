
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (size_t,int) ;
 int FUNC_1 (char*,char const) ;

__attribute__((used)) static char* FUNC_2(const char* VAR_0)
{
    size_t VAR_1 = 1;
    const char* VAR_2;

    for (VAR_2 = VAR_0; *VAR_2; VAR_2++)
        VAR_1 += (*VAR_2 & 0x80) ? 2 : 1;

    char* VAR_3 = FUNC_0(VAR_1, 1);
    char* VAR_4 = VAR_3;

    for (VAR_2 = VAR_0; *VAR_2; VAR_2++)
        VAR_4 += FUNC_1(VAR_4, *VAR_2);

    return VAR_3;
}
