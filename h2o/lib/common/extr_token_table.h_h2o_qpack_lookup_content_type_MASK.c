
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
    if (FUNC_1(VAR_0.base, VAR_0.len, FUNC_0("application/dns-message"))) {
        *VAR_1 = 1;
        return 44;
    }
    if (FUNC_1(VAR_0.base, VAR_0.len, FUNC_0("application/javascript"))) {
        *VAR_1 = 1;
        return 45;
    }
    if (FUNC_1(VAR_0.base, VAR_0.len, FUNC_0("application/json"))) {
        *VAR_1 = 1;
        return 46;
    }
    if (FUNC_1(VAR_0.base, VAR_0.len, FUNC_0("application/x-www-form-urlencoded"))) {
        *VAR_1 = 1;
        return 47;
    }
    if (FUNC_1(VAR_0.base, VAR_0.len, FUNC_0("image/gif"))) {
        *VAR_1 = 1;
        return 48;
    }
    if (FUNC_1(VAR_0.base, VAR_0.len, FUNC_0("image/jpeg"))) {
        *VAR_1 = 1;
        return 49;
    }
    if (FUNC_1(VAR_0.base, VAR_0.len, FUNC_0("image/png"))) {
        *VAR_1 = 1;
        return 50;
    }
    if (FUNC_1(VAR_0.base, VAR_0.len, FUNC_0("text/css"))) {
        *VAR_1 = 1;
        return 51;
    }
    if (FUNC_1(VAR_0.base, VAR_0.len, FUNC_0("text/html; charset=utf-8"))) {
        *VAR_1 = 1;
        return 52;
    }
    if (FUNC_1(VAR_0.base, VAR_0.len, FUNC_0("text/plain"))) {
        *VAR_1 = 1;
        return 53;
    }
    if (FUNC_1(VAR_0.base, VAR_0.len, FUNC_0("text/plain;charset=utf-8"))) {
        *VAR_1 = 1;
        return 54;
    }
    *VAR_1 = 0;
    return 44;
}
