
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mpc52xx_lpbfifo_request {int dummy; } ;
struct TYPE_2__ {int lock; struct mpc52xx_lpbfifo_request* req; scalar_t__ regs; int bcom_tx_task; int bcom_rx_task; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_1__ VAR_1 ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

void FUNC_5(struct mpc52xx_lpbfifo_request *VAR_2)
{
 unsigned long VAR_3;

 FUNC_3(&VAR_1.lock, VAR_3);
 if (VAR_1.req == VAR_2) {

  FUNC_0(VAR_1.bcom_rx_task);
  FUNC_1(VAR_1.bcom_tx_task);
  FUNC_2(VAR_1.regs + VAR_0, 0x01010000);
  VAR_1.req = ((void*)0);
 }
 FUNC_4(&VAR_1.lock, VAR_3);
}
