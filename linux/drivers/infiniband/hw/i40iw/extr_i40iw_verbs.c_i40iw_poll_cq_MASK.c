
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ imm_data; } ;
struct ib_wc {int vendor_err; int byte_len; int src_qp; struct ib_qp* qp; TYPE_3__ ex; void* opcode; int status; int wr_id; scalar_t__ wc_flags; } ;
struct ib_qp {int dummy; } ;
struct ib_cq {int dummy; } ;
struct TYPE_8__ {int rq_ring; int sq_ring; } ;
struct i40iw_sc_qp {TYPE_4__ qp_uk; scalar_t__ back_qp; } ;
struct i40iw_qp {scalar_t__ iwarp_state; int rq_drained; int sq_drained; } ;
struct TYPE_6__ {int (* iw_cq_poll_completion ) (struct i40iw_cq_uk*,struct i40iw_cq_poll_info*) ;} ;
struct i40iw_cq_uk {TYPE_2__ ops; } ;
struct i40iw_cq_poll_info {int major_err; int minor_err; int op_type; int bytes_xfered; int qp_id; scalar_t__ qp_handle; scalar_t__ error; int wr_id; } ;
struct TYPE_5__ {struct i40iw_cq_uk cq_uk; } ;
struct i40iw_cq {int lock; TYPE_1__ sc_cq; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct i40iw_cq_uk*,struct i40iw_cq_poll_info*) ;

__attribute__((used)) static int FUNC_5(struct ib_cq *VAR_9,
    int VAR_10,
    struct ib_wc *VAR_11)
{
 struct i40iw_cq *VAR_12;
 int VAR_13 = 0;
 struct i40iw_cq_poll_info VAR_14;
 enum i40iw_status_code VAR_15;
 struct i40iw_cq_uk *VAR_16;
 struct i40iw_sc_qp *VAR_17;
 struct i40iw_qp *VAR_18;
 unsigned long VAR_19;

 VAR_12 = (struct i40iw_cq *)VAR_9;
 VAR_16 = &VAR_12->sc_cq.cq_uk;

 FUNC_2(&VAR_12->lock, VAR_19);
 while (VAR_13 < VAR_10) {
  VAR_15 = VAR_16->ops.iw_cq_poll_completion(VAR_16, &VAR_14);
  if (VAR_15 == VAR_1) {
   break;
  } else if (VAR_15 == VAR_0) {
   continue;
  } else if (VAR_15) {
   if (!VAR_13)
    VAR_13 = -1;
   break;
  }
  VAR_11->wc_flags = 0;
  VAR_11->wr_id = VAR_14.wr_id;
  if (VAR_14.error) {
   VAR_11->status = VAR_8;
   VAR_11->vendor_err = VAR_14.major_err << 16 | VAR_14.minor_err;
  } else {
   VAR_11->status = VAR_7;
  }

  switch (VAR_14.op_type) {
  case 133:
   VAR_11->opcode = VAR_4;
   break;
  case 134:
  case 135:
   VAR_11->opcode = VAR_3;
   break;
  case 129:
  case 128:
  case 130:
  case 131:
   VAR_11->opcode = VAR_6;
   break;
  case 132:
   VAR_11->opcode = VAR_5;
   break;
  default:
   VAR_11->opcode = VAR_5;
   break;
  }

  VAR_11->ex.imm_data = 0;
  VAR_17 = (struct i40iw_sc_qp *)VAR_14.qp_handle;
  VAR_11->qp = (struct ib_qp *)VAR_17->back_qp;
  VAR_11->src_qp = VAR_14.qp_id;
  VAR_18 = (struct i40iw_qp *)VAR_17->back_qp;
  if (VAR_18->iwarp_state > VAR_2) {
   if (!FUNC_0(VAR_17->qp_uk.sq_ring))
    FUNC_1(&VAR_18->sq_drained);
   if (!FUNC_0(VAR_17->qp_uk.rq_ring))
    FUNC_1(&VAR_18->rq_drained);
  }
  VAR_11->byte_len = VAR_14.bytes_xfered;
  VAR_11++;
  VAR_13++;
 }
 FUNC_3(&VAR_12->lock, VAR_19);
 return VAR_13;
}
