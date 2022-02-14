
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int drop_msg; } ;
struct TYPE_4__ {int qp_access_flags; } ;
struct rxe_qp {TYPE_1__ resp; TYPE_2__ attr; } ;
struct rxe_pkt_info {int mask; } ;
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
 int FUNC_0 (int) ;
 int FUNC_1 (struct rxe_qp*) ;

__attribute__((used)) static enum resp_states FUNC_2(struct rxe_qp *VAR_9,
           struct rxe_pkt_info *VAR_10)
{
 switch (FUNC_1(VAR_9)) {
 case 131:
  if (((VAR_10->mask & VAR_7) &&
       !(VAR_9->attr.qp_access_flags & VAR_1)) ||
      ((VAR_10->mask & VAR_8) &&
       !(VAR_9->attr.qp_access_flags & VAR_2)) ||
      ((VAR_10->mask & VAR_6) &&
       !(VAR_9->attr.qp_access_flags & VAR_0))) {
   return VAR_5;
  }

  break;

 case 129:
  if ((VAR_10->mask & VAR_8) &&
      !(VAR_9->attr.qp_access_flags & VAR_2)) {
   VAR_9->resp.drop_msg = 1;
   return VAR_4;
  }

  break;

 case 128:
 case 130:
 case 132:
  break;

 default:
  FUNC_0(1);
  break;
 }

 return VAR_3;
}
