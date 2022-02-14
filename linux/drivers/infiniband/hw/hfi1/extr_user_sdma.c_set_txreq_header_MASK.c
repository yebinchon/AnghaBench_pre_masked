
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {int ver_tid_offset; int * swdata; } ;
struct hfi1_pkt_header {TYPE_1__ kdeth; int * bth; int * lrh; int * pbc; } ;
struct user_sdma_txreq {int flags; int txreq; struct hfi1_pkt_header hdr; } ;
struct TYPE_5__ {int comp_idx; int ctrl; } ;
struct TYPE_6__ {int * lrh; int * pbc; } ;
struct user_sdma_request {int seqnum; int* tids; size_t tididx; int tidoffset; int n_tids; TYPE_2__ info; int koffset; TYPE_3__ hdr; struct hfi1_user_sdma_pkt_q* pq; } ;
struct hfi1_user_sdma_pkt_q {int dd; int subctxt; int ctxt; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_7 ;
 int FUNC_2 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_4 (struct user_sdma_request*,struct hfi1_pkt_header*,int,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct hfi1_pkt_header,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct hfi1_pkt_header*,TYPE_3__*,int) ;
 int FUNC_12 (int) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (int ,int *,struct hfi1_pkt_header*,int) ;
 unsigned long FUNC_15 (int ,int,int) ;
 int FUNC_16 (int ,int ,int ,int ,struct hfi1_pkt_header*,int) ;
 int FUNC_17 (int ,int ,int ,int ,int,int,int) ;
 scalar_t__ FUNC_18 (int) ;

__attribute__((used)) static int FUNC_19(struct user_sdma_request *VAR_16,
       struct user_sdma_txreq *VAR_17, u32 VAR_18)
{
 struct hfi1_user_sdma_pkt_q *VAR_19 = VAR_16->pq;
 struct hfi1_pkt_header *VAR_20 = &VAR_17->hdr;
 u8 VAR_21;
 u16 VAR_22;
 int VAR_23;
 u32 VAR_24 = 0, VAR_25 = FUNC_9(*VAR_20, FUNC_12(VAR_18));


 FUNC_11(VAR_20, &VAR_16->hdr, sizeof(*VAR_20));





 VAR_22 = FUNC_10(VAR_20->pbc[0]);
 if (FUNC_3(VAR_22) != VAR_25) {
  VAR_22 = (VAR_22 & 0xf000) | FUNC_2(VAR_25);
  VAR_20->pbc[0] = FUNC_7(VAR_22);
  VAR_20->lrh[2] = FUNC_5(VAR_25 >> 2);






  if (FUNC_18(VAR_16->seqnum == 2)) {







   VAR_16->hdr.pbc[0] = VAR_20->pbc[0];
   VAR_16->hdr.lrh[2] = VAR_20->lrh[2];
  }
 }





 if (FUNC_18(!VAR_16->seqnum)) {
  VAR_23 = FUNC_4(VAR_16, VAR_20, VAR_25, VAR_18);
  if (VAR_23)
   return VAR_23;
  goto done;
 }

 VAR_20->bth[2] = FUNC_6(
  FUNC_15(VAR_20->bth[2],
    (FUNC_13(VAR_16->info.ctrl) == VAR_2),
    VAR_16->seqnum));


 if (FUNC_18(VAR_17->flags & VAR_14))
  VAR_20->bth[2] |= FUNC_6(1UL << 31);


 VAR_20->kdeth.swdata[6] = FUNC_8(VAR_16->koffset);

 if (FUNC_13(VAR_16->info.ctrl) == VAR_2) {
  VAR_24 = VAR_16->tids[VAR_16->tididx];




  if ((VAR_16->tidoffset) == (FUNC_0(VAR_24, VAR_7) *
      VAR_10)) {
   VAR_16->tidoffset = 0;




   if (++VAR_16->tididx > VAR_16->n_tids - 1 ||
       !VAR_16->tids[VAR_16->tididx]) {
    return -VAR_1;
   }
   VAR_24 = VAR_16->tids[VAR_16->tididx];
  }
  VAR_21 = FUNC_0(VAR_24, VAR_7) * VAR_10 >=
   VAR_5 ? VAR_4 :
   VAR_6;

  FUNC_1(VAR_20->kdeth.ver_tid_offset, VAR_13,
     FUNC_0(VAR_24, VAR_0));

  FUNC_1(VAR_20->kdeth.ver_tid_offset, VAR_12,
     FUNC_0(VAR_24, VAR_3));

  if (FUNC_18(VAR_17->flags & VAR_15))
   FUNC_1(VAR_20->kdeth.ver_tid_offset, VAR_11, 0);




  FUNC_17(
   VAR_19->dd, VAR_19->ctxt, VAR_19->subctxt, VAR_16->info.comp_idx,
   VAR_16->tidoffset, VAR_16->tidoffset >> VAR_21,
   VAR_21 != VAR_6);
  FUNC_1(VAR_20->kdeth.ver_tid_offset, VAR_8,
     VAR_16->tidoffset >> VAR_21);
  FUNC_1(VAR_20->kdeth.ver_tid_offset, VAR_9,
     VAR_21 != VAR_6);
 }
done:
 FUNC_16(VAR_19->dd, VAR_19->ctxt, VAR_19->subctxt,
        VAR_16->info.comp_idx, VAR_20, VAR_24);
 return FUNC_14(VAR_19->dd, &VAR_17->txreq, VAR_20, sizeof(*VAR_20));
}
