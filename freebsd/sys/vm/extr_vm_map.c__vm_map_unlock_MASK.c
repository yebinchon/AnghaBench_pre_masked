
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* vm_map_t ;
struct TYPE_4__ {int lock; int system_mtx; scalar_t__ system_map; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int ,char const*,int) ;
 int FUNC_2 (int *,char const*,int) ;
 int FUNC_3 () ;

void
FUNC_4(vm_map_t VAR_0, const char *VAR_1, int VAR_2)
{

 FUNC_0(VAR_0);
 if (VAR_0->system_map)
  FUNC_1(&VAR_0->system_mtx, 0, VAR_1, VAR_2);
 else {
  FUNC_2(&VAR_0->lock, VAR_1, VAR_2);
  FUNC_3();
 }
}
