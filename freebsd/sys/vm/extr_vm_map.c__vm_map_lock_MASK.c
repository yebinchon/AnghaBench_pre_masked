
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* vm_map_t ;
struct TYPE_3__ {int timestamp; int lock; int system_mtx; scalar_t__ system_map; } ;


 int FUNC_0 (int *,int ,char const*,int) ;
 int FUNC_1 (int *,char const*,int) ;

void
FUNC_2(vm_map_t VAR_0, const char *VAR_1, int VAR_2)
{

 if (VAR_0->system_map)
  FUNC_0(&VAR_0->system_mtx, 0, VAR_1, VAR_2);
 else
  FUNC_1(&VAR_0->lock, VAR_1, VAR_2);
 VAR_0->timestamp++;
}
