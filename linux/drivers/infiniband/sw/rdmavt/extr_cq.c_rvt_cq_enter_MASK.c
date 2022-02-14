
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef unsigned int u32 ;
struct rvt_k_cq_wc {unsigned int head; unsigned int tail; struct ib_wc* kqueue; } ;
struct rvt_dev_info {int dummy; } ;
struct rvt_cq_wc {int head; int tail; struct ib_uverbs_wc* uqueue; } ;
struct TYPE_7__ {unsigned int cqe; int cq_context; int (* event_handler ) (struct ib_event*,int ) ;int device; } ;
struct rvt_cq {int cq_full; scalar_t__ notify; int lock; int comptask; int comp_vector_cpu; int triggered; TYPE_2__ ibcq; struct rvt_dev_info* rdi; struct rvt_k_cq_wc* kqueue; struct rvt_cq_wc* queue; scalar_t__ ip; } ;
struct TYPE_9__ {int imm_data; } ;
struct ib_wc {scalar_t__ status; int port_num; int dlid_path_bits; int sl; int slid; int pkey_index; int wc_flags; int src_qp; TYPE_5__* qp; TYPE_4__ ex; int byte_len; int vendor_err; int opcode; int wr_id; } ;
struct TYPE_8__ {int imm_data; } ;
struct ib_uverbs_wc {scalar_t__ status; int port_num; int dlid_path_bits; int sl; int slid; int pkey_index; int wc_flags; int src_qp; int qp_num; TYPE_3__ ex; int byte_len; int vendor_err; int opcode; int wr_id; } ;
struct TYPE_6__ {TYPE_2__* cq; } ;
struct ib_event {int event; TYPE_1__ element; int device; } ;
struct TYPE_10__ {int qp_num; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned int) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (struct rvt_dev_info*,char*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (struct ib_event*,int ) ;
 int FUNC_8 (struct rvt_cq*,struct ib_wc*,unsigned int) ;
 scalar_t__ FUNC_9 (int) ;

bool FUNC_10(struct rvt_cq *VAR_6, struct ib_wc *VAR_7, bool VAR_8)
{
 struct ib_uverbs_wc *VAR_9 = ((void*)0);
 struct ib_wc *VAR_10 = ((void*)0);
 struct rvt_cq_wc *VAR_11 = ((void*)0);
 struct rvt_k_cq_wc *VAR_12 = ((void*)0);
 unsigned long VAR_13;
 u32 VAR_14;
 u32 VAR_15;
 u32 VAR_16;

 FUNC_5(&VAR_6->lock, VAR_13);

 if (VAR_6->ip) {
  VAR_11 = VAR_6->queue;
  VAR_9 = &VAR_11->uqueue[0];
  VAR_14 = FUNC_0(VAR_11->head);
  VAR_16 = FUNC_0(VAR_11->tail);
 } else {
  VAR_12 = VAR_6->kqueue;
  VAR_10 = &VAR_12->kqueue[0];
  VAR_14 = VAR_12->head;
  VAR_16 = VAR_12->tail;
 }





 if (VAR_14 >= (unsigned)VAR_6->ibcq.cqe) {
  VAR_14 = VAR_6->ibcq.cqe;
  VAR_15 = 0;
 } else {
  VAR_15 = VAR_14 + 1;
 }

 if (FUNC_9(VAR_15 == VAR_16 || VAR_6->cq_full)) {
  struct rvt_dev_info *VAR_17 = VAR_6->rdi;

  if (!VAR_6->cq_full)
   FUNC_4(VAR_17, "CQ is full!\n");
  VAR_6->cq_full = 1;
  FUNC_6(&VAR_6->lock, VAR_13);
  if (VAR_6->ibcq.event_handler) {
   struct ib_event VAR_18;

   VAR_18.device = VAR_6->ibcq.device;
   VAR_18.element.cq = &VAR_6->ibcq;
   VAR_18.event = VAR_2;
   VAR_6->ibcq.event_handler(&VAR_18, VAR_6->ibcq.cq_context);
  }
  return 0;
 }
 FUNC_8(VAR_6, VAR_7, VAR_14);
 if (VAR_9) {
  VAR_9[VAR_14].wr_id = VAR_7->wr_id;
  VAR_9[VAR_14].status = VAR_7->status;
  VAR_9[VAR_14].opcode = VAR_7->opcode;
  VAR_9[VAR_14].vendor_err = VAR_7->vendor_err;
  VAR_9[VAR_14].byte_len = VAR_7->byte_len;
  VAR_9[VAR_14].ex.imm_data = VAR_7->ex.imm_data;
  VAR_9[VAR_14].qp_num = VAR_7->qp->qp_num;
  VAR_9[VAR_14].src_qp = VAR_7->src_qp;
  VAR_9[VAR_14].wc_flags = VAR_7->wc_flags;
  VAR_9[VAR_14].pkey_index = VAR_7->pkey_index;
  VAR_9[VAR_14].slid = FUNC_2(VAR_7->slid);
  VAR_9[VAR_14].sl = VAR_7->sl;
  VAR_9[VAR_14].dlid_path_bits = VAR_7->dlid_path_bits;
  VAR_9[VAR_14].port_num = VAR_7->port_num;

  FUNC_1(VAR_11->head, VAR_15);
 } else {
  VAR_10[VAR_14] = *VAR_7;
  VAR_12->head = VAR_15;
 }

 if (VAR_6->notify == VAR_0 ||
     (VAR_6->notify == VAR_1 &&
      (VAR_8 || VAR_7->status != VAR_3))) {




  VAR_6->notify = VAR_4;
  VAR_6->triggered++;
  FUNC_3(VAR_6->comp_vector_cpu, VAR_5,
         &VAR_6->comptask);
 }

 FUNC_6(&VAR_6->lock, VAR_13);
 return 1;
}
