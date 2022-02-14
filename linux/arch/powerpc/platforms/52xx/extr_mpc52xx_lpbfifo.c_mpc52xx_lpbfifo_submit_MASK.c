
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mpc52xx_lpbfifo_request {scalar_t__ pos; scalar_t__ buffer_not_done_cnt; scalar_t__ irq_ticks; scalar_t__ irq_count; } ;
struct TYPE_2__ {int lock; struct mpc52xx_lpbfifo_request* req; int regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (struct mpc52xx_lpbfifo_request*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

int FUNC_3(struct mpc52xx_lpbfifo_request *VAR_3)
{
 unsigned long VAR_4;

 if (!VAR_2.regs)
  return -VAR_1;

 FUNC_1(&VAR_2.lock, VAR_4);


 if (VAR_2.req) {
  FUNC_2(&VAR_2.lock, VAR_4);
  return -VAR_0;
 }


 VAR_2.req = VAR_3;
 VAR_3->irq_count = 0;
 VAR_3->irq_ticks = 0;
 VAR_3->buffer_not_done_cnt = 0;
 VAR_3->pos = 0;

 FUNC_0(VAR_3);
 FUNC_2(&VAR_2.lock, VAR_4);
 return 0;
}
