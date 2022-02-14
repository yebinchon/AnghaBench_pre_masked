
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct verbs_txreq {int s_cur_size; int txreq; } ;
struct TYPE_2__ {int qp_type; int device; } ;
struct rvt_qp {int pmtu; TYPE_1__ ibqp; struct hfi1_qp_priv* priv; } ;
struct hfi1_qp_priv {int s_running_pkt_size; int s_iowait; } ;
struct hfi1_pkt_state {int opcode; struct verbs_txreq* s_txreq; } ;
struct hfi1_devdata {int flags; int process_dma_send; int process_pio_send; } ;
typedef int send_routine ;


 int FUNC_0 (int) ;
 int VAR_0 ;





 int VAR_1 ;
 struct hfi1_devdata* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int* VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static inline send_routine FUNC_6(struct rvt_qp *VAR_4,
         struct hfi1_pkt_state *VAR_5)
{
 struct hfi1_devdata *VAR_6 = FUNC_1(VAR_4->ibqp.device);
 struct hfi1_qp_priv *VAR_7 = VAR_4->priv;
 struct verbs_txreq *VAR_8 = VAR_5->s_txreq;

 if (FUNC_5(!(VAR_6->flags & VAR_0)))
  return VAR_6->process_pio_send;
 switch (VAR_4->ibqp.qp_type) {
 case 130:
  return VAR_6->process_pio_send;
 case 132:
 case 128:
  break;
 case 129:
 case 131:
  VAR_7->s_running_pkt_size =
   (VAR_8->s_cur_size + VAR_7->s_running_pkt_size) / 2;
  if (VAR_3 &&
      VAR_7->s_running_pkt_size <= FUNC_3(VAR_3, VAR_4->pmtu) &&
      (FUNC_0(VAR_5->opcode & VAR_1) & VAR_2[VAR_5->opcode >> 5]) &&
      FUNC_2(&VAR_7->s_iowait) == 0 &&
      !FUNC_4(&VAR_8->txreq))
   return VAR_6->process_pio_send;
  break;
 default:
  break;
 }
 return VAR_6->process_dma_send;
}
