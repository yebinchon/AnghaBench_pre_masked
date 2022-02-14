
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ vm_size_t ;
typedef scalar_t__ vm_offset_t ;
typedef int vm_memattr_t ;
struct TYPE_4__ {int mas1; scalar_t__ virt; scalar_t__ size; int mas2; int phys; } ;
typedef TYPE_1__ tlb_entry_t ;
typedef int pte_t ;
typedef int mmu_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int*) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int* FUNC_4 (int ,int ,scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_13 ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (TYPE_1__*,int) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int VAR_14 ;
 scalar_t__ FUNC_11 (scalar_t__) ;

__attribute__((used)) static int
FUNC_12(mmu_t VAR_15, vm_offset_t VAR_16, vm_size_t VAR_17,
    vm_memattr_t VAR_18)
{
 vm_offset_t VAR_19;
 pte_t *VAR_20;
 int VAR_21, VAR_22;
 tlb_entry_t VAR_23;

 VAR_16 = FUNC_11(VAR_16);






 if (VAR_16 <= VAR_9 ||




     (VAR_16 >= VAR_13 && VAR_16 < VAR_11) ||

     (VAR_16 > VAR_10))
  return (VAR_2);


 for (VAR_21 = 0; VAR_21 < VAR_8; VAR_21++) {
  FUNC_6(&VAR_23, VAR_21);
  if (!(VAR_23.mas1 & VAR_3))
   continue;
  if (VAR_16 >= VAR_23.virt && VAR_16 < VAR_23.virt + VAR_23.size)
   break;
 }
 if (VAR_21 < VAR_8) {


  for (VAR_22 = VAR_21, VAR_19 = VAR_16; VAR_19 < VAR_16 + VAR_17; VAR_19 += VAR_23.size, VAR_22++) {
   FUNC_6(&VAR_23, VAR_22);
   if (VAR_19 != VAR_23.virt || (VAR_17 - (VAR_19 - VAR_16) < VAR_23.size))
    return (VAR_2);
  }
  for (VAR_19 = VAR_16; VAR_19 < VAR_16 + VAR_17; VAR_19 += VAR_23.size, VAR_21++) {
   FUNC_6(&VAR_23, VAR_21);
   VAR_23.mas2 &= ~VAR_4;
   VAR_23.mas2 |= FUNC_8(VAR_23.phys, VAR_18);





   FUNC_7(&VAR_23, VAR_21);
  }
  return (0);
 }



 for (VAR_19 = VAR_16; VAR_19 < VAR_16 + VAR_17; VAR_19 += VAR_5) {
  VAR_20 = FUNC_4(VAR_15, VAR_12, VAR_19);
  if (VAR_20 == ((void*)0) || !FUNC_0(VAR_20))
   return (VAR_2);
 }

 FUNC_2(&VAR_14);
 FUNC_9();
 for (VAR_19 = VAR_16; VAR_19 < VAR_16 + VAR_17; VAR_19 += VAR_5) {
  VAR_20 = FUNC_4(VAR_15, VAR_12, VAR_19);
  *VAR_20 &= ~(VAR_6 << VAR_7);
  *VAR_20 |= FUNC_8(FUNC_1(VAR_20), VAR_18) << VAR_7;
  FUNC_5(VAR_19);
 }
 FUNC_10();
 FUNC_3(&VAR_14);

 return (0);
}
