
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef TYPE_1__* vm_map_t ;
typedef int pmap_t ;
struct TYPE_4__ {int lock; int system_mtx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_1 (int *,char*,int *,int) ;
 int FUNC_2 (int *,char*) ;

void
FUNC_3(vm_map_t VAR_2, pmap_t VAR_3, vm_offset_t VAR_4, vm_offset_t VAR_5)
{

 FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5);
 FUNC_1(&VAR_2->system_mtx, "system map", ((void*)0), VAR_0 | VAR_1);
 FUNC_2(&VAR_2->lock, "user map");
}
