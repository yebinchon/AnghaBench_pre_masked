
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_page_t ;
typedef int vm_offset_t ;
typedef int mmu_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (void*,void*,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__* VAR_3 ;
 int FUNC_3 (int ,int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void
FUNC_6(mmu_t VAR_4, vm_page_t VAR_5, vm_page_t VAR_6)
{
 vm_offset_t VAR_7;
 vm_offset_t VAR_8;

 VAR_7 = FUNC_1(VAR_6);
 VAR_8 = FUNC_1(VAR_5);

 if (VAR_1) {
  FUNC_2((void *)FUNC_0(VAR_8), (void *)FUNC_0(VAR_7),
      VAR_0);
 } else {
  FUNC_4(&VAR_2);

  FUNC_3(VAR_4, 0, VAR_8);
  FUNC_3(VAR_4, 1, VAR_7);

  FUNC_2((void *)VAR_3[0],
      (void *)VAR_3[1], VAR_0);

  FUNC_5(&VAR_2);
 }
}
