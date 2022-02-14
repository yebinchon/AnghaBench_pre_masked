
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_4__ {size_t opcode; } ;
struct rvt_swqe {TYPE_2__ wr; } ;
struct TYPE_3__ {int device; } ;
struct rvt_qp {size_t state; scalar_t__ s_last; scalar_t__ s_acked; scalar_t__ s_cur; scalar_t__ s_tail; scalar_t__ s_draining; TYPE_1__ ibqp; } ;
struct rvt_dev_info {int * wc_opcode; } ;
typedef enum ib_wc_status { ____Placeholder_ib_wc_status } ib_wc_status ;


 size_t VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 struct rvt_dev_info* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct rvt_qp*,struct rvt_swqe*,int ,int) ;
 int FUNC_2 (struct rvt_qp*,struct rvt_swqe*,scalar_t__) ;

void FUNC_3(struct rvt_qp *VAR_3, struct rvt_swqe *VAR_4,
         enum ib_wc_status VAR_5)
{
 u32 VAR_6, VAR_7;
 struct rvt_dev_info *VAR_8;

 if (!(VAR_2[VAR_3->state] & VAR_1))
  return;
 VAR_8 = FUNC_0(VAR_3->ibqp.device);

 VAR_6 = VAR_3->s_last;
 FUNC_2(VAR_3, VAR_4, VAR_6);
 VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_8->wc_opcode[VAR_4->wr.opcode],
        VAR_5);
 if (VAR_3->s_acked == VAR_6)
  VAR_3->s_acked = VAR_7;
 if (VAR_3->s_cur == VAR_6)
  VAR_3->s_cur = VAR_7;
 if (VAR_3->s_tail == VAR_6)
  VAR_3->s_tail = VAR_7;
 if (VAR_3->state == VAR_0 && VAR_7 == VAR_3->s_cur)
  VAR_3->s_draining = 0;
}
