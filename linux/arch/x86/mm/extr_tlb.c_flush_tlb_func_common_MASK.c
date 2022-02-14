
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef size_t u32 ;
struct TYPE_4__ {scalar_t__ ctx_id; int tlb_gen; } ;
struct mm_struct {TYPE_1__ context; } ;
struct flush_tlb_info {scalar_t__ new_tlb_gen; unsigned long end; unsigned long start; unsigned long stride_shift; } ;
typedef enum tlb_flush_reason { ____Placeholder_tlb_flush_reason } tlb_flush_reason ;
struct TYPE_6__ {TYPE_2__* ctxs; int is_lazy; int loaded_mm_asid; int loaded_mm; } ;
struct TYPE_5__ {int tlb_gen; int ctx_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned long) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,unsigned long) ;
 TYPE_3__ VAR_3 ;
 struct mm_struct VAR_4 ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int *,struct mm_struct*,int *) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ,scalar_t__) ;
 int FUNC_11 (int,unsigned long) ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static void FUNC_13(const struct flush_tlb_info *VAR_5,
      bool VAR_6, enum tlb_flush_reason VAR_7)
{
 struct mm_struct *VAR_8 = FUNC_9(VAR_3.loaded_mm);
 u32 VAR_9 = FUNC_9(VAR_3.loaded_mm_asid);
 u64 VAR_10 = FUNC_3(&VAR_8->context.tlb_gen);
 u64 VAR_11 = FUNC_9(VAR_3.ctxs[VAR_9].tlb_gen);


 FUNC_0(!FUNC_6());

 if (FUNC_12(VAR_8 == &VAR_4))
  return;

 FUNC_0(FUNC_9(VAR_3.ctxs[VAR_9].ctx_id) !=
     VAR_8->context.ctx_id);

 if (FUNC_9(VAR_3.is_lazy)) {
  FUNC_8(((void*)0), &VAR_4, ((void*)0));
  return;
 }

 if (FUNC_12(VAR_11 == VAR_10)) {






  FUNC_11(VAR_7, 0);
  return;
 }

 FUNC_1(VAR_11 > VAR_10);
 FUNC_1(VAR_5->new_tlb_gen > VAR_10);
 if (VAR_5->end != VAR_2 &&
     VAR_5->new_tlb_gen == VAR_11 + 1 &&
     VAR_5->new_tlb_gen == VAR_10) {

  unsigned long VAR_12 = (VAR_5->end - VAR_5->start) >> VAR_5->stride_shift;
  unsigned long VAR_13 = VAR_5->start;

  while (VAR_13 < VAR_5->end) {
   FUNC_2(VAR_13);
   VAR_13 += 1UL << VAR_5->stride_shift;
  }
  if (VAR_6)
   FUNC_5(VAR_1, VAR_12);
  FUNC_11(VAR_7, VAR_12);
 } else {

  FUNC_7();
  if (VAR_6)
   FUNC_4(VAR_0);
  FUNC_11(VAR_7, VAR_2);
 }


 FUNC_10(VAR_3.ctxs[VAR_9].tlb_gen, VAR_10);
}
