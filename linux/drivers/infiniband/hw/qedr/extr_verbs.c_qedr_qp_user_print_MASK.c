
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int buf_len; int buf_addr; } ;
struct TYPE_3__ {int buf_len; int buf_addr; } ;
struct qedr_qp {TYPE_2__ urq; TYPE_1__ usq; } ;
struct qedr_dev {int dummy; } ;


 int FUNC_0 (struct qedr_dev*,int ,char*,struct qedr_qp*,int ,int ,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static inline void FUNC_1(struct qedr_dev *VAR_1, struct qedr_qp *VAR_2)
{
 FUNC_0(VAR_1, VAR_0, "create qp: successfully created user QP. "
   "qp=%p. "
   "sq_addr=0x%llx, "
   "sq_len=%zd, "
   "rq_addr=0x%llx, "
   "rq_len=%zd"
   "\n",
   VAR_2,
   VAR_2->usq.buf_addr,
   VAR_2->usq.buf_len, VAR_2->urq.buf_addr, VAR_2->urq.buf_len);
}
