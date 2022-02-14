
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rxe_send_wqe {scalar_t__ last_psn; scalar_t__ state; int mask; } ;
struct TYPE_2__ {scalar_t__ psn; } ;
struct rxe_qp {TYPE_1__ comp; } ;
struct rxe_pkt_info {scalar_t__ psn; } ;
typedef scalar_t__ s32 ;
typedef enum comp_state { ____Placeholder_comp_state } comp_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (struct rxe_qp*) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static inline enum comp_state FUNC_2(struct rxe_qp *VAR_7,
     struct rxe_pkt_info *VAR_8,
     struct rxe_send_wqe *VAR_9)
{
 s32 VAR_10;




 VAR_10 = FUNC_0(VAR_8->psn, VAR_9->last_psn);
 if (VAR_10 > 0) {
  if (VAR_9->state == VAR_6) {
   if (VAR_9->mask & VAR_5)
    return VAR_4;

   FUNC_1(VAR_7);
   return VAR_2;
  } else {
   return VAR_3;
  }
 }


 VAR_10 = FUNC_0(VAR_8->psn, VAR_7->comp.psn);
 if (VAR_10 < 0) {



  if (VAR_8->psn == VAR_9->last_psn)
   return VAR_1;
  else
   return VAR_3;
 } else if ((VAR_10 > 0) && (VAR_9->mask & VAR_5)) {
  return VAR_3;
 } else {
  return VAR_0;
 }
}
