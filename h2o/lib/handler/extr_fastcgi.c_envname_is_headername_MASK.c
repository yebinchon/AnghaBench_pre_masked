
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ len; char* base; } ;
typedef TYPE_1__ h2o_iovec_t ;


 char const FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char*,char*,int) ;

__attribute__((used)) static int FUNC_2(const h2o_iovec_t *VAR_0, const h2o_iovec_t *VAR_1)
{
    const char *VAR_2, *VAR_3, *VAR_4;

    if (VAR_0->len != 5 + VAR_1->len)
        return 0;
    if (FUNC_1(VAR_0->base, "HTTP_", 5) != 0)
        return 0;
    for (VAR_2 = VAR_0->base + 5, VAR_3 = VAR_1->base, VAR_4 = VAR_3 + VAR_1->len; VAR_3 < VAR_4; ++VAR_2, ++VAR_3)
        if (*VAR_2 != FUNC_0(*VAR_3))
            return 0;
    return 1;
}
