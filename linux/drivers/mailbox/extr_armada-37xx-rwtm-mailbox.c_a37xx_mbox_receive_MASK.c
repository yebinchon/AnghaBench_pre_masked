
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbox_chan {struct a37xx_mbox* con_priv; } ;
struct armada_37xx_rwtm_rx_msg {void** status; void* retval; } ;
struct a37xx_mbox {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct mbox_chan*,struct armada_37xx_rwtm_rx_msg*) ;
 void* FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct mbox_chan *VAR_1)
{
 struct a37xx_mbox *VAR_2 = VAR_1->con_priv;
 struct armada_37xx_rwtm_rx_msg VAR_3;
 int VAR_4;

 VAR_3.retval = FUNC_2(VAR_2->base + VAR_0);
 for (VAR_4 = 0; VAR_4 < 16; ++VAR_4)
  VAR_3.status[VAR_4] = FUNC_2(VAR_2->base + FUNC_0(VAR_4));

 FUNC_1(VAR_1, &VAR_3);
}
