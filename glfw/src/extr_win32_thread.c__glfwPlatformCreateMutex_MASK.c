
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ allocated; int section; } ;
struct TYPE_5__ {TYPE_1__ win32; } ;
typedef TYPE_2__ _GLFWmutex ;
typedef scalar_t__ GLFWbool ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;

GLFWbool FUNC_2(_GLFWmutex* VAR_2)
{
    FUNC_1(VAR_2->win32.allocated == VAR_0);
    FUNC_0(&VAR_2->win32.section);
    return VAR_2->win32.allocated = VAR_1;
}
