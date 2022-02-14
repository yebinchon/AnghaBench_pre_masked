
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int state; int key_schedule; } ;
typedef TYPE_1__ ptls_t ;
struct TYPE_7__ {int len; int base; } ;
typedef TYPE_2__ ptls_iovec_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(ptls_t *VAR_2, ptls_iovec_t VAR_3)
{
    int VAR_4;

    if ((VAR_4 = FUNC_0(VAR_2)) != 0)
        goto Exit;

    FUNC_1(VAR_2->key_schedule, VAR_3.base, VAR_3.len);
    VAR_2->state = VAR_1;
    VAR_4 = VAR_0;

Exit:
    return VAR_4;
}
