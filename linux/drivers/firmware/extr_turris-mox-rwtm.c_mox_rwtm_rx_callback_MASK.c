
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct armada_37xx_rwtm_rx_msg {int dummy; } ;
struct mox_rwtm {int cmd_done; struct armada_37xx_rwtm_rx_msg reply; } ;
struct mbox_client {int dev; } ;


 int FUNC_0 (int *) ;
 struct mox_rwtm* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct mbox_client *VAR_0, void *VAR_1)
{
 struct mox_rwtm *VAR_2 = FUNC_1(VAR_0->dev);
 struct armada_37xx_rwtm_rx_msg *VAR_3 = VAR_1;

 VAR_2->reply = *VAR_3;
 FUNC_0(&VAR_2->cmd_done);
}
