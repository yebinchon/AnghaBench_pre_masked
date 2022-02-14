
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct TYPE_6__ {size_t sge_offset; int resid; int * inline_data; } ;
struct TYPE_5__ {int send_flags; } ;
struct rxe_send_wqe {TYPE_3__ dma; TYPE_2__ wr; } ;
struct TYPE_4__ {int device; } ;
struct rxe_qp {int pd; TYPE_1__ ibqp; } ;
struct rxe_pkt_info {int mask; } ;
struct rxe_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rxe_pkt_info*) ;
 int FUNC_1 (int ,int ,TYPE_3__*,int *,int,int ,int *) ;
 int VAR_2 ;
 int FUNC_2 (int *,int *,int) ;
 int * FUNC_3 (struct rxe_pkt_info*) ;
 int FUNC_4 (struct rxe_dev*,int ,int *,int) ;
 int FUNC_5 (struct rxe_pkt_info*,struct sk_buff*,int *) ;
 struct rxe_dev* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct rxe_qp *VAR_3, struct rxe_send_wqe *VAR_4,
         struct rxe_pkt_info *VAR_5, struct sk_buff *VAR_6,
         int VAR_7)
{
 struct rxe_dev *VAR_8 = FUNC_6(VAR_3->ibqp.device);
 u32 VAR_9 = 0;
 u32 *VAR_10;
 int VAR_11;

 VAR_11 = FUNC_5(VAR_5, VAR_6, &VAR_9);
 if (VAR_11)
  return VAR_11;

 if (VAR_5->mask & VAR_1) {
  if (VAR_4->wr.send_flags & VAR_0) {
   u8 *VAR_12 = &VAR_4->dma.inline_data[VAR_4->dma.sge_offset];

   VAR_9 = FUNC_4(VAR_8, VAR_9, VAR_12, VAR_7);
   FUNC_2(FUNC_3(VAR_5), VAR_12, VAR_7);

   VAR_4->dma.resid -= VAR_7;
   VAR_4->dma.sge_offset += VAR_7;
  } else {
   VAR_11 = FUNC_1(VAR_3->pd, 0, &VAR_4->dma,
     FUNC_3(VAR_5), VAR_7,
     VAR_2,
     &VAR_9);
   if (VAR_11)
    return VAR_11;
  }
 }
 VAR_10 = FUNC_3(VAR_5) + VAR_7 + FUNC_0(VAR_5);

 *VAR_10 = ~VAR_9;

 return 0;
}
