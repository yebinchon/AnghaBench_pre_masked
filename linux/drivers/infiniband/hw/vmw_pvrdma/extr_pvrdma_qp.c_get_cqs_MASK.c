
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int recv_cq; int send_cq; } ;
struct pvrdma_qp {TYPE_1__ ibqp; } ;
struct pvrdma_cq {int dummy; } ;


 struct pvrdma_cq* FUNC_0 (int ) ;

__attribute__((used)) static inline void FUNC_1(struct pvrdma_qp *VAR_0, struct pvrdma_cq **VAR_1,
      struct pvrdma_cq **VAR_2)
{
 *VAR_1 = FUNC_0(VAR_0->ibqp.send_cq);
 *VAR_2 = FUNC_0(VAR_0->ibqp.recv_cq);
}
