
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ len; scalar_t__ base; } ;
typedef TYPE_1__ h2o_iovec_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static h2o_iovec_t FUNC_4(h2o_iovec_t VAR_0, h2o_iovec_t VAR_1)
{
    h2o_iovec_t VAR_2;
    VAR_2.base = FUNC_2(VAR_1.len + FUNC_0(VAR_0.len));
    if (VAR_1.len != 0) {
        FUNC_3(VAR_2.base, VAR_1.base, VAR_1.len);
    }
    VAR_2.len = VAR_1.len;
    VAR_2.len += FUNC_1(VAR_2.base + VAR_2.len, VAR_0.base, VAR_0.len, 1);
    return VAR_2;
}
