
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int sent_psn_nak; int drop_msg; int psn; } ;
struct TYPE_3__ {int device; } ;
struct rxe_qp {TYPE_2__ resp; TYPE_1__ ibqp; } ;
struct rxe_pkt_info {int mask; int psn; } ;
struct rxe_dev {int dummy; } ;
typedef enum resp_states { ____Placeholder_resp_states } resp_states ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct rxe_qp*) ;
 int FUNC_2 (struct rxe_dev*,int ) ;
 struct rxe_dev* FUNC_3 (int ) ;

__attribute__((used)) static enum resp_states FUNC_4(struct rxe_qp *VAR_7,
      struct rxe_pkt_info *VAR_8)
{
 int VAR_9 = FUNC_0(VAR_8->psn, VAR_7->resp.psn);
 struct rxe_dev *VAR_10 = FUNC_3(VAR_7->ibqp.device);

 switch (FUNC_1(VAR_7)) {
 case 129:
  if (VAR_9 > 0) {
   if (VAR_7->resp.sent_psn_nak)
    return VAR_1;

   VAR_7->resp.sent_psn_nak = 1;
   FUNC_2(VAR_10, VAR_5);
   return VAR_3;

  } else if (VAR_9 < 0) {
   FUNC_2(VAR_10, VAR_4);
   return VAR_2;
  }

  if (VAR_7->resp.sent_psn_nak)
   VAR_7->resp.sent_psn_nak = 0;

  break;

 case 128:
  if (VAR_7->resp.drop_msg || VAR_9 != 0) {
   if (VAR_8->mask & VAR_6) {
    VAR_7->resp.drop_msg = 0;
    return VAR_0;
   }

   VAR_7->resp.drop_msg = 1;
   return VAR_1;
  }
  break;
 default:
  break;
 }

 return VAR_0;
}
