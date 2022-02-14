
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfq_queue {int bfqd; } ;
struct bfq_entity {int weight; scalar_t__ finish; int start; } ;


 scalar_t__ FUNC_0 (unsigned long,int ) ;
 struct bfq_queue* FUNC_1 (struct bfq_entity*) ;
 int FUNC_2 (int ,struct bfq_queue*,char*,unsigned long,scalar_t__,...) ;

__attribute__((used)) static void FUNC_3(struct bfq_entity *VAR_0, unsigned long VAR_1)
{
 struct bfq_queue *VAR_2 = FUNC_1(VAR_0);

 VAR_0->finish = VAR_0->start +
  FUNC_0(VAR_1, VAR_0->weight);

 if (VAR_2) {
  FUNC_2(VAR_2->bfqd, VAR_2,
   "calc_finish: serv %lu, w %d",
   VAR_1, VAR_0->weight);
  FUNC_2(VAR_2->bfqd, VAR_2,
   "calc_finish: start %llu, finish %llu, delta %llu",
   VAR_0->start, VAR_0->finish,
   FUNC_0(VAR_1, VAR_0->weight));
 }
}
