
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int owner; scalar_t__ nInUse; } ;
typedef TYPE_1__ DSL_DEV_Device_t ;


 int FUNC_0 (int ) ;

int
FUNC_1 (DSL_DEV_Device_t * VAR_0)
{
 DSL_DEV_Device_t *VAR_1 = (DSL_DEV_Device_t *) VAR_0;
 if (VAR_1->nInUse)
  VAR_1->nInUse--;
        FUNC_0(VAR_1->owner);
 return 0;
}
