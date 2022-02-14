
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int key; scalar_t__ allocated; } ;
struct TYPE_6__ {TYPE_1__ posix; } ;
typedef TYPE_2__ _GLFWtls ;


 int FUNC_0 (TYPE_2__*,int ,int) ;
 int FUNC_1 (int ) ;

void FUNC_2(_GLFWtls* VAR_0)
{
    if (VAR_0->posix.allocated)
        FUNC_1(VAR_0->posix.key);
    FUNC_0(VAR_0, 0, sizeof(_GLFWtls));
}
