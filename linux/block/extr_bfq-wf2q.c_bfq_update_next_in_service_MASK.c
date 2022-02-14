
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfq_service_tree {int vtime; } ;
struct bfq_sched_data {struct bfq_entity* next_in_service; struct bfq_service_tree* service_tree; } ;
struct bfq_entity {int finish; int start; } ;


 unsigned int FUNC_0 (struct bfq_entity*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 struct bfq_entity* FUNC_2 (struct bfq_sched_data*,int) ;
 int FUNC_3 (struct bfq_entity*) ;

__attribute__((used)) static bool FUNC_4(struct bfq_sched_data *VAR_0,
           struct bfq_entity *VAR_1,
           bool VAR_2)
{
 struct bfq_entity *VAR_3 = VAR_0->next_in_service;
 bool VAR_4 = 0;
 bool VAR_5 = 0;
 if (VAR_1 && VAR_1 != VAR_0->next_in_service) {






  VAR_5 = 1;






  if (VAR_3) {
   unsigned int VAR_6 =
    FUNC_0(VAR_1);
   struct bfq_service_tree *VAR_7 =
    VAR_0->service_tree + VAR_6;

   VAR_5 =
    (VAR_6 ==
     FUNC_0(VAR_3)
     &&
     !FUNC_1(VAR_1->start, VAR_7->vtime)
     &&
     FUNC_1(VAR_3->finish,
     VAR_1->finish));
  }

  if (VAR_5)
   VAR_3 = VAR_1;
 }

 if (!VAR_5)
  VAR_3 = FUNC_2(VAR_0, VAR_2);

 if (VAR_3) {
  bool VAR_8 =
   FUNC_3(VAR_3);

  VAR_4 = !VAR_0->next_in_service ||
   VAR_8;
 }

 VAR_0->next_in_service = VAR_3;

 if (!VAR_3)
  return VAR_4;

 return VAR_4;
}
