
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mpc52xx_lpbfifo_request {scalar_t__ defer_xfer_start; } ;
struct TYPE_2__ {int lock; scalar_t__ regs; struct mpc52xx_lpbfifo_request* req; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

int FUNC_3(struct mpc52xx_lpbfifo_request *VAR_4)
{
 unsigned long VAR_5;

 if (!VAR_3.regs)
  return -VAR_1;

 FUNC_1(&VAR_3.lock, VAR_5);





 if (VAR_3.req && !VAR_3.req->defer_xfer_start) {
  FUNC_2(&VAR_3.lock, VAR_5);
  return -VAR_0;
 }





 if (VAR_3.req && VAR_3.req == VAR_4 &&
     VAR_3.req->defer_xfer_start) {
  FUNC_0(VAR_3.regs + VAR_2, 0x01);
 }

 FUNC_2(&VAR_3.lock, VAR_5);
 return 0;
}
