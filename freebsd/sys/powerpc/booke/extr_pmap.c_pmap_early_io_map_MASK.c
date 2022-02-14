
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ vm_size_t ;
typedef scalar_t__ vm_paddr_t ;
typedef scalar_t__ vm_offset_t ;
struct TYPE_3__ {int mas1; scalar_t__ phys; scalar_t__ size; scalar_t__ virt; } ;
typedef TYPE_1__ tlb_entry_t ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;
 scalar_t__ FUNC_4 (scalar_t__,int) ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (scalar_t__,scalar_t__,scalar_t__,int) ;

vm_offset_t
FUNC_7(vm_paddr_t VAR_7, vm_size_t VAR_8)
{
 vm_paddr_t VAR_9;
 vm_offset_t VAR_10, VAR_11;
 int VAR_12;
 tlb_entry_t VAR_13;

 FUNC_0(!VAR_5, ("Do not use after PMAP is up!"));

 for (VAR_12 = 0; VAR_12 < VAR_2; VAR_12++) {
  FUNC_5(&VAR_13, VAR_12);
  if (!(VAR_13.mas1 & VAR_0))
   continue;
  if (VAR_7 >= VAR_13.phys && (VAR_7 + VAR_8) <=
      (VAR_13.phys + VAR_13.size))
   return (VAR_13.virt + (VAR_7 - VAR_13.phys));
 }

 VAR_9 = FUNC_2(VAR_7, VAR_1);
 VAR_8 = FUNC_3(VAR_8 + (VAR_7 - VAR_9), VAR_1);
 VAR_6 = FUNC_4(VAR_6, 1 << (FUNC_1(VAR_8) & ~1));
 VAR_10 = VAR_6 + (VAR_7 - VAR_9);

 do {
  VAR_11 = 1 << (FUNC_1(VAR_8) & ~1);
  FUNC_6(VAR_6, VAR_9, VAR_11,
      VAR_4 | VAR_3);
  VAR_8 -= VAR_11;
  VAR_9 += VAR_11;
  VAR_6 += VAR_11;
 } while (VAR_8 > 0);

 return (VAR_10);
}
