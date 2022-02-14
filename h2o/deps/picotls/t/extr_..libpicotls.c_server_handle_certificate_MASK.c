
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
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,scalar_t__,scalar_t__,int*) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_2(ptls_t *VAR_4, ptls_iovec_t VAR_5)
{
    int VAR_6, VAR_7;

    if ((VAR_7 = FUNC_0(VAR_4, VAR_5.base + VAR_2, VAR_5.base + VAR_5.len, &VAR_6)) != 0)
        return VAR_7;
    if (!VAR_6)
        return VAR_0;

    FUNC_1(VAR_4->key_schedule, VAR_5.base, VAR_5.len);

    VAR_4->state = VAR_3;
    return VAR_1;
}
