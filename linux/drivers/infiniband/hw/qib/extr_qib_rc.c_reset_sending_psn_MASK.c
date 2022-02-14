
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ opcode; } ;
struct rvt_swqe {scalar_t__ lpsn; TYPE_1__ wr; } ;
struct rvt_qp {scalar_t__ s_last; scalar_t__ s_size; scalar_t__ s_tail; scalar_t__ s_sending_psn; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 struct rvt_swqe* FUNC_1 (struct rvt_qp*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct rvt_qp *VAR_1, u32 VAR_2)
{
 struct rvt_swqe *VAR_3;
 u32 VAR_4 = VAR_1->s_last;


 for (;;) {
  VAR_3 = FUNC_1(VAR_1, VAR_4);
  if (FUNC_0(VAR_2, VAR_3->lpsn) <= 0) {
   if (VAR_3->wr.opcode == VAR_0)
    VAR_1->s_sending_psn = VAR_3->lpsn + 1;
   else
    VAR_1->s_sending_psn = VAR_2 + 1;
   break;
  }
  if (++VAR_4 == VAR_1->s_size)
   VAR_4 = 0;
  if (VAR_4 == VAR_1->s_tail)
   break;
 }
}
