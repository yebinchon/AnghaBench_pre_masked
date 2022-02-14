
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct mpc52xx_lpbfifo_request {int flags; int buffer_not_done_cnt; int size; int pos; int (* callback ) (struct mpc52xx_lpbfifo_request*) ;int irq_ticks; scalar_t__ data; int last_byte; int irq_count; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int lock; struct mpc52xx_lpbfifo_request* req; int bcom_cur_task; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int*,int *) ;
 int FUNC_2 () ;
 TYPE_1__ VAR_2 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct mpc52xx_lpbfifo_request*) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_3, void *VAR_4)
{
 struct mpc52xx_lpbfifo_request *VAR_5;
 unsigned long VAR_6;
 u32 VAR_7;
 u32 VAR_8;

 FUNC_4(&VAR_2.lock, VAR_6);
 VAR_8 = FUNC_2();

 VAR_5 = VAR_2.req;
 if (!VAR_5 || (VAR_5->flags & VAR_1)) {
  FUNC_5(&VAR_2.lock, VAR_6);
  return VAR_0;
 }

 if (VAR_3 != 0)
  VAR_5->irq_count++;

 if (!FUNC_0(VAR_2.bcom_cur_task)) {
  FUNC_5(&VAR_2.lock, VAR_6);

  VAR_5->buffer_not_done_cnt++;
  if ((VAR_5->buffer_not_done_cnt % 1000) == 0)
   FUNC_3("transfer stalled\n");

  return VAR_0;
 }

 FUNC_1(VAR_2.bcom_cur_task, &VAR_7, ((void*)0));

 VAR_5->last_byte = ((u8 *)VAR_5->data)[VAR_5->size - 1];

 VAR_5->pos = VAR_7 & 0x00ffffff;


 VAR_2.req = ((void*)0);


 VAR_5->irq_ticks += FUNC_2() - VAR_8;
 FUNC_5(&VAR_2.lock, VAR_6);

 if (VAR_5->callback)
  VAR_5->callback(VAR_5);

 return VAR_0;
}
