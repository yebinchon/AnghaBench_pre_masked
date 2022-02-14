
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {scalar_t__ dma_drain_size; } ;
struct request {int nr_phys_segments; int rq_flags; int state; struct request_queue* q; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct request*) ;
 scalar_t__ FUNC_2 (struct request*) ;
 scalar_t__ FUNC_3 (struct request*) ;
 int FUNC_4 (struct request_queue*,struct request*) ;
 int FUNC_5 (struct request_queue*,struct request*) ;

__attribute__((used)) static void FUNC_6(struct request *VAR_2)
{
 struct request_queue *VAR_3 = VAR_2->q;

 FUNC_1(VAR_2);

 FUNC_5(VAR_3, VAR_2);
 FUNC_4(VAR_3, VAR_2);

 if (FUNC_2(VAR_2)) {
  FUNC_0(VAR_2->state, VAR_0);
  VAR_2->rq_flags &= ~VAR_1;
  if (VAR_3->dma_drain_size && FUNC_3(VAR_2))
   VAR_2->nr_phys_segments--;
 }
}
