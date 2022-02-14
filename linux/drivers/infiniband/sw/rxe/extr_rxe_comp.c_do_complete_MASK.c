
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int send_flags; scalar_t__ opcode; } ;
struct rxe_send_wqe {scalar_t__ status; TYPE_3__ wr; } ;
struct TYPE_8__ {int task; scalar_t__ wait_fence; } ;
struct TYPE_6__ {int queue; } ;
struct TYPE_5__ {int device; } ;
struct rxe_qp {scalar_t__ sq_sig_type; TYPE_4__ req; TYPE_2__ sq; int scq; TYPE_1__ ibqp; } ;
struct rxe_dev {int dummy; } ;
struct rxe_cqe {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct rxe_qp*,struct rxe_send_wqe*,struct rxe_cqe*) ;
 int FUNC_2 (struct rxe_dev*,int ) ;
 int FUNC_3 (int ,struct rxe_cqe*,int ) ;
 int FUNC_4 (int *,int) ;
 struct rxe_dev* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct rxe_qp *VAR_7, struct rxe_send_wqe *VAR_8)
{
 struct rxe_dev *VAR_9 = FUNC_5(VAR_7->ibqp.device);
 struct rxe_cqe VAR_10;

 if ((VAR_7->sq_sig_type == VAR_1) ||
     (VAR_8->wr.send_flags & VAR_0) ||
     VAR_8->status != VAR_2) {
  FUNC_1(VAR_7, VAR_8, &VAR_10);
  FUNC_0(VAR_7->sq.queue);
  FUNC_3(VAR_7->scq, &VAR_10, 0);
 } else {
  FUNC_0(VAR_7->sq.queue);
 }

 if (VAR_8->wr.opcode == VAR_3 ||
     VAR_8->wr.opcode == VAR_4 ||
     VAR_8->wr.opcode == VAR_5)
  FUNC_2(VAR_9, VAR_6);





 if (VAR_7->req.wait_fence) {
  VAR_7->req.wait_fence = 0;
  FUNC_4(&VAR_7->req.task, 1);
 }
}
