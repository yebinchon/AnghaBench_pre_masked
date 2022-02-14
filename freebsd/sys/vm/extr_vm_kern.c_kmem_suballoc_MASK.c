
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_size_t ;
typedef scalar_t__ vm_offset_t ;
typedef int * vm_map_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int * FUNC_2 (int ,scalar_t__,scalar_t__) ;
 int FUNC_3 (int *,int *,int ,scalar_t__*,scalar_t__,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,scalar_t__,scalar_t__,int *) ;

vm_map_t
FUNC_7(vm_map_t VAR_5, vm_offset_t *VAR_6, vm_offset_t *VAR_7,
    vm_size_t VAR_8, boolean_t VAR_9)
{
 int VAR_10;
 vm_map_t VAR_11;

 VAR_8 = FUNC_1(VAR_8);

 *VAR_6 = FUNC_4(VAR_5);
 VAR_10 = FUNC_3(VAR_5, ((void*)0), 0, VAR_6, VAR_8, 0, VAR_9 ?
     VAR_3 : VAR_2, VAR_4, VAR_4,
     VAR_1);
 if (VAR_10 != VAR_0)
  FUNC_0("kmem_suballoc: bad status return of %d", VAR_10);
 *VAR_7 = *VAR_6 + VAR_8;
 VAR_11 = FUNC_2(FUNC_5(VAR_5), *VAR_6, *VAR_7);
 if (VAR_11 == ((void*)0))
  FUNC_0("kmem_suballoc: cannot create submap");
 if (FUNC_6(VAR_5, *VAR_6, *VAR_7, VAR_11) != VAR_0)
  FUNC_0("kmem_suballoc: unable to change range to submap");
 return (VAR_11);
}
