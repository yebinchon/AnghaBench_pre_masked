
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mpc512x_lpbfifo_request {int dummy; } ;
struct TYPE_2__ {int wait_lpbfifo_irq; int wait_lpbfifo_callback; struct mpc512x_lpbfifo_request* req; int regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 () ;

__attribute__((used)) static int FUNC_1(struct mpc512x_lpbfifo_request *VAR_3)
{
 int VAR_4 = 0;

 if (!VAR_2.regs)
  return -VAR_1;


 if (VAR_2.req)
  return -VAR_0;

 VAR_2.wait_lpbfifo_irq = 1;
 VAR_2.wait_lpbfifo_callback = 1;
 VAR_2.req = VAR_3;

 VAR_4 = FUNC_0();
 if (VAR_4 != 0)
  VAR_2.req = ((void*)0);

 return VAR_4;
}
