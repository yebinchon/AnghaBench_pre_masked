
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_page_t ;
typedef int vm_paddr_t ;
typedef int mmu_t ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__* VAR_3 ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*) ;

void
FUNC_7(mmu_t VAR_4, vm_page_t VAR_5, int VAR_6, int VAR_7)
{
 vm_paddr_t VAR_8 = FUNC_1(VAR_5);

 if (VAR_7 + VAR_6 > VAR_0)
  FUNC_6("moea64_zero_page: size + off > PAGE_SIZE");

 if (VAR_1) {
  FUNC_2((caddr_t)(uintptr_t)FUNC_0(VAR_8) + VAR_6, VAR_7);
 } else {
  FUNC_4(&VAR_2);
  FUNC_3(VAR_4, 0, VAR_8);
  FUNC_2((caddr_t)VAR_3[0] + VAR_6, VAR_7);
  FUNC_5(&VAR_2);
 }
}
