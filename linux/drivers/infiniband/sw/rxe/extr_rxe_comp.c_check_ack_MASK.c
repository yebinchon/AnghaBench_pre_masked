
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {int opcode; } ;
struct rxe_send_wqe {void* status; TYPE_2__ wr; int last_psn; int first_psn; } ;
struct TYPE_8__ {int task; int wait_psn; } ;
struct TYPE_7__ {int opcode; int psn; } ;
struct TYPE_5__ {int device; } ;
struct rxe_qp {TYPE_4__ req; TYPE_3__ comp; TYPE_1__ ibqp; } ;
struct rxe_pkt_info {unsigned int mask; int const opcode; int psn; } ;
struct rxe_dev {int dummy; } ;
typedef enum comp_state { ____Placeholder_comp_state } comp_state ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;






 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 unsigned int VAR_17 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct rxe_pkt_info*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct rxe_qp*) ;
 int FUNC_5 (struct rxe_dev*,int ) ;
 int FUNC_6 (int *,int) ;
 struct rxe_dev* FUNC_7 (int ) ;

__attribute__((used)) static inline enum comp_state FUNC_8(struct rxe_qp *VAR_18,
     struct rxe_pkt_info *VAR_19,
     struct rxe_send_wqe *VAR_20)
{
 unsigned int VAR_21 = VAR_19->mask;
 u8 VAR_22;
 struct rxe_dev *VAR_23 = FUNC_7(VAR_18->ibqp.device);


 switch (VAR_18->comp.opcode) {
 case -1:

  if (!(VAR_21 & VAR_17))
   return VAR_2;

  break;

 case 131:
 case 129:
  if (VAR_19->opcode != 129 &&
      VAR_19->opcode != 130) {



   if ((VAR_19->psn == VAR_20->first_psn &&
        VAR_19->opcode ==
        131) ||
       (VAR_20->first_psn == VAR_20->last_psn &&
        VAR_19->opcode ==
        128))
    break;

   return VAR_2;
  }
  break;
 default:
  FUNC_0(1);
 }


 switch (VAR_19->opcode) {
 case 131:
 case 130:
 case 128:
  VAR_22 = FUNC_1(VAR_19);

  if ((VAR_22 & VAR_0) != 140)
   return VAR_2;




 case 129:
  if (VAR_20->wr.opcode != VAR_13 &&
      VAR_20->wr.opcode != VAR_14) {
   VAR_20->status = VAR_7;
   return VAR_2;
  }
  FUNC_4(VAR_18);
  return VAR_4;

 case 132:
  VAR_22 = FUNC_1(VAR_19);

  if ((VAR_22 & VAR_0) != 140)
   return VAR_2;

  if (VAR_20->wr.opcode != VAR_11 &&
      VAR_20->wr.opcode != VAR_12)
   return VAR_2;
  FUNC_4(VAR_18);
  return VAR_1;

 case 133:
  VAR_22 = FUNC_1(VAR_19);
  switch (VAR_22 & VAR_0) {
  case 140:
   FUNC_4(VAR_18);
   return VAR_6;

  case 134:
   FUNC_5(VAR_23, VAR_15);
   return VAR_5;

  case 139:
   switch (VAR_22) {
   case 137:



    if (FUNC_3(VAR_19->psn, VAR_18->comp.psn) > 0) {
     FUNC_5(VAR_23,
       VAR_16);
     VAR_18->comp.psn = VAR_19->psn;
     if (VAR_18->req.wait_psn) {
      VAR_18->req.wait_psn = 0;
      FUNC_6(&VAR_18->req.task, 1);
     }
    }
    return VAR_3;

   case 138:
    VAR_20->status = VAR_9;
    return VAR_2;

   case 136:
    VAR_20->status = VAR_8;
    return VAR_2;

   case 135:
    VAR_20->status = VAR_10;
    return VAR_2;

   default:
    FUNC_2("unexpected nak %x\n", VAR_22);
    VAR_20->status = VAR_10;
    return VAR_2;
   }

  default:
   return VAR_2;
  }
  break;

 default:
  FUNC_2("unexpected opcode\n");
 }

 return VAR_2;
}
