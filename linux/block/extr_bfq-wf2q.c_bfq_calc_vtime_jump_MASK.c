
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct bfq_service_tree {int vtime; int active; } ;
struct bfq_entity {int min_start; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 struct bfq_entity* FUNC_1 (int *) ;

__attribute__((used)) static u64 FUNC_2(struct bfq_service_tree *VAR_0)
{
 struct bfq_entity *VAR_1 = FUNC_1(&VAR_0->active);

 if (FUNC_0(VAR_1->min_start, VAR_0->vtime))
  return VAR_1->min_start;

 return VAR_0->vtime;
}
