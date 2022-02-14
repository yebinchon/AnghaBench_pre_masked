
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_4__ {scalar_t__ len; } ;
typedef TYPE_1__ h2o_iovec_t ;


 TYPE_1__ FUNC_0 (char const*,int) ;
 size_t FUNC_1 (char const*,int) ;
 char* FUNC_2 (char const*,char,int) ;

const char *FUNC_3(const char *VAR_0, size_t VAR_1, h2o_iovec_t *VAR_2, uint16_t *VAR_3)
{
    const char *VAR_4 = VAR_0, *VAR_5, *VAR_6 = VAR_0 + VAR_1;

    *VAR_3 = 65535;

    if (VAR_4 == VAR_6)
        return ((void*)0);

    if (*VAR_4 == '[') {

        ++VAR_4;
        if ((VAR_5 = FUNC_2(VAR_4, ']', VAR_6 - VAR_4)) == ((void*)0))
            return ((void*)0);
        *VAR_2 = FUNC_0(VAR_4, VAR_5 - VAR_4);
        VAR_4 = VAR_5 + 1;
    } else {
        for (VAR_5 = VAR_4; !(VAR_5 == VAR_6 || *VAR_5 == '/' || *VAR_5 == ':'); ++VAR_5)
            ;
        *VAR_2 = FUNC_0(VAR_4, VAR_5 - VAR_4);
        VAR_4 = VAR_5;
    }


    if (VAR_2->len == 0)
        return ((void*)0);


    if (VAR_4 != VAR_6 && *VAR_4 == ':') {
        size_t VAR_7;
        ++VAR_4;
        if ((VAR_5 = FUNC_2(VAR_4, '/', VAR_6 - VAR_4)) == ((void*)0))
            VAR_5 = VAR_6;
        if ((VAR_7 = FUNC_1(VAR_4, VAR_5 - VAR_4)) >= 65535)
            return ((void*)0);
        *VAR_3 = (uint16_t)VAR_7;
        VAR_4 = VAR_5;
    }

    return VAR_4;
}
