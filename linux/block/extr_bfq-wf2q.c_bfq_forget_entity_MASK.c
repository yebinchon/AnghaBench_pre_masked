
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfq_service_tree {int wsum; } ;
struct bfq_queue {int dummy; } ;
struct bfq_entity {int on_st; scalar_t__ weight; } ;


 struct bfq_queue* FUNC_0 (struct bfq_entity*) ;
 int FUNC_1 (struct bfq_queue*) ;

__attribute__((used)) static void FUNC_2(struct bfq_service_tree *VAR_0,
         struct bfq_entity *VAR_1,
         bool VAR_2)
{
 struct bfq_queue *VAR_3 = FUNC_0(VAR_1);

 VAR_1->on_st = 0;
 VAR_0->wsum -= VAR_1->weight;
 if (VAR_3 && !VAR_2)
  FUNC_1(VAR_3);
}
