
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* vm_map_t ;
struct TYPE_3__ {int lock; int system_mtx; scalar_t__ system_map; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int
FUNC_2(vm_map_t VAR_0)
{

 if (VAR_0->system_map)
  return (FUNC_0(&VAR_0->system_mtx));
 else
  return (FUNC_1(&VAR_0->lock));
}
