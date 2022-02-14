
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int base; scalar_t__ is_allocated; int off; } ;
typedef TYPE_1__ ptls_buffer_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

void FUNC_2(ptls_buffer_t *VAR_0)
{
    FUNC_1(VAR_0->base, VAR_0->off);
    if (VAR_0->is_allocated)
        FUNC_0(VAR_0->base);
}
