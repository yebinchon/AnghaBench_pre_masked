
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_page_t ;
typedef size_t vm_offset_t ;
typedef int mmu_t ;
typedef void* caddr_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (void*,void*,int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (int ,scalar_t__,int ) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static inline void
FUNC_8(mmu_t VAR_6, vm_page_t *VAR_7, vm_offset_t VAR_8,
    vm_page_t *VAR_9, vm_offset_t VAR_10, int VAR_11)
{
 void *VAR_12, *VAR_13;
 vm_offset_t VAR_14, VAR_15;
 int VAR_16;
 FUNC_6(&VAR_4);
 while (VAR_11 > 0) {
  VAR_14 = VAR_8 & VAR_0;
  VAR_16 = FUNC_3(VAR_11, VAR_2 - VAR_14);
  FUNC_4(VAR_6, VAR_5,
      FUNC_1(VAR_7[VAR_8 >> VAR_1]));
  VAR_12 = (char *)VAR_5 + VAR_14;
  VAR_15 = VAR_10 & VAR_0;
  VAR_16 = FUNC_3(VAR_16, VAR_2 - VAR_15);
  FUNC_4(VAR_6, VAR_3,
      FUNC_1(VAR_9[VAR_10 >> VAR_1]));
  VAR_13 = (char *)VAR_3 + VAR_15;
  FUNC_2(VAR_12, VAR_13, VAR_16);
  FUNC_5(VAR_6, VAR_3);
  FUNC_5(VAR_6, VAR_5);
  VAR_8 += VAR_16;
  VAR_10 += VAR_16;
  VAR_11 -= VAR_16;
 }
 FUNC_7(&VAR_4);

}
