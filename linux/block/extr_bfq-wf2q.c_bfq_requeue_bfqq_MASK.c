
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfq_entity {int dummy; } ;
struct bfq_queue {struct bfq_entity entity; } ;
struct bfq_data {struct bfq_queue* in_service_queue; } ;


 int FUNC_0 (struct bfq_entity*,int,int,int) ;

void FUNC_1(struct bfq_data *VAR_0, struct bfq_queue *VAR_1,
        bool VAR_2)
{
 struct bfq_entity *VAR_3 = &VAR_1->entity;

 FUNC_0(VAR_3, 0,
        VAR_1 == VAR_0->in_service_queue, VAR_2);
}
