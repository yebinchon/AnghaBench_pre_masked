
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef int mmu_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void
FUNC_1(mmu_t VAR_1, vm_offset_t VAR_2, int VAR_3)
{
 vm_offset_t VAR_4;

 VAR_4 = VAR_2;
 while (VAR_3-- > 0) {
  FUNC_0(VAR_1, VAR_4);
  VAR_4 += VAR_0;
 }
}
