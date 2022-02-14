
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
    if (FUNC_1(VAR_0.base, VAR_0.len, FUNC_0("max-age=0"))) {
        *VAR_1 = 1;
        return 36;
    }
    if (FUNC_1(VAR_0.base, VAR_0.len, FUNC_0("max-age=2592000"))) {
        *VAR_1 = 1;
        return 37;
    }
    if (FUNC_1(VAR_0.base, VAR_0.len, FUNC_0("max-age=604800"))) {
        *VAR_1 = 1;
        return 38;
    }
    if (FUNC_1(VAR_0.base, VAR_0.len, FUNC_0("no-cache"))) {
        *VAR_1 = 1;
        return 39;
    }
    if (FUNC_1(VAR_0.base, VAR_0.len, FUNC_0("no-store"))) {
        *VAR_1 = 1;
        return 40;
    }
    if (FUNC_1(VAR_0.base, VAR_0.len, FUNC_0("public, max-age=31536000"))) {
        *VAR_1 = 1;
        return 41;
    }
    *VAR_1 = 0;
    return 36;
}
