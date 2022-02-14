
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ opcode; } ;
struct rvt_swqe {scalar_t__ lpsn; TYPE_1__ wr; } ;
struct rvt_qp {scalar_t__ s_last; scalar_t__ s_size; scalar_t__ s_tail; scalar_t__ s_sending_psn; int s_lock; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (int *) ;
 struct rvt_swqe* FUNC_2 (struct rvt_qp*,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct rvt_qp *VAR_3, u32 VAR_4)
{
 struct rvt_swqe *VAR_5;
 u32 VAR_6 = VAR_3->s_last;

 FUNC_1(&VAR_3->s_lock);

 for (;;) {
  VAR_5 = FUNC_2(VAR_3, VAR_6);
  if (FUNC_0(VAR_4, VAR_5->lpsn) <= 0) {
   if (VAR_5->wr.opcode == VAR_0 ||
       VAR_5->wr.opcode == VAR_1 ||
       VAR_5->wr.opcode == VAR_2)
    VAR_3->s_sending_psn = VAR_5->lpsn + 1;
   else
    VAR_3->s_sending_psn = VAR_4 + 1;
   break;
  }
  if (++VAR_6 == VAR_3->s_size)
   VAR_6 = 0;
  if (VAR_6 == VAR_3->s_tail)
   break;
 }
}
