
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t opcode; } ;
struct rvt_swqe {int psn; int lpsn; TYPE_1__ wr; } ;
struct rvt_qp {scalar_t__ s_acked; scalar_t__ s_cur; scalar_t__ s_size; scalar_t__ s_tail; scalar_t__ state; scalar_t__ s_draining; int s_psn; int s_state; int s_retry_cnt; int s_retry; int s_sending_hpsn; int s_sending_psn; } ;
struct TYPE_4__ {int * rc_delayed_comp; } ;
struct qib_ibport {TYPE_2__ rvp; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int * VAR_3 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 struct rvt_swqe* FUNC_2 (struct rvt_qp*,scalar_t__) ;
 int FUNC_3 (struct rvt_qp*,struct rvt_swqe*,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct rvt_qp*,int ) ;

__attribute__((used)) static struct rvt_swqe *FUNC_6(struct rvt_qp *VAR_4,
      struct rvt_swqe *VAR_5,
      struct qib_ibport *VAR_6)
{





 if (FUNC_1(VAR_5->lpsn, VAR_4->s_sending_psn) < 0 ||
     FUNC_1(VAR_4->s_sending_psn, VAR_4->s_sending_hpsn) > 0)
  FUNC_3(VAR_4,
         VAR_5,
         VAR_3[VAR_5->wr.opcode],
         VAR_1);
 else
  FUNC_4(*VAR_6->rvp.rc_delayed_comp);

 VAR_4->s_retry = VAR_4->s_retry_cnt;
 FUNC_5(VAR_4, VAR_5->lpsn);






 if (VAR_4->s_acked == VAR_4->s_cur) {
  if (++VAR_4->s_cur >= VAR_4->s_size)
   VAR_4->s_cur = 0;
  VAR_4->s_acked = VAR_4->s_cur;
  VAR_5 = FUNC_2(VAR_4, VAR_4->s_cur);
  if (VAR_4->s_acked != VAR_4->s_tail) {
   VAR_4->s_state = FUNC_0(VAR_2);
   VAR_4->s_psn = VAR_5->psn;
  }
 } else {
  if (++VAR_4->s_acked >= VAR_4->s_size)
   VAR_4->s_acked = 0;
  if (VAR_4->state == VAR_0 && VAR_4->s_acked == VAR_4->s_cur)
   VAR_4->s_draining = 0;
  VAR_5 = FUNC_2(VAR_4, VAR_4->s_acked);
 }
 return VAR_5;
}
