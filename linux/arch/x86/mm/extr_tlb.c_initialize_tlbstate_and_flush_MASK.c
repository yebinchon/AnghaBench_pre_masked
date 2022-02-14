
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_7__ {int ctx_id; } ;
struct mm_struct {TYPE_2__ context; int pgd; } ;
struct TYPE_10__ {TYPE_3__* ctxs; int next_asid; int loaded_mm_asid; int last_user_mm_ibpb; int loaded_mm; } ;
struct TYPE_6__ {int tlb_gen; } ;
struct TYPE_9__ {TYPE_1__ context; } ;
struct TYPE_8__ {int ctx_id; int tlb_gen; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long FUNC_1 (int ) ;
 unsigned long FUNC_2 () ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 TYPE_5__ VAR_5 ;
 int FUNC_6 () ;
 TYPE_4__ VAR_6 ;
 struct mm_struct* FUNC_7 (int ) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ) ;

void FUNC_10(void)
{
 int VAR_7;
 struct mm_struct *VAR_8 = FUNC_7(VAR_5.loaded_mm);
 u64 VAR_9 = FUNC_3(&VAR_6.context.tlb_gen);
 unsigned long VAR_10 = FUNC_2();


 FUNC_0((VAR_10 & VAR_0) != FUNC_1(VAR_8->pgd));






 FUNC_0(FUNC_4(VAR_4) &&
  !(FUNC_6() & VAR_3));


 FUNC_9(FUNC_5(VAR_8->pgd, 0));


 FUNC_8(VAR_5.last_user_mm_ibpb, VAR_1);
 FUNC_8(VAR_5.loaded_mm_asid, 0);
 FUNC_8(VAR_5.next_asid, 1);
 FUNC_8(VAR_5.ctxs[0].ctx_id, VAR_8->context.ctx_id);
 FUNC_8(VAR_5.ctxs[0].tlb_gen, VAR_9);

 for (VAR_7 = 1; VAR_7 < VAR_2; VAR_7++)
  FUNC_8(VAR_5.ctxs[VAR_7].ctx_id, 0);
}
