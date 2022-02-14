
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
typedef int u8 ;
typedef int u64 ;
typedef scalar_t__ u32 ;
struct TYPE_8__ {scalar_t__ msn; size_t cidx; TYPE_3__* sw_rq; } ;
struct TYPE_6__ {size_t cidx; int size; struct t4_swsqe* sw_sq; int in_use; TYPE_1__* oldest_read; } ;
struct t4_wq {TYPE_4__ rq; TYPE_2__ sq; scalar_t__ flushed; } ;
struct t4_cqe {int header; } ;
struct t4_swsqe {int complete; int wr_id; struct t4_cqe cqe; } ;
struct t4_srq {int dummy; } ;
struct t4_cq {int cidx; int cqid; int sw_cidx; } ;
struct TYPE_7__ {int wr_id; } ;
struct TYPE_5__ {int signaled; } ;


 int FUNC_0 (struct t4_cqe*) ;
 int FUNC_1 (struct t4_cqe*) ;
 int FUNC_2 (struct t4_cqe*) ;
 scalar_t__ FUNC_3 (struct t4_cqe*) ;
 int FUNC_4 (struct t4_cqe*) ;
 int FUNC_5 (struct t4_cqe*) ;
 scalar_t__ FUNC_6 (struct t4_cqe*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct t4_cqe*) ;
 int FUNC_9 (struct t4_cqe*) ;
 int FUNC_10 (struct t4_cqe*) ;
 scalar_t__ FUNC_11 (struct t4_cqe*) ;
 size_t FUNC_12 (struct t4_cqe*) ;
 int FUNC_13 (struct t4_cqe*) ;
 scalar_t__ FUNC_14 (struct t4_cqe*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_15 (struct t4_cqe*) ;
 scalar_t__ FUNC_16 (struct t4_cqe*) ;
 scalar_t__ FUNC_17 (struct t4_cqe*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_18 (struct t4_wq*) ;
 int FUNC_19 (struct t4_wq*,struct t4_cqe*) ;
 scalar_t__ VAR_5 ;
 int FUNC_20 (int ) ;
 int FUNC_21 (struct t4_wq*,struct t4_cqe*,struct t4_cqe*) ;
 int FUNC_22 (struct t4_wq*,struct t4_cq*) ;
 int FUNC_23 (char*,...) ;
 int FUNC_24 (struct t4_cqe*,struct t4_srq*) ;
 int FUNC_25 (struct t4_cq*) ;
 int FUNC_26 (struct t4_cq*,struct t4_cqe**) ;
 int FUNC_27 (struct t4_wq*) ;
 int FUNC_28 (struct t4_wq*,int ) ;
 int FUNC_29 (struct t4_wq*) ;
 int FUNC_30 (struct t4_cq*) ;
 scalar_t__ FUNC_31 (struct t4_wq*) ;
 scalar_t__ FUNC_32 (int) ;

__attribute__((used)) static int FUNC_33(struct t4_wq *VAR_6, struct t4_cq *VAR_7, struct t4_cqe *VAR_8,
     u8 *VAR_9, u64 *VAR_10, u32 *VAR_11,
     struct t4_srq *VAR_12)
{
 int VAR_13 = 0;
 struct t4_cqe *VAR_14, VAR_15;

 *VAR_9 = 0;
 *VAR_11 = 0;
 VAR_13 = FUNC_26(VAR_7, &VAR_14);
 if (VAR_13)
  return VAR_13;

 FUNC_23("CQE OVF %u qpid 0x%0x genbit %u type %u status 0x%0x opcode 0x%0x len 0x%0x wrid_hi_stag 0x%x wrid_low_msn 0x%x\n",
   FUNC_4(VAR_14), FUNC_5(VAR_14),
   FUNC_1(VAR_14), FUNC_8(VAR_14), FUNC_6(VAR_14),
   FUNC_3(VAR_14), FUNC_2(VAR_14), FUNC_9(VAR_14),
   FUNC_10(VAR_14));




 if (VAR_6 == ((void*)0)) {
  VAR_13 = -VAR_0;
  goto skip_cqe;
 }




 if (VAR_6->flushed && !FUNC_17(VAR_14)) {
  VAR_13 = -VAR_0;
  goto skip_cqe;
 }




 if (FUNC_3(VAR_14) == VAR_2) {
  VAR_13 = -VAR_0;
  goto skip_cqe;
 }




 if (FUNC_14(VAR_14)) {
  *VAR_10 = FUNC_0(VAR_14);
  *VAR_8 = *VAR_14;
  goto skip_cqe;
 }
 if (FUNC_15(VAR_14) && (FUNC_3(VAR_14) == VAR_1)) {





  if (FUNC_8(VAR_14) == 1) {
   if (FUNC_6(VAR_14))
    FUNC_28(VAR_6, 0);
   VAR_13 = -VAR_0;
   goto skip_cqe;
  }





  if (FUNC_13(VAR_14) == 1) {
   if (FUNC_6(VAR_14))
    FUNC_28(VAR_6, 0);
   VAR_13 = -VAR_0;
   goto skip_cqe;
  }




  if (!VAR_6->sq.oldest_read->signaled) {
   FUNC_18(VAR_6);
   VAR_13 = -VAR_0;
   goto skip_cqe;
  }





  FUNC_21(VAR_6, VAR_14, &VAR_15);
  VAR_14 = &VAR_15;
  FUNC_18(VAR_6);
 }

 if (FUNC_6(VAR_14) || FUNC_31(VAR_6)) {
  *VAR_9 = (FUNC_6(VAR_14) == VAR_4);
  FUNC_28(VAR_6, 0);
 }




 if (FUNC_15(VAR_14)) {







  if (FUNC_32(!FUNC_6(VAR_14) &&
        FUNC_11(VAR_14) != VAR_6->rq.msn)) {
   FUNC_28(VAR_6, 0);
   VAR_14->header |= FUNC_20(FUNC_7(VAR_3));
  }
  goto proc_cqe;
 }
 if (!FUNC_17(VAR_14) && (FUNC_12(VAR_14) != VAR_6->sq.cidx)) {
  struct t4_swsqe *VAR_16;

  FUNC_23("out of order completion going in sw_sq at idx %u\n",
    FUNC_12(VAR_14));
  VAR_16 = &VAR_6->sq.sw_sq[FUNC_12(VAR_14)];
  VAR_16->cqe = *VAR_14;
  VAR_16->complete = 1;
  VAR_13 = -VAR_0;
  goto flush_wq;
 }

proc_cqe:
 *VAR_8 = *VAR_14;





 if (FUNC_16(VAR_14)) {
  int VAR_17 = FUNC_12(VAR_14);
  if (VAR_17 < VAR_6->sq.cidx)
   VAR_6->sq.in_use -= VAR_6->sq.size + VAR_17 - VAR_6->sq.cidx;
  else
   VAR_6->sq.in_use -= VAR_17 - VAR_6->sq.cidx;

  VAR_6->sq.cidx = (uint16_t)VAR_17;
  FUNC_23("completing sq idx %u\n", VAR_6->sq.cidx);
  *VAR_10 = VAR_6->sq.sw_sq[VAR_6->sq.cidx].wr_id;
  if (VAR_5)
   FUNC_19(VAR_6, VAR_14);
  FUNC_29(VAR_6);
 } else {
  if (!VAR_12) {
   FUNC_23("completing rq idx %u\n", VAR_6->rq.cidx);
   *VAR_10 = VAR_6->rq.sw_rq[VAR_6->rq.cidx].wr_id;
   if (VAR_5)
    FUNC_19(VAR_6, VAR_14);
   FUNC_27(VAR_6);
  } else {
   *VAR_10 = FUNC_24(VAR_14, VAR_12);
  }
  VAR_6->rq.msn++;
  goto skip_cqe;
 }

flush_wq:



 FUNC_22(VAR_6, VAR_7);

skip_cqe:
 if (FUNC_17(VAR_14)) {
  FUNC_23("cq %p cqid 0x%x skip sw cqe cidx %u\n",
    VAR_7, VAR_7->cqid, VAR_7->sw_cidx);
  FUNC_30(VAR_7);
 } else {
  FUNC_23("cq %p cqid 0x%x skip hw cqe cidx %u\n",
    VAR_7, VAR_7->cqid, VAR_7->cidx);
  FUNC_25(VAR_7);
 }
 return VAR_13;
}
