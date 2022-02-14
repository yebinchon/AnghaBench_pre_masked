
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_8__ {scalar_t__ wqe_cons; size_t cons; int pbl; } ;
struct qedr_qp {TYPE_4__ sq; TYPE_3__* wqe_wr_id; int ibqp; int id; } ;
struct qedr_dev {int dummy; } ;
struct qedr_cq {int dummy; } ;
struct ib_wc {int status; int opcode; int byte_len; int wr_id; int * qp; int src_qp; scalar_t__ wc_flags; scalar_t__ vendor_err; } ;
typedef enum ib_wc_status { ____Placeholder_ib_wc_status } ib_wc_status ;
struct TYPE_7__ {int opcode; int bytes_len; int wqe_size; TYPE_2__* mr; int wr_id; int signaled; } ;
struct TYPE_5__ {int completed; } ;
struct TYPE_6__ {TYPE_1__ info; } ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct qedr_qp*) ;
 int FUNC_2 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_3(struct qedr_dev *VAR_0, struct qedr_qp *VAR_1,
         struct qedr_cq *VAR_2, int VAR_3,
         struct ib_wc *VAR_4, u16 VAR_5, enum ib_wc_status VAR_6,
         int VAR_7)
{
 u16 VAR_8 = 0;

 while (VAR_3 && VAR_1->sq.wqe_cons != VAR_5) {
  if (!VAR_1->wqe_wr_id[VAR_1->sq.cons].signaled && !VAR_7) {
   FUNC_1(VAR_1);

   goto next_cqe;
  }


  VAR_4->status = VAR_6;
  VAR_4->vendor_err = 0;
  VAR_4->wc_flags = 0;
  VAR_4->src_qp = VAR_1->id;
  VAR_4->qp = &VAR_1->ibqp;

  VAR_4->wr_id = VAR_1->wqe_wr_id[VAR_1->sq.cons].wr_id;
  VAR_4->opcode = VAR_1->wqe_wr_id[VAR_1->sq.cons].opcode;

  switch (VAR_4->opcode) {
  case 130:
   VAR_4->byte_len = VAR_1->wqe_wr_id[VAR_1->sq.cons].bytes_len;
   break;
  case 133:
  case 132:
   VAR_4->byte_len = 8;
   break;
  case 129:
   VAR_1->wqe_wr_id[VAR_1->sq.cons].mr->info.completed++;
   break;
  case 131:
  case 128:
   VAR_4->byte_len = VAR_1->wqe_wr_id[VAR_1->sq.cons].bytes_len;
   break;
  default:
   break;
  }

  VAR_3--;
  VAR_4++;
  VAR_8++;
next_cqe:
  while (VAR_1->wqe_wr_id[VAR_1->sq.cons].wqe_size--)
   FUNC_0(&VAR_1->sq.pbl);
  FUNC_2(&VAR_1->sq);
 }

 return VAR_8;
}
