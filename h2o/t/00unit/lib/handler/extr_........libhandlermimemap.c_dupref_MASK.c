
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ len; int base; } ;
typedef TYPE_1__ h2o_iovec_t ;


 int FUNC_0 (int *,scalar_t__,int *) ;
 int FUNC_1 (int ,char const*,scalar_t__) ;
 scalar_t__ FUNC_2 (char const*) ;

__attribute__((used)) static h2o_iovec_t FUNC_3(const char *VAR_0)
{
    h2o_iovec_t VAR_1;
    VAR_1.len = FUNC_2(VAR_0);
    VAR_1.base = FUNC_0(((void*)0), VAR_1.len + 1, ((void*)0));
    FUNC_1(VAR_1.base, VAR_0, VAR_1.len + 1);
    return VAR_1;
}
