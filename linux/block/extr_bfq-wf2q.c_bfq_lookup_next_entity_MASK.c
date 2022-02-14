
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfq_service_tree {int active; } ;
struct bfq_sched_data {scalar_t__ in_service_entity; scalar_t__ bfq_class_idle_last_service; struct bfq_service_tree* service_tree; } ;
struct bfq_entity {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct bfq_entity* FUNC_1 (struct bfq_service_tree*,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static struct bfq_entity *FUNC_3(struct bfq_sched_data *VAR_3,
       bool VAR_4)
{
 struct bfq_service_tree *VAR_5 = VAR_3->service_tree;
 struct bfq_service_tree *VAR_6 = VAR_5 + (VAR_1 - 1);
 struct bfq_entity *VAR_7 = ((void*)0);
 int VAR_8 = 0;
 if (FUNC_2(VAR_3->bfq_class_idle_last_service +
       VAR_0)) {
  if (!FUNC_0(&VAR_6->active))
   VAR_8 = VAR_1 - 1;

  VAR_3->bfq_class_idle_last_service = VAR_2;
 }





 for (; VAR_8 < VAR_1; VAR_8++) {
  VAR_7 = FUNC_1(VAR_5 + VAR_8,
        VAR_3->in_service_entity &&
        !VAR_4);

  if (VAR_7)
   break;
 }

 if (!VAR_7)
  return ((void*)0);

 return VAR_7;
}
