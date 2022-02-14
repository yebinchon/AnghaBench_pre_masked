
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_offset_t ;
struct TYPE_2__ {int * pmap; } ;
struct vmspace {int vm_refcnt; scalar_t__ vm_maxsaddr; scalar_t__ vm_daddr; scalar_t__ vm_taddr; scalar_t__ vm_ssize; scalar_t__ vm_dsize; scalar_t__ vm_tsize; scalar_t__ vm_swrss; int * vm_shm; TYPE_1__ vm_map; } ;
typedef int (* pmap_pinit_t ) (int ) ;


 int FUNC_0 (int ,char*,struct vmspace*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*,int ,int ,int ) ;
 struct vmspace* FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,struct vmspace*) ;
 int FUNC_5 (struct vmspace*) ;
 int VAR_2 ;

struct vmspace *
FUNC_6(vm_offset_t VAR_3, vm_offset_t VAR_4, pmap_pinit_t VAR_5)
{
 struct vmspace *VAR_6;

 VAR_6 = FUNC_3(VAR_2, VAR_1);
 FUNC_1(VAR_6->vm_map.pmap == ((void*)0), ("vm_map.pmap must be NULL"));
 if (!VAR_5(FUNC_5(VAR_6))) {
  FUNC_4(VAR_2, VAR_6);
  return (((void*)0));
 }
 FUNC_0(VAR_0, "vmspace_alloc: %p", VAR_6);
 FUNC_2(&VAR_6->vm_map, FUNC_5(VAR_6), VAR_3, VAR_4);
 VAR_6->vm_refcnt = 1;
 VAR_6->vm_shm = ((void*)0);
 VAR_6->vm_swrss = 0;
 VAR_6->vm_tsize = 0;
 VAR_6->vm_dsize = 0;
 VAR_6->vm_ssize = 0;
 VAR_6->vm_taddr = 0;
 VAR_6->vm_daddr = 0;
 VAR_6->vm_maxsaddr = 0;
 return (VAR_6);
}
