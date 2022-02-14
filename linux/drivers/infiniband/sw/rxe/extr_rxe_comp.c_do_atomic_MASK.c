
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct rxe_send_wqe {int dma; } ;
struct rxe_qp {int pd; } ;
struct rxe_pkt_info {int dummy; } ;
typedef enum comp_state { ____Placeholder_comp_state } comp_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rxe_pkt_info*) ;
 int FUNC_1 (int ,int ,int *,int *,int,int ,int *) ;
 int VAR_3 ;

__attribute__((used)) static inline enum comp_state FUNC_2(struct rxe_qp *VAR_4,
     struct rxe_pkt_info *VAR_5,
     struct rxe_send_wqe *VAR_6)
{
 int VAR_7;

 u64 VAR_8 = FUNC_0(VAR_5);

 VAR_7 = FUNC_1(VAR_4->pd, VAR_2,
   &VAR_6->dma, &VAR_8,
   sizeof(u64), VAR_3, ((void*)0));
 if (VAR_7)
  return VAR_1;
 else
  return VAR_0;
}
