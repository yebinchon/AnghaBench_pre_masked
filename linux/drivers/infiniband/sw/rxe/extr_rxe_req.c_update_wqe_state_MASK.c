
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxe_send_wqe {int state; } ;
struct rxe_qp {int dummy; } ;
struct rxe_pkt_info {int mask; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct rxe_qp*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_1(struct rxe_qp *VAR_4,
  struct rxe_send_wqe *VAR_5,
  struct rxe_pkt_info *VAR_6)
{
 if (VAR_6->mask & VAR_1) {
  if (FUNC_0(VAR_4) == VAR_0)
   VAR_5->state = VAR_2;
 } else {
  VAR_5->state = VAR_3;
 }
}
