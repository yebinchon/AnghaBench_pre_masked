
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int num_sge; int flags; TYPE_1__* sge; int opcode; int id; } ;
struct siw_wqe {int wr_status; int ** mem; scalar_t__ processed; int bytes; TYPE_2__ sqe; } ;
struct siw_sqe {TYPE_3__* sge; int flags; int opcode; int id; } ;
struct siw_qp {int rx_tagged; } ;
struct TYPE_6__ {int length; int lkey; int laddr; } ;
struct TYPE_4__ {int length; int lkey; int laddr; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct siw_sqe* FUNC_1 (struct siw_qp*) ;
 struct siw_wqe* FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct siw_qp *VAR_3)
{
 struct siw_sqe *VAR_4;
 struct siw_wqe *VAR_5 = ((void*)0);


 FUNC_3();

 VAR_4 = FUNC_1(VAR_3);
 if (FUNC_0(VAR_4->flags) & VAR_1) {

  VAR_5 = FUNC_2(&VAR_3->rx_tagged);
  VAR_5->sqe.id = VAR_4->id;
  VAR_5->sqe.opcode = VAR_4->opcode;
  VAR_5->sqe.sge[0].laddr = VAR_4->sge[0].laddr;
  VAR_5->sqe.sge[0].lkey = VAR_4->sge[0].lkey;
  VAR_5->sqe.sge[0].length = VAR_4->sge[0].length;
  VAR_5->sqe.flags = VAR_4->flags;
  VAR_5->sqe.num_sge = 1;
  VAR_5->bytes = VAR_4->sge[0].length;
  VAR_5->processed = 0;
  VAR_5->mem[0] = ((void*)0);

  FUNC_4();
  VAR_5->wr_status = VAR_2;

  return 0;
 }
 return -VAR_0;
}
