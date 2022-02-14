
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef size_t u16 ;
struct TYPE_4__ {scalar_t__ ctx_id; } ;
struct mm_struct {TYPE_1__ context; } ;
struct TYPE_6__ {int next_asid; TYPE_2__* ctxs; int invalidate_other; } ;
struct TYPE_5__ {int tlb_gen; int ctx_id; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 TYPE_3__ VAR_2 ;
 int FUNC_1 (int ) ;
 size_t FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static void FUNC_5(struct mm_struct *VAR_3, u64 VAR_4,
       u16 *VAR_5, bool *VAR_6)
{
 u16 VAR_7;

 if (!FUNC_1(VAR_1)) {
  *VAR_5 = 0;
  *VAR_6 = 1;
  return;
 }

 if (FUNC_3(VAR_2.invalidate_other))
  FUNC_0();

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  if (FUNC_3(VAR_2.ctxs[VAR_7].ctx_id) !=
      VAR_3->context.ctx_id)
   continue;

  *VAR_5 = VAR_7;
  *VAR_6 = (FUNC_3(VAR_2.ctxs[VAR_7].tlb_gen) <
          VAR_4);
  return;
 }





 *VAR_5 = FUNC_2(VAR_2.next_asid, 1) - 1;
 if (*VAR_5 >= VAR_0) {
  *VAR_5 = 0;
  FUNC_4(VAR_2.next_asid, 1);
 }
 *VAR_6 = 1;
}
