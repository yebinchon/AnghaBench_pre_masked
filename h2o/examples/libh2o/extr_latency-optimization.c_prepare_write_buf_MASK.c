
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; int * base; } ;
typedef TYPE_1__ h2o_iovec_t ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static h2o_iovec_t FUNC_2(void)
{
    static h2o_iovec_t VAR_1;
    if (VAR_1.base == ((void*)0)) {
        VAR_1.base = FUNC_0(VAR_0);
        VAR_1.len = VAR_0;
        FUNC_1(VAR_1.base, '0', VAR_1.len);
    }
    return VAR_1;
}
