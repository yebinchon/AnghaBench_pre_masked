
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_9__ {int npkts; int ctrl; scalar_t__ iov_len; } ;
struct TYPE_6__ {int ver_tid_offset; int * swdata; } ;
struct sdma_req_info {int iov_len; int comp_idx; int * lrh; scalar_t__ iov_base; TYPE_1__ kdeth; int * bth; scalar_t__* pbc; int npkts; int ctrl; int fragsize; } ;
struct user_sdma_request {int data_iovs; int ahg_idx; int seqcomp; int seqsubmitted; int* tids; int tidoffset; int n_tids; TYPE_4__ info; int sde; struct sdma_req_info hdr; scalar_t__ tididx; scalar_t__ data_len; TYPE_3__* iovs; int koffset; int txps; scalar_t__ has_error; scalar_t__ seqnum; scalar_t__ sent; scalar_t__ iov_idx; struct hfi1_user_sdma_comp_q* cq; struct hfi1_user_sdma_pkt_q* pq; } ;
struct iovec {int iov_len; int comp_idx; int * lrh; scalar_t__ iov_base; TYPE_1__ kdeth; int * bth; scalar_t__* pbc; int npkts; int ctrl; int fragsize; } ;
struct TYPE_7__ {int wait_dma; } ;
struct hfi1_user_sdma_pkt_q {scalar_t__ state; TYPE_2__ busy; int n_reqs; struct user_sdma_request* reqs; int req_in_use; struct hfi1_devdata* dd; } ;
struct hfi1_user_sdma_comp_q {int dummy; } ;
struct hfi1_filedata {scalar_t__ subctxt; struct hfi1_user_sdma_comp_q* cq; struct hfi1_user_sdma_pkt_q* pq; struct hfi1_ctxtdata* uctxt; } ;
struct hfi1_devdata {TYPE_5__* pport; int unit; } ;
struct hfi1_ctxtdata {scalar_t__ ctxt; } ;
typedef int info ;
struct TYPE_10__ {int vls_operational; } ;
struct TYPE_8__ {TYPE_4__ iov; int list; scalar_t__ offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_7 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int*) ;
 int FUNC_3 (int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_4 (int*) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_5 (struct user_sdma_request*,char*,...) ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct sdma_req_info*,scalar_t__,int) ;
 int FUNC_10 (int) ;
 scalar_t__ FUNC_11 (TYPE_5__*,int,int,int,int ) ;
 int FUNC_12 (int ,char*,int ,scalar_t__,scalar_t__,int,...) ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (TYPE_4__*,struct sdma_req_info*,int) ;
 int* FUNC_16 (scalar_t__,int) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (struct user_sdma_request*,TYPE_3__*) ;
 int FUNC_19 (struct hfi1_user_sdma_pkt_q*) ;
 int FUNC_20 (int ) ;
 scalar_t__ FUNC_21 (int ) ;
 int FUNC_22 (struct hfi1_devdata*,int) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (struct hfi1_devdata*,int,int) ;
 int FUNC_26 (struct hfi1_user_sdma_pkt_q*,struct hfi1_user_sdma_comp_q*,int,int ,int) ;
 scalar_t__ FUNC_27 (int,int ) ;
 int FUNC_28 (struct hfi1_devdata*,scalar_t__,scalar_t__,int,scalar_t__) ;
 int FUNC_29 (struct hfi1_devdata*,scalar_t__,scalar_t__,int,int) ;
 int FUNC_30 (struct hfi1_devdata*,scalar_t__,scalar_t__,int) ;
 int FUNC_31 (struct hfi1_devdata*,scalar_t__,scalar_t__,int*) ;
 scalar_t__ FUNC_32 (int) ;
 int FUNC_33 (struct user_sdma_request*,int) ;
 int FUNC_34 (struct user_sdma_request*,int) ;
 int FUNC_35 (int ,int) ;
 int FUNC_36 (int ,int,int ) ;

int FUNC_37(struct hfi1_filedata *VAR_25,
       struct iovec *VAR_26, unsigned long VAR_27,
       unsigned long *VAR_28)
{
 int VAR_29 = 0, VAR_30;
 struct hfi1_ctxtdata *VAR_31 = VAR_25->uctxt;
 struct hfi1_user_sdma_pkt_q *VAR_32 = VAR_25->pq;
 struct hfi1_user_sdma_comp_q *VAR_33 = VAR_25->cq;
 struct hfi1_devdata *VAR_34 = VAR_32->dd;
 unsigned long VAR_35 = 0;
 u8 VAR_36 = VAR_24;
 struct sdma_req_info VAR_37;
 struct user_sdma_request *VAR_38;
 u8 VAR_39, VAR_40, VAR_41;
 u16 VAR_42;
 u32 VAR_43;
 u16 VAR_44;
 u32 VAR_45;

 if (VAR_26[VAR_35].iov_len < sizeof(VAR_37) + sizeof(VAR_38->hdr)) {
  FUNC_12(
     VAR_16,
     "[%u:%u:%u] First vector not big enough for header %lu/%lu",
     VAR_34->unit, VAR_31->ctxt, VAR_25->subctxt,
     VAR_26[VAR_35].iov_len, sizeof(VAR_37) + sizeof(VAR_38->hdr));
  return -VAR_4;
 }
 VAR_29 = FUNC_9(&VAR_37, VAR_26[VAR_35].iov_base, sizeof(VAR_37));
 if (VAR_29) {
  FUNC_12(VAR_16, "[%u:%u:%u] Failed to copy info QW (%d)",
     VAR_34->unit, VAR_31->ctxt, VAR_25->subctxt, VAR_29);
  return -VAR_3;
 }

 FUNC_31(VAR_34, VAR_31->ctxt, VAR_25->subctxt,
         (u16 *)&VAR_37);
 if (VAR_37.comp_idx >= VAR_23) {
  FUNC_12(VAR_16,
     "[%u:%u:%u:%u] Invalid comp index",
     VAR_34->unit, VAR_31->ctxt, VAR_25->subctxt, VAR_37.comp_idx);
  return -VAR_4;
 }





 if (FUNC_20(VAR_37.ctrl) < 1 || FUNC_20(VAR_37.ctrl) > VAR_27) {
  FUNC_12(VAR_16,
     "[%u:%u:%u:%u] Invalid iov count %d, dim %ld",
     VAR_34->unit, VAR_31->ctxt, VAR_25->subctxt, VAR_37.comp_idx,
     FUNC_20(VAR_37.ctrl), VAR_27);
  return -VAR_4;
 }

 if (!VAR_37.fragsize) {
  FUNC_12(VAR_16,
     "[%u:%u:%u:%u] Request does not specify fragsize",
     VAR_34->unit, VAR_31->ctxt, VAR_25->subctxt, VAR_37.comp_idx);
  return -VAR_4;
 }


 if (FUNC_27(VAR_37.comp_idx, VAR_32->req_in_use)) {
  FUNC_12(VAR_16, "[%u:%u:%u] Entry %u is in use",
     VAR_34->unit, VAR_31->ctxt, VAR_25->subctxt,
     VAR_37.comp_idx);
  return -VAR_0;
 }



 FUNC_30(VAR_34, VAR_31->ctxt, VAR_25->subctxt,
          VAR_37.comp_idx);
 VAR_38 = VAR_32->reqs + VAR_37.comp_idx;
 VAR_38->data_iovs = FUNC_20(VAR_37.ctrl) - 1;
 VAR_38->data_len = 0;
 VAR_38->pq = VAR_32;
 VAR_38->cq = VAR_33;
 VAR_38->ahg_idx = -1;
 VAR_38->iov_idx = 0;
 VAR_38->sent = 0;
 VAR_38->seqnum = 0;
 VAR_38->seqcomp = 0;
 VAR_38->seqsubmitted = 0;
 VAR_38->tids = ((void*)0);
 VAR_38->has_error = 0;
 FUNC_1(&VAR_38->txps);

 FUNC_15(&VAR_38->info, &VAR_37, sizeof(VAR_37));


 FUNC_6(&VAR_32->n_reqs);

 if (FUNC_21(VAR_37.ctrl) == VAR_6) {

  if (VAR_38->data_iovs < 2) {
   FUNC_5(VAR_38,
     "Not enough vectors for expected request");
   VAR_29 = -VAR_4;
   goto free_req;
  }
  VAR_38->data_iovs--;
 }

 if (!VAR_37.npkts || VAR_38->data_iovs > VAR_11) {
  FUNC_5(VAR_38, "Too many vectors (%u/%u)", VAR_38->data_iovs,
    VAR_11);
  VAR_29 = -VAR_4;
  goto free_req;
 }

 VAR_29 = FUNC_9(&VAR_38->hdr, VAR_26[VAR_35].iov_base + sizeof(VAR_37),
        sizeof(VAR_38->hdr));
 if (VAR_29) {
  FUNC_5(VAR_38, "Failed to copy header template (%d)", VAR_29);
  VAR_29 = -VAR_3;
  goto free_req;
 }


 if (!FUNC_0(VAR_20))
  VAR_38->hdr.pbc[2] = 0;


 VAR_39 = (FUNC_8(VAR_38->hdr.bth[0]) >> 24) & 0xff;
 if ((VAR_39 & VAR_21) !=
      VAR_22) {
  FUNC_5(VAR_38, "Invalid opcode (%d)", VAR_39);
  VAR_29 = -VAR_4;
  goto free_req;
 }





 VAR_41 = (FUNC_13(VAR_38->hdr.pbc[0]) >> 12) & 0xF;
 VAR_40 = (((FUNC_7(VAR_38->hdr.lrh[0]) >> 12) & 0xF) |
       (((FUNC_13(VAR_38->hdr.pbc[1]) >> 14) & 0x1) << 4));
 if (VAR_41 >= VAR_34->pport->vls_operational ||
     VAR_41 != FUNC_22(VAR_34, VAR_40)) {
  FUNC_5(VAR_38, "Invalid SC(%u)/VL(%u)", VAR_40, VAR_41);
  VAR_29 = -VAR_4;
  goto free_req;
 }


 VAR_42 = (u16)FUNC_8(VAR_38->hdr.bth[0]);
 VAR_43 = FUNC_7(VAR_38->hdr.lrh[3]);
 if (FUNC_11(VAR_34->pport, VAR_43, VAR_42, VAR_40, VAR_14)) {
  VAR_29 = -VAR_4;
  goto free_req;
 }






 if ((FUNC_7(VAR_38->hdr.lrh[0]) & 0x3) == VAR_7) {
  FUNC_5(VAR_38, "User tried to pass in a GRH");
  VAR_29 = -VAR_4;
  goto free_req;
 }

 VAR_38->koffset = FUNC_14(VAR_38->hdr.kdeth.swdata[6]);




 VAR_38->tidoffset = FUNC_3(VAR_38->hdr.kdeth.ver_tid_offset, VAR_12) *
  (FUNC_3(VAR_38->hdr.kdeth.ver_tid_offset, VAR_13) ?
   VAR_8 : VAR_9);
 FUNC_29(VAR_34, VAR_31->ctxt, VAR_25->subctxt,
            VAR_37.comp_idx, VAR_38->tidoffset);
 VAR_35++;


 for (VAR_30 = 0; VAR_30 < VAR_38->data_iovs; VAR_30++) {
  VAR_38->iovs[VAR_30].offset = 0;
  FUNC_1(&VAR_38->iovs[VAR_30].list);
  FUNC_15(&VAR_38->iovs[VAR_30].iov,
         VAR_26 + VAR_35++,
         sizeof(VAR_38->iovs[VAR_30].iov));
  VAR_29 = FUNC_18(VAR_38, &VAR_38->iovs[VAR_30]);
  if (VAR_29) {
   VAR_38->data_iovs = VAR_30;
   goto free_req;
  }
  VAR_38->data_len += VAR_38->iovs[VAR_30].iov.iov_len;
 }
 FUNC_28(VAR_34, VAR_31->ctxt, VAR_25->subctxt,
      VAR_37.comp_idx, VAR_38->data_len);
 if (VAR_36 > VAR_38->info.npkts)
  VAR_36 = VAR_38->info.npkts;
 if (FUNC_21(VAR_38->info.ctrl) == VAR_6) {
  u16 VAR_46 = VAR_26[VAR_35].iov_len / sizeof(*VAR_38->tids);
  u32 *VAR_47;

  if (!VAR_46 || VAR_46 > VAR_10) {
   VAR_29 = -VAR_4;
   goto free_req;
  }







  VAR_47 = FUNC_16(VAR_26[VAR_35].iov_base,
      VAR_46 * sizeof(*VAR_38->tids));
  if (FUNC_2(VAR_47)) {
   VAR_29 = FUNC_4(VAR_47);
   FUNC_5(VAR_38, "Failed to copy %d TIDs (%d)",
     VAR_46, VAR_29);
   goto free_req;
  }
  VAR_38->tids = VAR_47;
  VAR_38->n_tids = VAR_46;
  VAR_38->tididx = 0;
  VAR_35++;
 }

 VAR_44 = FUNC_7(VAR_38->hdr.lrh[1]);
 VAR_45 = FUNC_10(VAR_44);
 VAR_45 += VAR_31->ctxt + VAR_25->subctxt;
 VAR_38->sde = FUNC_25(VAR_34, VAR_45, VAR_41);

 if (!VAR_38->sde || !FUNC_24(VAR_38->sde)) {
  VAR_29 = -VAR_2;
  goto free_req;
 }


 if (VAR_38->info.npkts > 1 && FUNC_0(VAR_17))
  VAR_38->ahg_idx = FUNC_23(VAR_38->sde);

 FUNC_26(VAR_32, VAR_33, VAR_37.comp_idx, VAR_15, 0);
 VAR_32->state = VAR_19;

 VAR_29 = FUNC_34(VAR_38, VAR_36);
 if (FUNC_32(VAR_29 < 0 && VAR_29 != -VAR_1))
  goto free_req;







 while (VAR_38->seqsubmitted != VAR_38->info.npkts) {
  VAR_29 = FUNC_34(VAR_38, VAR_36);
  if (VAR_29 < 0) {
   if (VAR_29 != -VAR_1)
    goto free_req;
   FUNC_36(
    VAR_32->busy.wait_dma,
    (VAR_32->state == VAR_19),
    FUNC_17(
     VAR_18));
  }
 }
 *VAR_28 += VAR_35;
 return 0;
free_req:





 if (VAR_38->seqsubmitted < VAR_38->info.npkts) {
  if (VAR_38->seqsubmitted)
   FUNC_35(VAR_32->busy.wait_dma,
       (VAR_38->seqcomp == VAR_38->seqsubmitted - 1));
  FUNC_33(VAR_38, 1);
  FUNC_19(VAR_32);
  FUNC_26(VAR_32, VAR_33, VAR_37.comp_idx, VAR_5, VAR_29);
 }
 return VAR_29;
}
