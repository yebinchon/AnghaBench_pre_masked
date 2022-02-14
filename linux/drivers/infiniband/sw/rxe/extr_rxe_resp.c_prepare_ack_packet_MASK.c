
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct TYPE_7__ {int atomic_orig; int msn; } ;
struct TYPE_6__ {int dest_qp_num; } ;
struct TYPE_5__ {int device; } ;
struct rxe_qp {TYPE_3__ resp; TYPE_2__ attr; int pri_av; TYPE_1__ ibqp; } ;
struct rxe_pkt_info {int opcode; int mask; int paylen; int psn; scalar_t__ offset; int hdr; struct rxe_qp* qp; } ;
struct rxe_dev {int dummy; } ;
struct TYPE_8__ {int length; int mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rxe_pkt_info*,int ) ;
 int FUNC_1 (struct rxe_pkt_info*,int ) ;
 int FUNC_2 (struct rxe_pkt_info*,int ) ;
 int FUNC_3 (struct rxe_pkt_info*) ;
 int FUNC_4 (struct rxe_pkt_info*,int ) ;
 int FUNC_5 (struct rxe_pkt_info*,int) ;
 int FUNC_6 (struct rxe_pkt_info*,int) ;
 int FUNC_7 (struct rxe_pkt_info*,int ) ;
 int FUNC_8 (struct rxe_pkt_info*,int ) ;
 int FUNC_9 (struct rxe_pkt_info*,int ) ;
 int FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (int ,int ,scalar_t__) ;
 int * FUNC_12 (struct rxe_pkt_info*) ;
 struct sk_buff* FUNC_13 (struct rxe_dev*,int *,int,struct rxe_pkt_info*) ;
 TYPE_4__* VAR_4 ;
 int FUNC_14 (struct rxe_pkt_info*,struct sk_buff*,int *) ;
 struct rxe_dev* FUNC_15 (int ) ;

__attribute__((used)) static struct sk_buff *FUNC_16(struct rxe_qp *VAR_5,
       struct rxe_pkt_info *VAR_6,
       struct rxe_pkt_info *VAR_7,
       int VAR_8,
       int VAR_9,
       u32 VAR_10,
       u8 VAR_11,
       u32 *VAR_12)
{
 struct rxe_dev *VAR_13 = FUNC_15(VAR_5->ibqp.device);
 struct sk_buff *VAR_14;
 u32 VAR_15 = 0;
 u32 *VAR_16;
 int VAR_17;
 int VAR_18;
 int VAR_19;




 VAR_18 = (-VAR_9) & 0x3;
 VAR_17 = VAR_4[VAR_8].length + VAR_9 + VAR_18 + VAR_3;

 VAR_14 = FUNC_13(VAR_13, &VAR_5->pri_av, VAR_17, VAR_7);
 if (!VAR_14)
  return ((void*)0);

 VAR_7->qp = VAR_5;
 VAR_7->opcode = VAR_8;
 VAR_7->mask = VAR_4[VAR_8].mask;
 VAR_7->offset = VAR_6->offset;
 VAR_7->paylen = VAR_17;


 FUNC_11(VAR_7->hdr, VAR_6->hdr, VAR_6->offset + VAR_2);

 FUNC_5(VAR_7, VAR_8);
 FUNC_8(VAR_7, VAR_5->attr.dest_qp_num);
 FUNC_6(VAR_7, VAR_18);
 FUNC_9(VAR_7, 0);
 FUNC_7(VAR_7, VAR_10);
 FUNC_4(VAR_7, 0);
 VAR_7->psn = VAR_10;

 if (VAR_7->mask & VAR_0) {
  FUNC_1(VAR_7, VAR_11);
  FUNC_0(VAR_7, VAR_5->resp.msn);
 }

 if (VAR_7->mask & VAR_1)
  FUNC_2(VAR_7, VAR_5->resp.atomic_orig);

 VAR_19 = FUNC_14(VAR_7, VAR_14, &VAR_15);
 if (VAR_19) {
  FUNC_10(VAR_14);
  return ((void*)0);
 }

 if (VAR_12) {

  *VAR_12 = VAR_15;
 } else {
  VAR_16 = FUNC_12(VAR_7) + VAR_9 + FUNC_3(VAR_7);
  *VAR_16 = ~VAR_15;
 }

 return VAR_14;
}
