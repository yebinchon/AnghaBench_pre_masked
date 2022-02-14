
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ishtp_device {int dummy; } ;
struct ishtp_cl {scalar_t__ last_tx_path; scalar_t__ last_dma_acked; int send_msg_cnt_ipc; scalar_t__ tx_offs; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ishtp_cl*) ;

__attribute__((used)) static void FUNC_1(struct ishtp_device *VAR_1,
      struct ishtp_cl *VAR_2)
{

 if (VAR_2->last_tx_path == VAR_0 && VAR_2->last_dma_acked == 0)
  return;

 VAR_2->tx_offs = 0;
 FUNC_0(VAR_2);
 ++VAR_2->send_msg_cnt_ipc;
}
