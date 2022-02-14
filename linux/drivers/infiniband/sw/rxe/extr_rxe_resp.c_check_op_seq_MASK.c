
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int drop_msg; int opcode; } ;
struct rxe_qp {TYPE_1__ resp; } ;
struct rxe_pkt_info {int opcode; } ;
typedef enum resp_states { ____Placeholder_resp_states } resp_states ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct rxe_qp*) ;

__attribute__((used)) static enum resp_states FUNC_1(struct rxe_qp *VAR_5,
         struct rxe_pkt_info *VAR_6)
{
 switch (FUNC_0(VAR_5)) {
 case 129:
  switch (VAR_5->resp.opcode) {
  case 142:
  case 138:
   switch (VAR_6->opcode) {
   case 138:
   case 141:
   case 140:
   case 139:
    return VAR_0;
   default:
    return VAR_3;
   }

  case 146:
  case 143:
   switch (VAR_6->opcode) {
   case 143:
   case 145:
   case 144:
    return VAR_0;
   default:
    return VAR_3;
   }

  default:
   switch (VAR_6->opcode) {
   case 138:
   case 141:
   case 140:
   case 139:
   case 143:
   case 145:
   case 144:
    return VAR_2;
   default:
    return VAR_0;
   }
  }
  break;

 case 128:
  switch (VAR_5->resp.opcode) {
  case 133:
  case 130:
   switch (VAR_6->opcode) {
   case 130:
   case 132:
   case 131:
    return VAR_0;
   default:
    return VAR_4;
   }

  case 137:
  case 134:
   switch (VAR_6->opcode) {
   case 134:
   case 136:
   case 135:
    return VAR_0;
   default:
    return VAR_4;
   }

  default:
   switch (VAR_6->opcode) {
   case 130:
   case 132:
   case 131:
   case 134:
   case 136:
   case 135:
    VAR_5->resp.drop_msg = 1;
    return VAR_1;
   default:
    return VAR_0;
   }
  }
  break;

 default:
  return VAR_0;
 }
}
