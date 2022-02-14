
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ allocated; int key; } ;
struct TYPE_5__ {TYPE_1__ posix; } ;
typedef TYPE_2__ _GLFWtls ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int ) ;

void* FUNC_2(_GLFWtls* VAR_1)
{
    FUNC_0(VAR_1->posix.allocated == VAR_0);
    return FUNC_1(VAR_1->posix.key);
}
