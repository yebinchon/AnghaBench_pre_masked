
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_10__ {int task; } ;
struct TYPE_8__ {scalar_t__ state; } ;
struct TYPE_7__ {scalar_t__ state; } ;
struct TYPE_6__ {int device; } ;
struct rxe_qp {TYPE_5__ comp; TYPE_3__ resp; TYPE_2__ req; TYPE_1__ ibqp; } ;
struct rxe_pkt_info {int mask; TYPE_4__* wqe; } ;
struct rxe_dev {int xmit_errors; } ;
struct TYPE_9__ {int state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,struct rxe_pkt_info*,int) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (struct rxe_qp*) ;
 int FUNC_5 (struct rxe_dev*,int ) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (struct rxe_pkt_info*,struct sk_buff*) ;
 struct rxe_dev* FUNC_9 (int ) ;
 int VAR_7 ;

__attribute__((used)) static inline int FUNC_10(struct rxe_qp *VAR_8, struct rxe_pkt_info *VAR_9,
      struct sk_buff *VAR_10)
{
 int VAR_11;
 int VAR_12 = VAR_9->mask & VAR_6;
 struct rxe_dev *VAR_13 = FUNC_9(VAR_8->ibqp.device);

 if ((VAR_12 && (VAR_8->req.state != VAR_1)) ||
     (!VAR_12 && (VAR_8->resp.state != VAR_1))) {
  FUNC_3("Packet dropped. QP is not in ready state\n");
  goto drop;
 }

 if (VAR_9->mask & VAR_5) {
  FUNC_2(FUNC_0(VAR_10), VAR_9, sizeof(*VAR_9));
  FUNC_6(VAR_10);
  VAR_11 = 0;
 } else {
  VAR_11 = FUNC_8(VAR_9, VAR_10);
 }

 if (VAR_11) {
  VAR_13->xmit_errors++;
  FUNC_5(VAR_13, VAR_2);
  return VAR_11;
 }

 if ((FUNC_4(VAR_8) != VAR_0) &&
     (VAR_9->mask & VAR_4)) {
  VAR_9->wqe->state = VAR_7;
  FUNC_7(&VAR_8->comp.task, 1);
 }

 FUNC_5(VAR_13, VAR_3);
 goto done;

drop:
 FUNC_1(VAR_10);
 VAR_11 = 0;
done:
 return VAR_11;
}
