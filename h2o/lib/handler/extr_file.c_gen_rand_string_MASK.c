
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; char* base; } ;
typedef TYPE_1__ h2o_iovec_t ;
typedef int alphanum ;


 int FUNC_0 () ;

__attribute__((used)) static void FUNC_1(h2o_iovec_t *VAR_0)
{
    int VAR_1;
    static const char VAR_2[] = "0123456789"
                                   "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                                   "abcdefghijklmnopqrstuvwxyz";

    for (VAR_1 = 0; VAR_1 < VAR_0->len; ++VAR_1) {
        VAR_0->base[VAR_1] = VAR_2[FUNC_0() % (sizeof(VAR_2) - 1)];
    }

    VAR_0->base[VAR_0->len] = 0;
}
