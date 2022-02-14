
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef int uint8_t ;
typedef int pte_t ;
typedef scalar_t__ pmap_t ;
typedef int mmu_t ;


 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int * FUNC_6 (int ,scalar_t__,int ) ;
 int FUNC_7 (int ,scalar_t__,int ,int ) ;
 int VAR_4 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_10(mmu_t VAR_6, pmap_t VAR_7, vm_offset_t VAR_8, vm_offset_t VAR_9)
{
 pte_t *VAR_10;
 uint8_t VAR_11;

 int VAR_12 = (VAR_7 == VAR_3);




 if (VAR_12) {
  FUNC_0(((VAR_8 >= VAR_5) &&
      (VAR_8 <= VAR_2)),
      ("mmu_booke_remove: kernel pmap, non kernel va"));
 } else {
  FUNC_0((VAR_8 <= VAR_1),
      ("mmu_booke_remove: user pmap, non user va"));
 }

 if (FUNC_2(VAR_7)) {

  return;
 }

 VAR_11 = FUNC_4(VAR_7);


 FUNC_8(&VAR_4);
 FUNC_1(VAR_7);
 for (; VAR_8 < VAR_9; VAR_8 += VAR_0) {
  VAR_10 = FUNC_6(VAR_6, VAR_7, VAR_8);
  if ((VAR_10 != ((void*)0)) && FUNC_5(VAR_10))
   FUNC_7(VAR_6, VAR_7, VAR_8, VAR_11);
 }
 FUNC_3(VAR_7);
 FUNC_9(&VAR_4);


}
