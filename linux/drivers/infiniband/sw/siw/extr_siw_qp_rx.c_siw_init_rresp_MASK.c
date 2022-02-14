
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* uint64_t ;
typedef scalar_t__ uint32_t ;
struct siw_sqe {int num_sge; int flags; scalar_t__ rkey; void* raddr; TYPE_3__* sge; int opcode; } ;
struct siw_wqe {scalar_t__ wr_status; struct siw_sqe sqe; int ** mem; scalar_t__ processed; } ;
struct TYPE_5__ {int ddp_msn; int sink_stag; int source_stag; int read_size; int source_to; int sink_to; } ;
struct TYPE_6__ {TYPE_1__ rreq; } ;
struct siw_rx_stream {scalar_t__* ddp_msn; TYPE_2__ hdr; } ;
struct TYPE_8__ {int irq_size; } ;
struct siw_qp {int irq_put; int sq_lock; TYPE_4__ attrs; } ;
struct TYPE_7__ {scalar_t__ length; scalar_t__ lkey; void* laddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 struct siw_sqe* FUNC_2 (struct siw_qp*) ;
 scalar_t__ FUNC_3 (struct siw_sqe*) ;
 int FUNC_4 (char*,int ,int,int) ;
 int FUNC_5 (struct siw_qp*) ;
 int FUNC_6 (struct siw_qp*,int ,int ,int ,int ) ;
 int FUNC_7 (struct siw_qp*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 struct siw_wqe* FUNC_11 (struct siw_qp*) ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static int FUNC_13(struct siw_qp *VAR_12, struct siw_rx_stream *VAR_13)
{
 struct siw_wqe *VAR_14 = FUNC_11(VAR_12);
 struct siw_sqe *VAR_15;

 uint64_t VAR_16 = FUNC_1(VAR_13->hdr.rreq.sink_to),
   VAR_17 = FUNC_1(VAR_13->hdr.rreq.source_to);
 uint32_t VAR_18 = FUNC_0(VAR_13->hdr.rreq.read_size),
   VAR_19 = FUNC_0(VAR_13->hdr.rreq.source_stag),
   VAR_20 = FUNC_0(VAR_13->hdr.rreq.sink_stag),
   VAR_21 = FUNC_0(VAR_13->hdr.rreq.ddp_msn);

 int VAR_22 = 1, VAR_23 = 0;
 unsigned long VAR_24;

 if (FUNC_12(VAR_21 != VAR_13->ddp_msn[VAR_5])) {
  FUNC_6(VAR_12, VAR_10,
       VAR_1,
       VAR_0, 0);
  return -VAR_2;
 }
 FUNC_9(&VAR_12->sq_lock, VAR_24);

 if (VAR_14->wr_status == VAR_8) {




  VAR_14->processed = 0;
  VAR_14->mem[0] = ((void*)0);
  VAR_14->wr_status = VAR_9;
  VAR_15 = &VAR_14->sqe;
 } else {
  VAR_15 = FUNC_2(VAR_12);
  VAR_22 = 0;
 }
 if (FUNC_3(VAR_15)) {
  VAR_15->opcode = VAR_6;

  VAR_15->sge[0].length = VAR_18;
  VAR_15->sge[0].laddr = VAR_17;
  VAR_15->sge[0].lkey = VAR_19;




  VAR_15->sge[1].length = VAR_21;

  VAR_15->raddr = VAR_16;
  VAR_15->rkey = VAR_20;
  VAR_15->num_sge = VAR_18 ? 1 : 0;


  FUNC_8(VAR_15->flags, VAR_7);
 } else {
  FUNC_4("siw: [QP %u]: irq %d exceeded %d\n", FUNC_5(VAR_12),
   VAR_12->irq_put % VAR_12->attrs.irq_size, VAR_12->attrs.irq_size);

  FUNC_6(VAR_12, VAR_11,
       VAR_4,
       VAR_3, 0);
  VAR_23 = -VAR_2;
 }

 FUNC_10(&VAR_12->sq_lock, VAR_24);

 if (VAR_22)
  VAR_23 = FUNC_7(VAR_12);

 return VAR_23;
}
