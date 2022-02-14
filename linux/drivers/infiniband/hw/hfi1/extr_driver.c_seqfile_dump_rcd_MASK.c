
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef scalar_t__ u32 ;
struct seq_file {int dummy; } ;
struct ps_mdata {int ps_head; } ;
struct TYPE_6__ {int * bth; } ;
struct TYPE_4__ {TYPE_3__ oth; } ;
struct TYPE_5__ {TYPE_1__ l; TYPE_3__ oth; } ;
struct ib_header {TYPE_2__ u; int * lrh; } ;
struct hfi1_packet {TYPE_3__* ohdr; struct ib_header* hdr; } ;
struct hfi1_ctxtdata {int rhf_offset; scalar_t__ rcvhdrq; int ctxt; int dd; int flags; int rcvhdrqentsize; int rcvhdrq_cnt; } ;
typedef int __le32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct ib_header* FUNC_3 (struct hfi1_ctxtdata*,int *) ;
 int FUNC_4 (struct hfi1_ctxtdata*,struct hfi1_packet*) ;
 int FUNC_5 (struct ps_mdata*,struct hfi1_packet*) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (struct ps_mdata*,int ,struct hfi1_ctxtdata*) ;
 scalar_t__ FUNC_8 (struct ps_mdata*,int ,struct hfi1_ctxtdata*) ;
 int FUNC_9 (int ,int ,int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct seq_file*,char*,int,int,scalar_t__,scalar_t__,...) ;
 int FUNC_13 (struct ps_mdata*,struct hfi1_ctxtdata*) ;

void FUNC_14(struct seq_file *VAR_8, struct hfi1_ctxtdata *VAR_9)
{
 struct hfi1_packet VAR_10;
 struct ps_mdata VAR_11;

 FUNC_12(VAR_8, "Rcd %u: RcvHdr cnt %u entsize %u %s head %llu tail %llu\n",
     VAR_9->ctxt, VAR_9->rcvhdrq_cnt, VAR_9->rcvhdrqentsize,
     FUNC_0(VAR_9->flags, VAR_0) ?
     "dma_rtail" : "nodma_rtail",
     FUNC_9(VAR_9->dd, VAR_9->ctxt, VAR_3) &
     VAR_4,
     FUNC_9(VAR_9->dd, VAR_9->ctxt, VAR_5));

 FUNC_4(VAR_9, &VAR_10);
 FUNC_5(&VAR_11, &VAR_10);

 while (1) {
  __le32 *VAR_12 = (__le32 *)VAR_9->rcvhdrq + VAR_11.ps_head +
      VAR_9->rhf_offset;
  struct ib_header *VAR_13;
  u64 VAR_14 = FUNC_11(VAR_12);
  u32 VAR_15 = FUNC_10(VAR_14), VAR_16;
  u8 VAR_17;
  u32 VAR_18;
  u8 VAR_19;

  if (FUNC_7(&VAR_11, VAR_14, VAR_9))
   break;

  if (FUNC_8(&VAR_11, VAR_14, VAR_9))
   goto next;

  if (VAR_15 > VAR_6)
   goto next;

  VAR_10.hdr = FUNC_3(VAR_9, VAR_12);
  VAR_13 = VAR_10.hdr;

  VAR_19 = FUNC_1(VAR_13->lrh[0]) & 3;

  if (VAR_19 == VAR_1)
   VAR_10.ohdr = &VAR_13->u.oth;
  else if (VAR_19 == VAR_2)
   VAR_10.ohdr = &VAR_13->u.l.oth;
  else
   goto next;

  VAR_17 = (FUNC_2(VAR_10.ohdr->bth[0]) >> 24);
  VAR_16 = FUNC_2(VAR_10.ohdr->bth[1]) & VAR_7;
  VAR_18 = FUNC_6(FUNC_2(VAR_10.ohdr->bth[2]));

  FUNC_12(VAR_8, "\tEnt %u: opcode 0x%x, qpn 0x%x, psn 0x%x\n",
      VAR_11.ps_head, VAR_17, VAR_16, VAR_18);
next:
  FUNC_13(&VAR_11, VAR_9);
 }
}
