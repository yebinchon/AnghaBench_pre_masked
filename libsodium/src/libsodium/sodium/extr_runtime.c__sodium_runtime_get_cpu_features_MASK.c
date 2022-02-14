
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int initialized; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

int
FUNC_2(void)
{
    int VAR_1 = -1;

    VAR_1 &= FUNC_0(&VAR_0);
    VAR_1 &= FUNC_1(&VAR_0);
    VAR_0.initialized = 1;

    return VAR_1;
}
