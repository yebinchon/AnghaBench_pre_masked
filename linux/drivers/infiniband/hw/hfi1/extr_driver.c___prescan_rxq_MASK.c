
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u64 ;
typedef scalar_t__ u32 ;
struct rvt_qp {int dummy; } ;
struct rvt_dev_info {int dummy; } ;
struct ps_mdata {int ps_head; } ;
struct TYPE_10__ {int * bth; } ;
struct TYPE_8__ {int grh; TYPE_5__ oth; } ;
struct TYPE_9__ {TYPE_3__ l; TYPE_5__ oth; } ;
struct ib_header {TYPE_4__ u; } ;
struct hfi1_packet {TYPE_5__* ohdr; int * grh; struct ib_header* hdr; struct hfi1_ctxtdata* rcd; } ;
struct hfi1_ibport {int rvp; } ;
struct hfi1_ctxtdata {int rhf_offset; TYPE_2__* dd; scalar_t__ rcvhdrq; } ;
typedef int __le32 ;
struct TYPE_6__ {struct rvt_dev_info rdi; } ;
struct TYPE_7__ {TYPE_1__ verbs_dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 struct ib_header* FUNC_2 (struct hfi1_ctxtdata*,int *) ;
 int FUNC_3 (struct hfi1_packet*) ;
 int FUNC_4 (struct rvt_qp*,struct hfi1_packet*,int) ;
 scalar_t__ FUNC_5 (struct ib_header*) ;
 int FUNC_6 (struct ps_mdata*,struct hfi1_packet*) ;
 scalar_t__ FUNC_7 (struct ps_mdata*,int ,struct hfi1_ctxtdata*) ;
 scalar_t__ FUNC_8 (struct ps_mdata*,int ,struct hfi1_ctxtdata*) ;
 struct hfi1_ibport* FUNC_9 (struct hfi1_ctxtdata*) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int *) ;
 struct rvt_qp* FUNC_14 (struct rvt_dev_info*,int *,scalar_t__) ;
 int FUNC_15 (struct ps_mdata*,struct hfi1_ctxtdata*) ;

__attribute__((used)) static void FUNC_16(struct hfi1_packet *VAR_6)
{
 struct hfi1_ctxtdata *VAR_7 = VAR_6->rcd;
 struct ps_mdata VAR_8;

 FUNC_6(&VAR_8, VAR_6);

 while (1) {
  struct hfi1_ibport *VAR_9 = FUNC_9(VAR_7);
  __le32 *VAR_10 = (__le32 *)VAR_7->rcvhdrq + VAR_8.ps_head +
      VAR_6->rcd->rhf_offset;
  struct rvt_qp *VAR_11;
  struct ib_header *VAR_12;
  struct rvt_dev_info *VAR_13 = &VAR_7->dd->verbs_dev.rdi;
  u64 VAR_14 = FUNC_13(VAR_10);
  u32 VAR_15 = FUNC_12(VAR_14), VAR_16, VAR_17;
  u8 VAR_18;

  if (FUNC_7(&VAR_8, VAR_14, VAR_7))
   break;

  if (FUNC_8(&VAR_8, VAR_14, VAR_7))
   goto next;

  if (VAR_15 != VAR_4)
   goto next;

  VAR_6->hdr = FUNC_2(VAR_6->rcd, VAR_10);
  VAR_12 = VAR_6->hdr;
  VAR_18 = FUNC_5(VAR_12);

  if (VAR_18 == VAR_0) {
   VAR_6->ohdr = &VAR_12->u.oth;
   VAR_6->grh = ((void*)0);
  } else if (VAR_18 == VAR_1) {
   VAR_6->ohdr = &VAR_12->u.l.oth;
   VAR_6->grh = &VAR_12->u.l.grh;
  } else {
   goto next;
  }

  if (!FUNC_3(VAR_6))
   goto next;

  VAR_17 = FUNC_0(VAR_6->ohdr->bth[1]);
  VAR_16 = VAR_17 & VAR_5;
  FUNC_10();
  VAR_11 = FUNC_14(VAR_13, &VAR_9->rvp, VAR_16);

  if (!VAR_11) {
   FUNC_11();
   goto next;
  }

  FUNC_4(VAR_11, VAR_6, 1);
  FUNC_11();


  VAR_17 &= ~(VAR_3 | VAR_2);
  VAR_6->ohdr->bth[1] = FUNC_1(VAR_17);
next:
  FUNC_15(&VAR_8, VAR_7);
 }
}
