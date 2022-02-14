
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int len; int base; } ;
typedef TYPE_1__ h2o_iovec_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static h2o_iovec_t FUNC_3(h2o_iovec_t VAR_0)
{
    h2o_iovec_t VAR_1;
    VAR_1.base = FUNC_2(FUNC_0(VAR_0.len));
    VAR_1.len = FUNC_1(VAR_1.base, VAR_0.base, VAR_0.len, 1);
    return VAR_1;
}
