
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfq_service_tree {unsigned long vtime; } ;
struct bfq_queue {unsigned long wr_coeff; } ;
struct bfq_entity {unsigned long finish; unsigned long start; int budget; } ;


 struct bfq_service_tree* FUNC_0 (struct bfq_service_tree*,struct bfq_entity*,int) ;
 int FUNC_1 (struct bfq_service_tree*,struct bfq_entity*) ;
 int FUNC_2 (struct bfq_entity*,int ) ;
 struct bfq_queue* FUNC_3 (struct bfq_entity*) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct bfq_entity *VAR_0,
     struct bfq_service_tree *VAR_1,
     bool VAR_2)
{
 struct bfq_queue *VAR_3 = FUNC_3(VAR_0);






 VAR_1 = FUNC_0(VAR_1, VAR_0, 1);
 FUNC_2(VAR_0, VAR_0->budget);
 if (VAR_2 && FUNC_4(VAR_1->vtime, VAR_0->finish)) {
  unsigned long VAR_4 = VAR_1->vtime - VAR_0->finish;

  if (VAR_3)
   VAR_4 /= VAR_3->wr_coeff;

  VAR_0->start += VAR_4;
  VAR_0->finish += VAR_4;
 }

 FUNC_1(VAR_1, VAR_0);
}
