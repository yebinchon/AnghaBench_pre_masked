
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfq_service_tree {int vtime; int active; struct bfq_entity* last_idle; struct bfq_entity* first_idle; } ;
struct bfq_entity {int finish; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct bfq_service_tree*,struct bfq_entity*) ;

__attribute__((used)) static void FUNC_3(struct bfq_service_tree *VAR_0)
{
 struct bfq_entity *VAR_1 = VAR_0->first_idle;
 struct bfq_entity *VAR_2 = VAR_0->last_idle;

 if (FUNC_0(&VAR_0->active) && VAR_2 &&
     !FUNC_1(VAR_2->finish, VAR_0->vtime)) {




  VAR_0->vtime = VAR_2->finish;
 }

 if (VAR_1 && !FUNC_1(VAR_1->finish, VAR_0->vtime))
  FUNC_2(VAR_0, VAR_1);
}
