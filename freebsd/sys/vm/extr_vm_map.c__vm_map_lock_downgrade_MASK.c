
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* vm_map_t ;
struct TYPE_4__ {int lock; int system_mtx; scalar_t__ system_map; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int ,char const*,int) ;
 int FUNC_2 (int *,char const*,int) ;

void
FUNC_3(vm_map_t VAR_1, const char *VAR_2, int VAR_3)
{

 if (VAR_1->system_map) {
  FUNC_1(&VAR_1->system_mtx, VAR_0, VAR_2, VAR_3);
 } else {
  FUNC_0(VAR_1);
  FUNC_2(&VAR_1->lock, VAR_2, VAR_3);
 }
}
