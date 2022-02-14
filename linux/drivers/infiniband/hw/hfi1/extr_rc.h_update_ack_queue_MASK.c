
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int device; } ;
struct rvt_qp {unsigned int s_tail_ack_queue; unsigned int s_acked_ack_queue; int s_ack_state; TYPE_1__ ibqp; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;

__attribute__((used)) static inline void FUNC_3(struct rvt_qp *VAR_1, unsigned int VAR_2)
{
 unsigned int VAR_3;

 VAR_3 = VAR_2 + 1;
 if (VAR_3 > FUNC_2(FUNC_1(VAR_1->ibqp.device)))
  VAR_3 = 0;
 VAR_1->s_tail_ack_queue = VAR_3;
 VAR_1->s_acked_ack_queue = VAR_3;
 VAR_1->s_ack_state = FUNC_0(VAR_0);
}
