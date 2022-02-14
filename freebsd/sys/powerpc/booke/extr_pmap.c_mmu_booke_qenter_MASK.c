
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_page_t ;
typedef int vm_offset_t ;
typedef int mmu_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_2(mmu_t VAR_1, vm_offset_t VAR_2, vm_page_t *VAR_3, int VAR_4)
{
 vm_offset_t VAR_5;

 VAR_5 = VAR_2;
 while (VAR_4-- > 0) {
  FUNC_1(VAR_1, VAR_5, FUNC_0(*VAR_3));
  VAR_5 += VAR_0;
  VAR_3++;
 }
}
