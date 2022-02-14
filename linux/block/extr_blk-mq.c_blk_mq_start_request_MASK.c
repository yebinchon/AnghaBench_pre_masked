
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* profile; } ;
struct request_queue {TYPE_2__ integrity; scalar_t__ dma_drain_size; int queue_flags; } ;
struct request {int nr_phys_segments; int state; int rq_flags; int stats_sectors; int io_start_time_ns; struct request_queue* q; } ;
struct TYPE_3__ {int (* prepare_fn ) (struct request*) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct request*) ;
 scalar_t__ FUNC_3 (struct request*) ;
 scalar_t__ FUNC_4 (struct request*) ;
 scalar_t__ FUNC_5 (struct request*) ;
 int FUNC_6 (struct request*) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (struct request*) ;
 int FUNC_9 (struct request_queue*,struct request*) ;
 int FUNC_10 (struct request*) ;
 scalar_t__ FUNC_11 (int ,int *) ;
 int FUNC_12 (struct request_queue*,struct request*) ;

void FUNC_13(struct request *VAR_5)
{
 struct request_queue *VAR_6 = VAR_5->q;

 FUNC_12(VAR_6, VAR_5);

 if (FUNC_11(VAR_2, &VAR_6->queue_flags)) {
  VAR_5->io_start_time_ns = FUNC_7();
  VAR_5->stats_sectors = FUNC_6(VAR_5);
  VAR_5->rq_flags |= VAR_4;
  FUNC_9(VAR_6, VAR_5);
 }

 FUNC_0(FUNC_4(VAR_5) != VAR_0);

 FUNC_2(VAR_5);
 FUNC_1(VAR_5->state, VAR_1);

 if (VAR_6->dma_drain_size && FUNC_5(VAR_5)) {





  VAR_5->nr_phys_segments++;
 }





}
