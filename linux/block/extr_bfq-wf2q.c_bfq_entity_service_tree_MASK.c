
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfq_service_tree {int dummy; } ;
struct bfq_sched_data {struct bfq_service_tree* service_tree; } ;
struct bfq_entity {struct bfq_sched_data* sched_data; } ;


 unsigned int FUNC_0 (struct bfq_entity*) ;

struct bfq_service_tree *FUNC_1(struct bfq_entity *VAR_0)
{
 struct bfq_sched_data *VAR_1 = VAR_0->sched_data;
 unsigned int VAR_2 = FUNC_0(VAR_0);

 return VAR_1->service_tree + VAR_2;
}
