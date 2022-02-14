
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ len; } ;
typedef TYPE_1__ h2o_iovec_t ;
struct TYPE_8__ {int len; } ;


 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 scalar_t__ VAR_0 ;
 TYPE_1__ FUNC_1 (int *,int ) ;
 TYPE_3__ VAR_1 ;
 int FUNC_2 (TYPE_1__*,TYPE_3__*,int) ;

int FUNC_3(h2o_iovec_t *VAR_2)
{
    if (VAR_0 > 0) {
        FUNC_2(VAR_2, &VAR_1, sizeof(*VAR_2));
        VAR_2->len = FUNC_0(VAR_1.len, VAR_0);
        VAR_0 -= VAR_2->len;
        return 0;
    } else {
        *VAR_2 = FUNC_1(((void*)0), 0);
        return 1;
    }
}
