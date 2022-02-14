
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int h2o_iovec_t ;


 int FUNC_0 (char const*,int) ;
 int FUNC_1 (char const) ;

h2o_iovec_t FUNC_2(const char *VAR_0, size_t VAR_1)
{
    const char *VAR_2 = VAR_0 + VAR_1;

    while (VAR_0 != VAR_2) {
        if (!FUNC_1(*VAR_0))
            break;
        ++VAR_0;
    }
    while (VAR_0 != VAR_2) {
        if (!FUNC_1(VAR_2[-1]))
            break;
        --VAR_2;
    }
    return FUNC_0(VAR_0, VAR_2 - VAR_0);
}
