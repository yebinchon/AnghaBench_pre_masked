
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int h2o_iovec_t ;


 int FUNC_0 (char const*,int) ;

h2o_iovec_t FUNC_1(const char *VAR_0, size_t VAR_1)
{
    const char *VAR_2 = VAR_0 + VAR_1, *VAR_3 = VAR_2;

    while (--VAR_3 != VAR_0) {
        if (*VAR_3 == '.') {
            return FUNC_0(VAR_3 + 1, VAR_2 - (VAR_3 + 1));
        } else if (*VAR_3 == '/') {
            break;
        }
    }
    return FUNC_0(((void*)0), 0);
}
