
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 scalar_t__ FUNC_0 (char const*,char const*,size_t) ;

size_t FUNC_1(const char *VAR_1, size_t VAR_2, const char *VAR_3, size_t VAR_4)
{

    if (VAR_2 >= VAR_4) {
        size_t VAR_5, VAR_6 = VAR_2 - VAR_4 + 1;
        if (VAR_4 == 0)
            return 0;
        for (VAR_5 = 0; VAR_5 != VAR_6; ++VAR_5)
            if (VAR_1[VAR_5] == VAR_3[0] && FUNC_0(VAR_1 + VAR_5 + 1, VAR_3 + 1, VAR_4 - 1) == 0)
                return VAR_5;
    }
    return VAR_0;
}
