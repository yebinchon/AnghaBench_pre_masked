
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; int base; } ;
typedef TYPE_1__ h2o_iovec_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int,char const*,...) ;

__attribute__((used)) static int FUNC_2(char *VAR_1, const char *VAR_2, const h2o_iovec_t *VAR_3, size_t VAR_4)
{
    char *VAR_5 = VAR_1;
    const h2o_iovec_t *VAR_6 = VAR_3;
    int VAR_7 = 0;
    while (VAR_4--) {
        if (VAR_7) {
            if (!FUNC_1(VAR_5, 2, FUNC_0("\r\n")))
                return 0;
            VAR_5 += 2;
        } else
            VAR_7 = 1;
        if (!FUNC_1(VAR_5, 2, FUNC_0("--")))
            return 0;
        VAR_5 += 2;
        if (!FUNC_1(VAR_5, VAR_0, VAR_2, VAR_0))
            return 0;
        VAR_5 += 20;
        if (!FUNC_1(VAR_5, 2, FUNC_0("\r\n")))
            return 0;
        VAR_5 += 2;
        if (!FUNC_1(VAR_5, VAR_6->len, VAR_6->base, VAR_6->len))
            return 0;
        VAR_5 += VAR_6->len;
        VAR_6++;
    }
    if (!FUNC_1(VAR_5, 4, FUNC_0("\r\n--")))
        return 0;
    VAR_5 += 4;
    if (!FUNC_1(VAR_5, VAR_0, VAR_2, VAR_0))
        return 0;
    VAR_5 += 20;
    if (!FUNC_1(VAR_5, 4, FUNC_0("--\r\n")))
        return 0;
    return 1;
}
