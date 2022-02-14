
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int index; scalar_t__ allocated; } ;
struct TYPE_6__ {TYPE_1__ win32; } ;
typedef TYPE_2__ _GLFWtls ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;

void FUNC_2(_GLFWtls* VAR_0)
{
    if (VAR_0->win32.allocated)
        FUNC_0(VAR_0->win32.index);
    FUNC_1(VAR_0, 0, sizeof(_GLFWtls));
}
