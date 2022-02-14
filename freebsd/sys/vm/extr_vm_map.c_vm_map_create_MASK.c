
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef int vm_map_t ;
typedef int pmap_t ;


 int FUNC_0 (int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;

vm_map_t
FUNC_3(pmap_t VAR_3, vm_offset_t VAR_4, vm_offset_t VAR_5)
{
 vm_map_t VAR_6;

 VAR_6 = FUNC_2(VAR_2, VAR_1);
 FUNC_0(VAR_0, "vm_map_create: %p", VAR_6);
 FUNC_1(VAR_6, VAR_3, VAR_4, VAR_5);
 return (VAR_6);
}
