
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,size_t,char const*,size_t) ;

int FUNC_1(const char *VAR_0, size_t VAR_1, const char *VAR_2, size_t VAR_3)
{
    size_t VAR_4;


    if (VAR_1 < sizeof("\"\""))
        return 0;
    if (VAR_0[0] != '"' || VAR_0[VAR_1 - 1] != '"')
        return 0;
    for (VAR_4 = 1; VAR_4 < VAR_1 - 1; VAR_4++) {
        if (VAR_0[VAR_4] < 0x21 || VAR_0[VAR_4] == '"')
            return 0;
    }
    return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
}
