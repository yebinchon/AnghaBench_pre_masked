
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
 int FUNC_0 (int ) ;
 int FUNC_1 (void*,void*,int) ;
 int FUNC_2 (int,scalar_t__) ;
 int VAR_3 ;
 scalar_t__* VAR_4 ;
 int FUNC_3 (int ,int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static inline void
FUNC_6(mmu_t VAR_5, vm_page_t *VAR_6, vm_offset_t VAR_7,
    vm_page_t *VAR_8, vm_offset_t VAR_9, int VAR_10)
{
 void *VAR_11, *VAR_12;
 vm_offset_t VAR_13, VAR_14;
 int VAR_15;

 FUNC_4(&VAR_3);
 while (VAR_10 > 0) {
  VAR_13 = VAR_7 & VAR_0;
  VAR_15 = FUNC_2(VAR_10, VAR_2 - VAR_13);
  FUNC_3(VAR_5, 0,
      FUNC_0(VAR_6[VAR_7 >> VAR_1]));
  VAR_11 = (char *)VAR_4[0] + VAR_13;
  VAR_14 = VAR_9 & VAR_0;
  VAR_15 = FUNC_2(VAR_15, VAR_2 - VAR_14);
  FUNC_3(VAR_5, 1,
      FUNC_0(VAR_8[VAR_9 >> VAR_1]));
  VAR_12 = (char *)VAR_4[1] + VAR_14;
  FUNC_1(VAR_11, VAR_12, VAR_15);
  VAR_7 += VAR_15;
  VAR_9 += VAR_15;
  VAR_10 -= VAR_15;
 }
 FUNC_5(&VAR_3);
}
