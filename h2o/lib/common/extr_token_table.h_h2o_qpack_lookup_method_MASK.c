
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_3__ {int len; int base; } ;
typedef TYPE_1__ h2o_iovec_t ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;

int32_t FUNC_2(h2o_iovec_t VAR_0, int *VAR_1)
{
    if (FUNC_1(VAR_0.base, VAR_0.len, FUNC_0("CONNECT"))) {
        *VAR_1 = 1;
        return 15;
    }
    if (FUNC_1(VAR_0.base, VAR_0.len, FUNC_0("DELETE"))) {
        *VAR_1 = 1;
        return 16;
    }
    if (FUNC_1(VAR_0.base, VAR_0.len, FUNC_0("GET"))) {
        *VAR_1 = 1;
        return 17;
    }
    if (FUNC_1(VAR_0.base, VAR_0.len, FUNC_0("HEAD"))) {
        *VAR_1 = 1;
        return 18;
    }
    if (FUNC_1(VAR_0.base, VAR_0.len, FUNC_0("OPTIONS"))) {
        *VAR_1 = 1;
        return 19;
    }
    if (FUNC_1(VAR_0.base, VAR_0.len, FUNC_0("POST"))) {
        *VAR_1 = 1;
        return 20;
    }
    if (FUNC_1(VAR_0.base, VAR_0.len, FUNC_0("PUT"))) {
        *VAR_1 = 1;
        return 21;
    }
    *VAR_1 = 0;
    return 15;
}
