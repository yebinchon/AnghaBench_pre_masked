
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int len; int base; } ;
typedef TYPE_1__ h2o_iovec_t ;


 int FUNC_0 (char*) ;
 TYPE_1__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;

h2o_iovec_t FUNC_3(h2o_iovec_t VAR_0, int VAR_1)
{
    if (FUNC_2(VAR_0.base, VAR_0.len, FUNC_0("POST")) && !(VAR_1 == 307 || VAR_1 == 308))
        VAR_0 = FUNC_1(FUNC_0("GET"));
    return VAR_0;
}
