
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {size_t cons; } ;
struct qedr_qp {TYPE_4__ sq; TYPE_3__* wqe_wr_id; } ;
struct TYPE_7__ {scalar_t__ opcode; TYPE_2__* mr; } ;
struct TYPE_5__ {int completed; } ;
struct TYPE_6__ {TYPE_1__ info; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct qedr_qp *VAR_1)
{
 if (VAR_1->wqe_wr_id[VAR_1->sq.cons].opcode == VAR_0)
  VAR_1->wqe_wr_id[VAR_1->sq.cons].mr->info.completed++;
}
