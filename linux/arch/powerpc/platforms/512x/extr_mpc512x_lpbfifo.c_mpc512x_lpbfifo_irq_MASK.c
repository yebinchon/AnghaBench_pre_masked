
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct mpc512x_lpbfifo_request {scalar_t__ dir; int (* callback ) (struct mpc512x_lpbfifo_request*) ;} ;
struct device {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {int wait_lpbfifo_irq; int lock; struct mpc512x_lpbfifo_request* req; scalar_t__ wait_lpbfifo_callback; TYPE_1__* regs; } ;
struct TYPE_3__ {int status; int enable; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (int *) ;
 TYPE_2__ VAR_5 ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct mpc512x_lpbfifo_request*) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_6, void *VAR_7)
{
 struct device *VAR_8 = (struct device *)VAR_7;
 struct mpc512x_lpbfifo_request *VAR_9 = ((void*)0);
 unsigned long VAR_10;
 u32 VAR_11;

 FUNC_3(&VAR_5.lock, VAR_10);

 if (!VAR_5.regs)
  goto end;

 VAR_9 = VAR_5.req;
 if (!VAR_9 || VAR_9->dir == VAR_1) {
  FUNC_0(VAR_8, "bogus LPBFIFO IRQ\n");
  goto end;
 }

 VAR_11 = FUNC_1(&VAR_5.regs->status);
 if (VAR_11 != VAR_4) {
  FUNC_0(VAR_8, "DMA transfer from RAM to peripheral failed\n");
  FUNC_2(&VAR_5.regs->enable,
    VAR_3 | VAR_2);
  goto end;
 }

 FUNC_2(&VAR_5.regs->status, VAR_4);

 VAR_5.wait_lpbfifo_irq = 0;

 if (VAR_5.wait_lpbfifo_callback)
  goto end;


 VAR_5.req = ((void*)0);

 FUNC_4(&VAR_5.lock, VAR_10);

 if (VAR_9->callback)
  VAR_9->callback(VAR_9);

 return VAR_0;

 end:
 FUNC_4(&VAR_5.lock, VAR_10);
 return VAR_0;
}
