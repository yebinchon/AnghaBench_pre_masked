
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {struct mm_struct* vm_mm; } ;
struct TYPE_2__ {int lock; scalar_t__ thp_pte_count; scalar_t__ hugetlb_pte_count; } ;
struct mm_struct {TYPE_1__ context; } ;
typedef int pte_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 int FUNC_0 (struct mm_struct*,int ,unsigned long,unsigned long,unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (struct vm_area_struct*) ;
 unsigned long FUNC_3 (int ) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_4 (struct vm_area_struct*) ;
 scalar_t__ FUNC_5 (unsigned long) ;
 int FUNC_6 (struct mm_struct*,int ) ;
 unsigned long FUNC_7 (int ) ;
 unsigned long FUNC_8 (int ) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 scalar_t__ VAR_8 ;

void FUNC_11(struct vm_area_struct *VAR_9, unsigned long VAR_10, pte_t *VAR_11)
{
 struct mm_struct *VAR_12;
 unsigned long VAR_13;
 bool VAR_14;
 pte_t VAR_15 = *VAR_11;

 if (VAR_8 != VAR_7) {
  unsigned long VAR_16 = FUNC_7(VAR_15);

  if (FUNC_5(VAR_16))
   FUNC_1(VAR_16);
 }

 VAR_12 = VAR_9->vm_mm;


 if (!FUNC_6(VAR_12, VAR_15))
  return;

 FUNC_9(&VAR_12->context.lock, VAR_13);

 VAR_14 = 0;
 if (!VAR_14)
  FUNC_0(VAR_12, VAR_0, VAR_2,
     VAR_10, FUNC_8(VAR_15));

 FUNC_10(&VAR_12->context.lock, VAR_13);
}
