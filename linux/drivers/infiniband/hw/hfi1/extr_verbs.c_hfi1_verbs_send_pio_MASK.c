
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct send_context {int dummy; } ;
struct TYPE_12__ {void* vaddr; } ;
struct rvt_sge_state {TYPE_4__ sge; } ;
struct TYPE_9__ {int qp_type; int device; } ;
struct rvt_qp {int s_lock; TYPE_1__ ibqp; scalar_t__ s_wqe; int srate_mbps; struct hfi1_qp_priv* priv; } ;
struct pio_buf {int dummy; } ;
struct hfi1_qp_priv {int s_sc; int s_iowait; } ;
struct hfi1_pportdata {TYPE_5__* dd; } ;
struct hfi1_pkt_state {TYPE_8__* s_txreq; int opcode; struct hfi1_pportdata* ppd; } ;
typedef int (* pio_release_cb ) (struct rvt_qp*,int ) ;
typedef int pbc ;
struct TYPE_11__ {scalar_t__ hdr_type; int ibh; int opah; } ;
struct TYPE_10__ {TYPE_3__ hdr; } ;
struct TYPE_14__ {int hdr_dwords; int s_cur_size; TYPE_2__ phdr; struct send_context* psc; struct rvt_sge_state* ss; } ;
struct TYPE_13__ {void* sdma_pad_dma; } ;




 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct pio_buf*) ;
 scalar_t__ FUNC_1 (struct pio_buf*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct hfi1_pportdata*,int,int ,int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct rvt_qp*,int ) ;
 int FUNC_6 (struct rvt_qp*,int ,int) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (TYPE_8__*) ;
 int FUNC_9 (struct rvt_qp*,TYPE_3__*) ;
 int FUNC_10 (struct rvt_qp*,TYPE_3__*) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (TYPE_5__*,struct pio_buf*,int,int*,int) ;
 int FUNC_15 (struct rvt_qp*,struct send_context*,struct hfi1_pkt_state*,int ) ;
 int FUNC_16 (TYPE_4__*,int) ;
 int FUNC_17 (struct rvt_qp*,scalar_t__,int) ;
 int FUNC_18 (struct rvt_sge_state*,int,int) ;
 struct pio_buf* FUNC_19 (struct send_context*,int,int (*) (struct rvt_qp*,int ),struct rvt_qp*) ;
 int FUNC_20 (int ,int) ;
 int FUNC_21 (struct pio_buf*) ;
 int FUNC_22 (struct pio_buf*,void*,int) ;
 int FUNC_23 (struct pio_buf*,int,int*,int) ;
 int FUNC_24 (int *,unsigned long) ;
 int FUNC_25 (int *,unsigned long) ;
 int FUNC_26 (int ,TYPE_3__*,int) ;
 scalar_t__ FUNC_27 (int) ;
 int FUNC_28 (int ,int) ;
 int FUNC_29 (struct rvt_qp*,struct hfi1_pkt_state*,int) ;
 int FUNC_30 (struct rvt_qp*,int ) ;

int FUNC_31(struct rvt_qp *VAR_9, struct hfi1_pkt_state *VAR_10,
   u64 VAR_11)
{
 struct hfi1_qp_priv *VAR_12 = VAR_9->priv;
 u32 VAR_13 = VAR_10->s_txreq->hdr_dwords;
 struct rvt_sge_state *VAR_14 = VAR_10->s_txreq->ss;
 u32 VAR_15 = VAR_10->s_txreq->s_cur_size;
 u32 VAR_16;
 u32 VAR_17;
 struct hfi1_pportdata *VAR_18 = VAR_10->ppd;
 u32 *VAR_19;
 u8 VAR_20;
 unsigned long VAR_21 = 0;
 struct send_context *VAR_22;
 struct pio_buf *VAR_23;
 int VAR_24 = VAR_1;
 int VAR_25 = 0;
 pio_release_cb VAR_26 = ((void*)0);
 u8 VAR_27 = 0;

 if (VAR_10->s_txreq->phdr.hdr.hdr_type) {
  u8 VAR_28 = FUNC_7((VAR_13 << 2), VAR_15);

  VAR_27 = VAR_28 + (VAR_7 << 2) + VAR_8;
  VAR_16 = (VAR_15 + VAR_27) >> 2;
  VAR_19 = (u32 *)&VAR_10->s_txreq->phdr.hdr.opah;
 } else {
  VAR_16 = (VAR_15 + 3) >> 2;
  VAR_19 = (u32 *)&VAR_10->s_txreq->phdr.hdr.ibh;
 }
 VAR_17 = VAR_13 + VAR_16 + sizeof(VAR_11) / 4;


 switch (VAR_9->ibqp.qp_type) {
 case 129:
 case 128:
  VAR_26 = FUNC_30;
  break;
 default:
  break;
 }


 VAR_20 = VAR_12->s_sc;
 VAR_22 = VAR_10->s_txreq->psc;

 if (FUNC_13(VAR_11 == 0)) {
  u8 VAR_29 = FUNC_20(FUNC_3(VAR_9->ibqp.device), VAR_20);


  if (VAR_10->s_txreq->phdr.hdr.hdr_type)
   VAR_11 |= VAR_4 | VAR_3;
  else
   VAR_11 |= (FUNC_11(VAR_20) << VAR_2);

  VAR_11 = FUNC_2(VAR_18, VAR_11, VAR_9->srate_mbps, VAR_29, VAR_17);
  if (FUNC_27(FUNC_5(VAR_9, VAR_10->opcode)))
   VAR_11 = FUNC_6(VAR_9, VAR_10->opcode, VAR_11);
  else

   VAR_11 = FUNC_28(VAR_10->opcode, VAR_11);
 }
 if (VAR_26)
  FUNC_12(&VAR_12->s_iowait);
 VAR_23 = FUNC_19(VAR_22, VAR_17, VAR_26, VAR_9);
 if (FUNC_1(VAR_23)) {
  if (VAR_26)
   FUNC_30(VAR_9, 0);
  if (FUNC_0(VAR_23)) {






   FUNC_4(
    VAR_5,
    "alloc failed. state not active, completing");
   VAR_24 = VAR_0;
   goto pio_bail;
  } else {





   FUNC_4(VAR_5, "alloc failed. state active, queuing");
   VAR_25 = FUNC_15(VAR_9, VAR_22, VAR_10, VAR_6);
   if (!VAR_25)

    goto bail;

   return VAR_25;
  }
 }

 if (VAR_16 == 0) {
  FUNC_14(VAR_18->dd, VAR_23, VAR_11, VAR_19, VAR_13);
 } else {
  FUNC_23(VAR_23, VAR_11,
       VAR_19, VAR_13 * 4);
  if (VAR_14) {
   while (VAR_15) {
    void *VAR_30 = VAR_14->sge.vaddr;
    u32 VAR_31 = FUNC_16(&VAR_14->sge, VAR_15);

    FUNC_18(VAR_14, VAR_31, 0);
    FUNC_22(VAR_23, VAR_30, VAR_31);
    VAR_15 -= VAR_31;
   }
  }

  if (VAR_27)
   FUNC_22(VAR_23, VAR_18->dd->sdma_pad_dma,
      VAR_27);

  FUNC_21(VAR_23);
 }

 FUNC_29(VAR_9, VAR_10, VAR_17);
 FUNC_26(FUNC_3(VAR_9->ibqp.device),
          &VAR_10->s_txreq->phdr.hdr, FUNC_11(VAR_20));

pio_bail:
 FUNC_24(&VAR_9->s_lock, VAR_21);
 if (VAR_9->s_wqe) {
  FUNC_17(VAR_9, VAR_9->s_wqe, VAR_24);
 } else if (VAR_9->ibqp.qp_type == 129) {
  if (FUNC_27(VAR_24 == VAR_0))
   FUNC_10(VAR_9, &VAR_10->s_txreq->phdr.hdr);
  FUNC_9(VAR_9, &VAR_10->s_txreq->phdr.hdr);
 }
 FUNC_25(&VAR_9->s_lock, VAR_21);

 VAR_25 = 0;

bail:
 FUNC_8(VAR_10->s_txreq);
 return VAR_25;
}
