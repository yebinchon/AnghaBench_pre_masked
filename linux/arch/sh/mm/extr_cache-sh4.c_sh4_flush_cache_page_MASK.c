
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vm_area_struct {scalar_t__ vm_mm; int vm_flags; } ;
struct page {int flags; } ;
struct flusher_data {unsigned long addr1; unsigned long addr2; struct vm_area_struct* vma; } ;
typedef int pud_t ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgd_t ;
struct TYPE_6__ {scalar_t__ active_mm; } ;
struct TYPE_4__ {scalar_t__ n_aliases; } ;
struct TYPE_5__ {TYPE_1__ dcache; } ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 TYPE_3__* VAR_7 ;
 TYPE_2__ VAR_8 ;
 int FUNC_1 (unsigned long,unsigned long) ;
 int FUNC_2 () ;
 void* FUNC_3 (struct page*) ;
 void* FUNC_4 (struct page*,unsigned long) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (void*) ;
 scalar_t__ FUNC_7 (struct page*) ;
 struct page* FUNC_8 (unsigned long) ;
 int * FUNC_9 (scalar_t__,unsigned long) ;
 int * FUNC_10 (int *,unsigned long) ;
 int * FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int ) ;
 int * FUNC_13 (int *,unsigned long) ;
 unsigned long VAR_9 ;
 int FUNC_14 () ;
 scalar_t__ FUNC_15 (int ,int *) ;

__attribute__((used)) static void FUNC_16(void *VAR_10)
{
 struct flusher_data *VAR_11 = VAR_10;
 struct vm_area_struct *VAR_12;
 struct page *VAR_13;
 unsigned long VAR_14, VAR_15, VAR_16;
 int VAR_17 = 0;
 pgd_t *VAR_18;
 pud_t *VAR_19;
 pmd_t *VAR_20;
 pte_t *VAR_21;
 void *VAR_22;

 VAR_12 = VAR_11->vma;
 VAR_14 = VAR_11->addr1 & VAR_2;
 VAR_15 = VAR_11->addr2;
 VAR_16 = VAR_15 << VAR_3;
 VAR_13 = FUNC_8(VAR_15);

 if (FUNC_0(FUNC_14(), VAR_12->vm_mm) == VAR_1)
  return;

 VAR_18 = FUNC_9(VAR_12->vm_mm, VAR_14);
 VAR_19 = FUNC_13(VAR_18, VAR_14);
 VAR_20 = FUNC_10(VAR_19, VAR_14);
 VAR_21 = FUNC_11(VAR_20, VAR_14);


 if (!(FUNC_12(*VAR_21) & VAR_6))
  return;

 if (VAR_12->vm_mm == VAR_7->active_mm)
  VAR_22 = ((void*)0);
 else {




  VAR_17 = (VAR_8.dcache.n_aliases &&
   FUNC_15(VAR_4, &VAR_13->flags) &&
   FUNC_7(VAR_13));
  if (VAR_17)
   VAR_22 = FUNC_4(VAR_13, VAR_14);
  else
   VAR_22 = FUNC_3(VAR_13);

  VAR_14 = (unsigned long)VAR_22;
 }

 FUNC_1(VAR_0 |
   (VAR_14 & VAR_9), VAR_16);

 if (VAR_12->vm_flags & VAR_5)
  FUNC_2();

 if (VAR_22) {
  if (VAR_17)
   FUNC_6(VAR_22);
  else
   FUNC_5(VAR_22);
 }
}
