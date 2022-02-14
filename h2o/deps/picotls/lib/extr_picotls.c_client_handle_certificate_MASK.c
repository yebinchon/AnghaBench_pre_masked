
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int state; int key_schedule; } ;
typedef TYPE_1__ ptls_t ;
struct TYPE_7__ {scalar_t__ len; scalar_t__ base; } ;
typedef TYPE_2__ ptls_iovec_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_2(ptls_t *VAR_3, ptls_iovec_t VAR_4)
{
    int VAR_5;

    if ((VAR_5 = FUNC_0(VAR_3, VAR_4.base + VAR_1, VAR_4.base + VAR_4.len)) != 0)
        return VAR_5;

    FUNC_1(VAR_3->key_schedule, VAR_4.base, VAR_4.len);

    VAR_3->state = VAR_2;
    return VAR_0;
}
