
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u32 ;
struct siw_wqe {scalar_t__ wr_status; } ;
struct siw_sqe {int flags; int num_sge; uintptr_t base_mr; int access; scalar_t__ id; int opcode; int rkey; int raddr; int * sge; } ;
struct TYPE_6__ {int in_syscall; int tx_suspend; } ;
struct TYPE_7__ {int state; size_t sq_size; scalar_t__ sq_max_sges; int flags; } ;
struct siw_qp {size_t sq_put; int state_lock; TYPE_1__ tx_ctx; scalar_t__ kernel_verbs; int sq_lock; TYPE_2__ attrs; struct siw_sqe* sendq; } ;
struct TYPE_8__ {int invalidate_rkey; } ;
struct ib_send_wr {scalar_t__ num_sge; int send_flags; int opcode; struct ib_send_wr* next; TYPE_3__ ex; int sg_list; scalar_t__ wr_id; } ;
struct ib_qp {int dummy; } ;
struct TYPE_10__ {int rkey; int remote_addr; } ;
struct TYPE_9__ {int access; int key; scalar_t__ mr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;







 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int FUNC_0 (int *) ;
 TYPE_5__* FUNC_1 (struct ib_send_wr const*) ;
 TYPE_4__* FUNC_2 (struct ib_send_wr const*) ;
 int FUNC_3 (struct siw_qp*) ;
 int FUNC_4 (struct ib_send_wr const*,struct siw_sqe*) ;
 int FUNC_5 (int ,int *,int) ;
 int FUNC_6 (struct siw_qp*,char*,...) ;
 int FUNC_7 (struct siw_qp*,int ) ;
 scalar_t__ FUNC_8 (struct siw_qp*) ;
 int FUNC_9 (struct siw_qp*) ;
 int FUNC_10 () ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,unsigned long) ;
 struct siw_qp* FUNC_13 (struct ib_qp*) ;
 struct siw_wqe* FUNC_14 (struct siw_qp*) ;
 scalar_t__ FUNC_15 (int) ;
 int FUNC_16 (int *) ;

int FUNC_17(struct ib_qp *VAR_23, const struct ib_send_wr *VAR_24,
    const struct ib_send_wr **VAR_25)
{
 struct siw_qp *VAR_26 = FUNC_13(VAR_23);
 struct siw_wqe *VAR_27 = FUNC_14(VAR_26);

 unsigned long VAR_28;
 int VAR_29 = 0;





 if (!FUNC_0(&VAR_26->state_lock)) {
  *VAR_25 = VAR_24;
  FUNC_6(VAR_26, "QP locked, state %d\n", VAR_26->attrs.state);
  return -VAR_2;
 }
 if (FUNC_15(VAR_26->attrs.state != VAR_15)) {
  FUNC_16(&VAR_26->state_lock);
  *VAR_25 = VAR_24;
  FUNC_6(VAR_26, "QP out of state %d\n", VAR_26->attrs.state);
  return -VAR_2;
 }
 if (VAR_24 && !VAR_26->kernel_verbs) {
  FUNC_6(VAR_26, "wr must be empty for user mapped sq\n");
  FUNC_16(&VAR_26->state_lock);
  *VAR_25 = VAR_24;
  return -VAR_0;
 }
 FUNC_11(&VAR_26->sq_lock, VAR_28);

 while (VAR_24) {
  u32 VAR_30 = VAR_26->sq_put % VAR_26->attrs.sq_size;
  struct siw_sqe *VAR_31 = &VAR_26->sendq[VAR_30];

  if (VAR_31->flags) {
   FUNC_6(VAR_26, "sq full\n");
   VAR_29 = -VAR_1;
   break;
  }
  if (VAR_24->num_sge > VAR_26->attrs.sq_max_sges) {
   FUNC_6(VAR_26, "too many sge's: %d\n", VAR_24->num_sge);
   VAR_29 = -VAR_0;
   break;
  }
  VAR_31->id = VAR_24->wr_id;

  if ((VAR_24->send_flags & VAR_5) ||
      (VAR_26->attrs.flags & VAR_16))
   VAR_31->flags |= VAR_19;

  if (VAR_24->send_flags & VAR_3)
   VAR_31->flags |= VAR_18;

  switch (VAR_24->opcode) {
  case 129:
  case 128:
   if (VAR_24->send_flags & VAR_6)
    VAR_31->flags |= VAR_20;

   if (!(VAR_24->send_flags & VAR_4)) {
    FUNC_5(VAR_24->sg_list, VAR_31->sge,
          VAR_24->num_sge);
    VAR_31->num_sge = VAR_24->num_sge;
   } else {
    VAR_29 = FUNC_4(VAR_24, VAR_31);
    if (VAR_29 <= 0) {
     VAR_29 = -VAR_0;
     break;
    }
    VAR_31->flags |= VAR_17;
    VAR_31->num_sge = 1;
   }
   if (VAR_24->opcode == 129)
    VAR_31->opcode = VAR_12;
   else {
    VAR_31->opcode = VAR_13;
    VAR_31->rkey = VAR_24->ex.invalidate_rkey;
   }
   break;

  case 132:
  case 133:







   if (FUNC_15(VAR_24->num_sge != 1)) {
    VAR_29 = -VAR_0;
    break;
   }
   FUNC_5(VAR_24->sg_list, &VAR_31->sge[0], 1);



   VAR_31->raddr = FUNC_1(VAR_24)->remote_addr;
   VAR_31->rkey = FUNC_1(VAR_24)->rkey;
   VAR_31->num_sge = 1;

   if (VAR_24->opcode == 133)
    VAR_31->opcode = VAR_9;
   else
    VAR_31->opcode = VAR_10;
   break;

  case 131:
   if (!(VAR_24->send_flags & VAR_4)) {
    FUNC_5(VAR_24->sg_list, &VAR_31->sge[0],
          VAR_24->num_sge);
    VAR_31->num_sge = VAR_24->num_sge;
   } else {
    VAR_29 = FUNC_4(VAR_24, VAR_31);
    if (FUNC_15(VAR_29 < 0)) {
     VAR_29 = -VAR_0;
     break;
    }
    VAR_31->flags |= VAR_17;
    VAR_31->num_sge = 1;
   }
   VAR_31->raddr = FUNC_1(VAR_24)->remote_addr;
   VAR_31->rkey = FUNC_1(VAR_24)->rkey;
   VAR_31->opcode = VAR_14;
   break;

  case 130:
   VAR_31->base_mr = (uintptr_t)FUNC_2(VAR_24)->mr;
   VAR_31->rkey = FUNC_2(VAR_24)->key;
   VAR_31->access = FUNC_2(VAR_24)->access & VAR_7;
   VAR_31->opcode = VAR_11;
   break;

  case 134:
   VAR_31->rkey = VAR_24->ex.invalidate_rkey;
   VAR_31->opcode = VAR_8;
   break;

  default:
   FUNC_6(VAR_26, "ib wr type %d unsupported\n",
       VAR_24->opcode);
   VAR_29 = -VAR_0;
   break;
  }
  FUNC_6(VAR_26, "opcode %d, flags 0x%x, wr_id 0x%pK\n",
      VAR_31->opcode, VAR_31->flags,
      (void *)(uintptr_t)VAR_31->id);

  if (FUNC_15(VAR_29 < 0))
   break;


  FUNC_10();
  VAR_31->flags |= VAR_21;

  VAR_26->sq_put++;
  VAR_24 = VAR_24->next;
 }
 if (VAR_27->wr_status != VAR_22) {
  FUNC_12(&VAR_26->sq_lock, VAR_28);
  goto skip_direct_sending;
 }
 VAR_29 = FUNC_3(VAR_26);
 FUNC_12(&VAR_26->sq_lock, VAR_28);

 if (VAR_29 <= 0)
  goto skip_direct_sending;

 if (VAR_26->kernel_verbs) {
  VAR_29 = FUNC_9(VAR_26);
 } else {
  VAR_26->tx_ctx.in_syscall = 1;

  if (FUNC_8(VAR_26) != 0 && !(VAR_26->tx_ctx.tx_suspend))
   FUNC_7(VAR_26, 0);

  VAR_26->tx_ctx.in_syscall = 0;
 }
skip_direct_sending:

 FUNC_16(&VAR_26->state_lock);

 if (VAR_29 >= 0)
  return 0;



 FUNC_6(VAR_26, "error %d\n", VAR_29);

 *VAR_25 = VAR_24;
 return VAR_29;
}
