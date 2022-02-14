
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* uint8_t ;
struct TYPE_4__ {int (* irqhook ) (int,void*,void*,void*) ;scalar_t__ semaphore; } ;
struct TYPE_5__ {int* seq; size_t idx; size_t actidx; TYPE_1__ act; } ;
typedef TYPE_2__ hp_sdc_transaction ;
struct TYPE_6__ {size_t rcurr; scalar_t__ rqty; int task; int rtq_lock; int rtime; TYPE_2__** tq; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,void*,void*,void*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(int VAR_3, void *VAR_4, uint8_t VAR_5, uint8_t VAR_6)
{
 hp_sdc_transaction *VAR_7;

 FUNC_1(&VAR_2.rtq_lock);
 if (VAR_2.rcurr < 0) {
  FUNC_2(&VAR_2.rtq_lock);
  return;
 }
 VAR_7 = VAR_2.tq[VAR_2.rcurr];
 FUNC_2(&VAR_2.rtq_lock);

 VAR_7->seq[VAR_7->idx++] = VAR_5;
 VAR_7->seq[VAR_7->idx++] = VAR_6;
 VAR_2.rqty -= 2;
 VAR_2.rtime = FUNC_0();

 if (VAR_2.rqty <= 0) {

  if (VAR_7->seq[VAR_7->actidx] & VAR_1)
   if (VAR_7->act.semaphore)
    FUNC_5(VAR_7->act.semaphore);

  if (VAR_7->seq[VAR_7->actidx] & VAR_0)
   if (VAR_7->act.irqhook)
    VAR_7->act.irqhook(VAR_3, VAR_4, VAR_5, VAR_6);

  VAR_7->actidx = VAR_7->idx;
  VAR_7->idx++;

  FUNC_6(&VAR_2.rtq_lock);
  VAR_2.rcurr = -1;
  VAR_2.rqty = 0;
  FUNC_7(&VAR_2.rtq_lock);
  FUNC_4(&VAR_2.task);
 }
}
