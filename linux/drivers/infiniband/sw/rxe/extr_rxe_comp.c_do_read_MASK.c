
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ resid; } ;
struct rxe_send_wqe {TYPE_1__ dma; } ;
struct rxe_qp {int pd; } ;
struct rxe_pkt_info {int mask; } ;
typedef enum comp_state { ____Placeholder_comp_state } comp_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,TYPE_1__*,int ,int ,int ,int *) ;
 int FUNC_1 (struct rxe_pkt_info*) ;
 int FUNC_2 (struct rxe_pkt_info*) ;
 int VAR_5 ;

__attribute__((used)) static inline enum comp_state FUNC_3(struct rxe_qp *VAR_6,
          struct rxe_pkt_info *VAR_7,
          struct rxe_send_wqe *VAR_8)
{
 int VAR_9;

 VAR_9 = FUNC_0(VAR_6->pd, VAR_3,
   &VAR_8->dma, FUNC_1(VAR_7),
   FUNC_2(VAR_7), VAR_5, ((void*)0));
 if (VAR_9)
  return VAR_1;

 if (VAR_8->dma.resid == 0 && (VAR_7->mask & VAR_4))
  return VAR_0;
 else
  return VAR_2;
}
