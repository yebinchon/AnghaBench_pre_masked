
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_paddr_t ;
typedef int vm_offset_t ;
typedef int uint64_t ;
struct TYPE_3__ {int prot; int pa; } ;
struct pvo_entry {int pvo_vaddr; TYPE_1__ pvo_pte; } ;
typedef int register_t ;
typedef int mmu_t ;
struct TYPE_4__ {int mr_start; int mr_size; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (char*,scalar_t__*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct pvo_entry* FUNC_6 (int) ;
 scalar_t__ VAR_12 ;
 int FUNC_7 (struct pvo_entry*,int ,int ) ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int FUNC_8 (int ,int,int) ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_9 (int ,struct pvo_entry*,int *,int *) ;
 TYPE_2__* VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;

__attribute__((used)) static void
FUNC_10(mmu_t VAR_21, vm_offset_t VAR_22,
    vm_offset_t VAR_23)
{
 struct pvo_entry *VAR_24;
 register_t VAR_25;
 vm_paddr_t VAR_26, VAR_27, VAR_28;
 vm_offset_t VAR_29, VAR_30;
 uint64_t VAR_31;
 int VAR_32;

 if (VAR_17 == 0)
  VAR_12 = 0;

 FUNC_0(VAR_25);
 if (VAR_12) {
  FUNC_3(VAR_13);
  for (VAR_32 = 0; VAR_32 < VAR_19; VAR_32++) {
    for (VAR_26 = VAR_18[VAR_32].mr_start; VAR_26 < VAR_18[VAR_32].mr_start +
       VAR_18[VAR_32].mr_size; VAR_26 += VAR_17) {
   VAR_31 = VAR_4;

   VAR_24 = FUNC_6(1 );
   VAR_24->pvo_vaddr |= VAR_8 | VAR_7;
   FUNC_7(VAR_24, VAR_13, FUNC_2(VAR_26));





   if (VAR_26 & VAR_16) {
    VAR_26 &= VAR_16;
    VAR_31 |= VAR_3;
   }
   if (VAR_26 + VAR_17 >
       VAR_18[VAR_32].mr_start + VAR_18[VAR_32].mr_size)
    VAR_31 |= VAR_3;

   VAR_24->pvo_pte.prot = VAR_10 | VAR_11 |
       VAR_9;
   VAR_24->pvo_pte.pa = VAR_26 | VAR_31;
   FUNC_9(VAR_21, VAR_24, ((void*)0), ((void*)0));
    }
  }
  FUNC_4(VAR_13);
 }






 if (VAR_22 < VAR_0) {





  for (VAR_26 = VAR_22 & ~VAR_5; VAR_26 < VAR_23;
      VAR_26 += VAR_6)
   FUNC_8(VAR_21, VAR_26, VAR_26);
 } else if (!VAR_12) {
  VAR_27 = VAR_22 & ~VAR_0;
  VAR_28 = VAR_23 & ~VAR_0;
  for (VAR_26 = VAR_27 & ~VAR_5; VAR_26 < VAR_28;
      VAR_26 += VAR_6)
   FUNC_8(VAR_21, VAR_26 | VAR_0, VAR_26);
 }

 if (!VAR_12) {
  VAR_29 = VAR_15*sizeof(struct pvo_entry);
  VAR_30 = (vm_offset_t)(VAR_14);
  for (VAR_26 = VAR_30; VAR_26 < VAR_30 + VAR_29; VAR_26 += VAR_6)
   FUNC_8(VAR_21, VAR_26, VAR_26);


  for (VAR_26 = VAR_2; VAR_26 < VAR_1; VAR_26 += VAR_6)
   FUNC_8(VAR_21, VAR_26 | VAR_0, VAR_26);
 }
 FUNC_1(VAR_25);





 if (!FUNC_5("vfs.unmapped_buf_allowed",
     &VAR_20))
  VAR_20 = VAR_12;
}
