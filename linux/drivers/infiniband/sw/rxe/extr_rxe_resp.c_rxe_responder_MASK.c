
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int state; int drop_msg; int goto_error; int * wqe; void* status; int psn; int aeth_syndrome; } ;
struct TYPE_5__ {int min_rnr_timer; } ;
struct TYPE_4__ {int device; } ;
struct rxe_qp {TYPE_3__ resp; int srq; TYPE_2__ attr; int valid; TYPE_1__ ibqp; } ;
struct rxe_pkt_info {int psn; } ;
struct rxe_dev {int dummy; } ;
typedef enum resp_states { ____Placeholder_resp_states } resp_states ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct rxe_qp*,struct rxe_pkt_info*) ;
 int FUNC_2 (struct rxe_qp*,struct rxe_pkt_info*) ;
 int FUNC_3 (struct rxe_qp*,struct rxe_pkt_info*) ;
 int FUNC_4 (struct rxe_qp*,struct rxe_pkt_info*) ;
 int FUNC_5 (struct rxe_qp*,struct rxe_pkt_info*) ;
 int FUNC_6 (struct rxe_qp*,struct rxe_pkt_info*) ;
 int FUNC_7 (struct rxe_qp*,struct rxe_pkt_info*) ;
 int FUNC_8 (struct rxe_qp*,struct rxe_pkt_info*) ;
 int FUNC_9 (struct rxe_qp*,int ,void*) ;
 int FUNC_10 (struct rxe_qp*) ;
 int FUNC_11 (struct rxe_qp*,struct rxe_pkt_info*) ;
 int FUNC_12 (struct rxe_qp*,struct rxe_pkt_info*) ;
 int FUNC_13 (struct rxe_qp*,struct rxe_pkt_info*) ;
 int FUNC_14 (struct rxe_qp*,struct rxe_pkt_info**) ;
 int FUNC_15 (char*,int ,int ) ;
 int FUNC_16 (char*,int ) ;
 int FUNC_17 (struct rxe_qp*) ;
 int FUNC_18 (struct rxe_qp*) ;
 int FUNC_19 (struct rxe_qp*,struct rxe_pkt_info*) ;
 int * VAR_14 ;
 int FUNC_20 (struct rxe_qp*) ;
 int FUNC_21 (struct rxe_dev*,int ) ;
 int FUNC_22 (struct rxe_qp*,int) ;
 int FUNC_23 (struct rxe_qp*) ;
 int FUNC_24 (struct rxe_qp*) ;
 int FUNC_25 (struct rxe_qp*,struct rxe_pkt_info*,int,int ) ;
 struct rxe_dev* FUNC_26 (int ) ;

int FUNC_27(void *VAR_15)
{
 struct rxe_qp *VAR_16 = (struct rxe_qp *)VAR_15;
 struct rxe_dev *VAR_17 = FUNC_26(VAR_16->ibqp.device);
 enum resp_states VAR_18;
 struct rxe_pkt_info *VAR_19 = ((void*)0);
 int VAR_20 = 0;

 FUNC_20(VAR_16);

 VAR_16->resp.aeth_syndrome = VAR_0;

 if (!VAR_16->valid) {
  VAR_20 = -VAR_8;
  goto done;
 }

 switch (VAR_16->resp.state) {
 case 157:
  VAR_18 = 128;
  break;

 default:
  VAR_18 = 130;
  break;
 }

 while (1) {
  FUNC_15("qp#%d state = %s\n", FUNC_17(VAR_16),
    VAR_14[VAR_18]);
  switch (VAR_18) {
  case 130:
   VAR_18 = FUNC_14(VAR_16, &VAR_19);
   break;
  case 152:
   VAR_18 = FUNC_5(VAR_16, VAR_19);
   break;
  case 154:
   VAR_18 = FUNC_3(VAR_16, VAR_19);
   break;
  case 153:
   VAR_18 = FUNC_4(VAR_16, VAR_19);
   break;
  case 151:
   VAR_18 = FUNC_6(VAR_16, VAR_19);
   break;
  case 155:
   VAR_18 = FUNC_2(VAR_16, VAR_19);
   break;
  case 150:
   VAR_18 = FUNC_7(VAR_16, VAR_19);
   break;
  case 132:
   VAR_18 = FUNC_13(VAR_16, VAR_19);
   break;
  case 148:
   VAR_18 = FUNC_11(VAR_16, VAR_19);
   break;
  case 129:
   VAR_18 = FUNC_19(VAR_16, VAR_19);
   break;
  case 156:
   VAR_18 = FUNC_1(VAR_16, VAR_19);
   break;
  case 149:
   VAR_18 = FUNC_8(VAR_16, VAR_19);
   break;
  case 146:
   VAR_18 = FUNC_12(VAR_16, VAR_19);
   break;
  case 137:

   FUNC_25(VAR_16, VAR_19, VAR_2, VAR_16->resp.psn);
   VAR_18 = 149;
   break;

  case 134:
  case 140:
  case 139:
  case 133:
  case 141:

   FUNC_9(VAR_16, VAR_1,
       VAR_12);
   VAR_18 = 148;
   break;

  case 138:
   VAR_18 = FUNC_10(VAR_16);
   break;
  case 135:
   if (FUNC_18(VAR_16) == VAR_9) {
    FUNC_21(VAR_17, VAR_13);

    FUNC_25(VAR_16, VAR_19, VAR_5 |
      (~VAR_6 &
      VAR_16->attr.min_rnr_timer),
      VAR_19->psn);
   } else {

    VAR_16->resp.drop_msg = 1;
   }
   VAR_18 = 149;
   break;

  case 136:
   if (FUNC_18(VAR_16) == VAR_9) {

    FUNC_9(VAR_16, VAR_3,
        VAR_11);
    VAR_18 = 148;
   } else {
    VAR_16->resp.drop_msg = 1;
    if (VAR_16->srq) {

     VAR_16->resp.status = VAR_11;
     VAR_18 = 148;
    } else {

     VAR_18 = 149;
    }
   }
   break;

  case 143:
   if (FUNC_18(VAR_16) == VAR_9) {

    FUNC_9(VAR_16, VAR_1,
        VAR_12);
    VAR_18 = 148;
   } else if (VAR_16->srq) {

    VAR_16->resp.status = VAR_12;
    VAR_18 = 148;
   } else {

    VAR_16->resp.drop_msg = 1;
    VAR_18 = 149;
   }
   break;

  case 142:

   FUNC_9(VAR_16, VAR_4,
       VAR_10);
   VAR_18 = 148;
   break;

  case 144:

   VAR_18 = 145;
   break;

  case 147:
   if (VAR_16->resp.goto_error) {
    VAR_18 = 145;
    break;
   }

   goto done;

  case 131:
   if (VAR_16->resp.goto_error) {
    VAR_18 = 145;
    break;
   }

   goto exit;

  case 128:
   FUNC_22(VAR_16, 0);
   VAR_16->resp.wqe = ((void*)0);
   goto exit;

  case 145:
   VAR_16->resp.goto_error = 0;
   FUNC_16("qp#%d moved to error state\n", FUNC_17(VAR_16));
   FUNC_24(VAR_16);
   goto exit;

  default:
   FUNC_0(1);
  }
 }

exit:
 VAR_20 = -VAR_7;
done:
 FUNC_23(VAR_16);
 return VAR_20;
}
