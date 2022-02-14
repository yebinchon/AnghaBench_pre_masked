
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct bfq_service_tree {int active; } ;
struct bfq_entity {int dummy; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct bfq_service_tree*) ;
 struct bfq_entity* FUNC_2 (struct bfq_service_tree*,int ) ;
 int FUNC_3 (struct bfq_service_tree*,int ) ;

__attribute__((used)) static struct bfq_entity *
FUNC_4(struct bfq_service_tree *VAR_0, bool VAR_1)
{
 struct bfq_entity *VAR_2;
 u64 VAR_3;

 if (FUNC_0(&VAR_0->active))
  return ((void*)0);





 VAR_3 = FUNC_1(VAR_0);
 if (!VAR_1)
  FUNC_3(VAR_0, VAR_3);

 VAR_2 = FUNC_2(VAR_0, VAR_3);

 return VAR_2;
}
