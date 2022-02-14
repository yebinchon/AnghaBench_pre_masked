
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_page_t ;
typedef scalar_t__ vm_offset_t ;
typedef int mmu_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ,scalar_t__,int ) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void
FUNC_6(mmu_t VAR_4, vm_page_t VAR_5)
{
 vm_offset_t VAR_6, VAR_7;







 VAR_7 = VAR_3;
 FUNC_4(&VAR_2);

 FUNC_2(VAR_4, VAR_7, FUNC_1(VAR_5));

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6 += VAR_1)
  __asm __volatile("dcbz 0,%0" :: "r"(VAR_7 + VAR_6));

 FUNC_3(VAR_4, VAR_7);

 FUNC_5(&VAR_2);

}
