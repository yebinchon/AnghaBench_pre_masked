
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rxe_send_wqe {scalar_t__ state; } ;
struct TYPE_2__ {int queue; } ;
struct rxe_qp {TYPE_1__ sq; } ;
struct rxe_pkt_info {int dummy; } ;
typedef enum comp_state { ____Placeholder_comp_state } comp_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct rxe_send_wqe* FUNC_0 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static inline enum comp_state FUNC_1(struct rxe_qp *VAR_8,
          struct rxe_pkt_info *VAR_9,
          struct rxe_send_wqe **VAR_10)
{
 struct rxe_send_wqe *VAR_11;




 VAR_11 = FUNC_0(VAR_8->sq.queue);
 *VAR_10 = VAR_11;


 if (!VAR_11 || VAR_11->state == VAR_7)
  return VAR_9 ? VAR_2 : VAR_4;


 if (VAR_11->state == VAR_5)
  return VAR_1;


 if (VAR_11->state == VAR_6)
  return VAR_3;


 return VAR_9 ? VAR_0 : VAR_4;
}
