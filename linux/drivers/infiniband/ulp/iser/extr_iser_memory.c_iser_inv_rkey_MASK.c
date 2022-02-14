
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int invalidate_rkey; } ;
struct ib_send_wr {struct ib_send_wr* next; scalar_t__ num_sge; scalar_t__ send_flags; TYPE_1__ ex; struct ib_cqe* wr_cqe; int opcode; } ;
struct ib_mr {int rkey; } ;
struct ib_cqe {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static inline void
FUNC_0(struct ib_send_wr *VAR_1,
       struct ib_mr *VAR_2,
       struct ib_cqe *VAR_3,
       struct ib_send_wr *VAR_4)
{
 VAR_1->opcode = VAR_0;
 VAR_1->wr_cqe = VAR_3;
 VAR_1->ex.invalidate_rkey = VAR_2->rkey;
 VAR_1->send_flags = 0;
 VAR_1->num_sge = 0;
 VAR_1->next = VAR_4;
}
