
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_page_t ;
typedef size_t vm_offset_t ;
typedef int mmu_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (void*,void*,int) ;
 int FUNC_2 (int,scalar_t__) ;

void
FUNC_3(mmu_t VAR_3, vm_page_t *VAR_4, vm_offset_t VAR_5,
    vm_page_t *VAR_6, vm_offset_t VAR_7, int VAR_8)
{
 void *VAR_9, *VAR_10;
 vm_offset_t VAR_11, VAR_12;
 int VAR_13;

 while (VAR_8 > 0) {
  VAR_11 = VAR_5 & VAR_0;
  VAR_13 = FUNC_2(VAR_8, VAR_2 - VAR_11);
  VAR_9 = (char *)FUNC_0(VAR_4[VAR_5 >> VAR_1]) +
      VAR_11;
  VAR_12 = VAR_7 & VAR_0;
  VAR_13 = FUNC_2(VAR_13, VAR_2 - VAR_12);
  VAR_10 = (char *)FUNC_0(VAR_6[VAR_7 >> VAR_1]) +
      VAR_12;
  FUNC_1(VAR_9, VAR_10, VAR_13);
  VAR_5 += VAR_13;
  VAR_7 += VAR_13;
  VAR_8 -= VAR_13;
 }
}
