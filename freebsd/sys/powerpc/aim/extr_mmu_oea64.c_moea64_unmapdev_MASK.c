
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_size_t ;
typedef int vm_offset_t ;
typedef int mmu_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int) ;

void
FUNC_3(mmu_t VAR_2, vm_offset_t VAR_3, vm_size_t VAR_4)
{
 vm_offset_t VAR_5, VAR_6;

 VAR_5 = FUNC_2(VAR_3);
 VAR_6 = VAR_3 & VAR_0;
 VAR_4 = FUNC_1(VAR_6 + VAR_4, VAR_1);

 FUNC_0(VAR_5, VAR_4);
}
