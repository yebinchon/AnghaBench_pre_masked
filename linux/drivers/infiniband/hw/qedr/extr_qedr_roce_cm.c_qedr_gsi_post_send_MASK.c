
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t prod; } ;
struct qedr_qp {scalar_t__ state; int q_lock; struct qedr_dev* dev; TYPE_2__ sq; TYPE_1__* wqe_wr_id; } ;
struct qedr_dev {int dummy; } ;
struct qed_roce_ll2_packet {int dummy; } ;
struct ib_send_wr {scalar_t__ num_sge; scalar_t__ opcode; struct ib_send_wr* next; int wr_id; } ;
struct ib_qp {int dummy; } ;
struct TYPE_3__ {int wr_id; } ;


 int FUNC_0 (struct qedr_dev*,int ,char*,scalar_t__,int ,int ,int ) ;
 int FUNC_1 (struct qedr_dev*,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 struct qedr_qp* FUNC_2 (struct ib_qp*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct qedr_dev*,struct qedr_qp*,struct ib_send_wr const*,struct qed_roce_ll2_packet**) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (struct qedr_dev*,struct qed_roce_ll2_packet*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

int FUNC_10(struct ib_qp *VAR_6, const struct ib_send_wr *VAR_7,
         const struct ib_send_wr **VAR_8)
{
 struct qed_roce_ll2_packet *VAR_9 = ((void*)0);
 struct qedr_qp *VAR_10 = FUNC_2(VAR_6);
 struct qedr_dev *VAR_11 = VAR_10->dev;
 unsigned long VAR_12;
 int VAR_13;

 if (VAR_10->state != VAR_4) {
  *VAR_8 = VAR_7;
  FUNC_1(VAR_11,
         "gsi post recv: failed to post rx buffer. state is %d and not QED_ROCE_QP_STATE_RTS\n",
         VAR_10->state);
  return -VAR_1;
 }

 if (VAR_7->num_sge > VAR_5) {
  FUNC_1(VAR_11, "gsi post send: num_sge is too large (%d>%d)\n",
         VAR_7->num_sge, VAR_5);
  VAR_13 = -VAR_1;
  goto err;
 }

 if (VAR_7->opcode != VAR_2) {
  FUNC_1(VAR_11,
         "gsi post send: failed due to unsupported opcode %d\n",
         VAR_7->opcode);
  VAR_13 = -VAR_1;
  goto err;
 }

 FUNC_8(&VAR_10->q_lock, VAR_12);

 VAR_13 = FUNC_5(VAR_11, VAR_10, VAR_7, &VAR_9);
 if (VAR_13) {
  FUNC_9(&VAR_10->q_lock, VAR_12);
  goto err;
 }

 VAR_13 = FUNC_7(VAR_11, VAR_9);

 if (!VAR_13) {
  VAR_10->wqe_wr_id[VAR_10->sq.prod].wr_id = VAR_7->wr_id;
  FUNC_6(&VAR_10->sq);
  FUNC_0(VAR_10->dev, VAR_3,
    "gsi post send: opcode=%d, in_irq=%ld, irqs_disabled=%d, wr_id=%llx\n",
    VAR_7->opcode, FUNC_3(), FUNC_4(), VAR_7->wr_id);
 } else {
  FUNC_1(VAR_11, "gsi post send: failed to transmit (rc=%d)\n", VAR_13);
  VAR_13 = -VAR_0;
  *VAR_8 = VAR_7;
 }

 FUNC_9(&VAR_10->q_lock, VAR_12);

 if (VAR_7->next) {
  FUNC_1(VAR_11,
         "gsi post send: failed second WR. Only one WR may be passed at a time\n");
  *VAR_8 = VAR_7->next;
  VAR_13 = -VAR_1;
 }

 return VAR_13;

err:
 *VAR_8 = VAR_7;
 return VAR_13;
}
