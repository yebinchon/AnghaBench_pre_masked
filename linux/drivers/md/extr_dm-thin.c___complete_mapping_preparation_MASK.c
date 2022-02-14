
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pool {int prepared_mappings; } ;
struct dm_thin_new_mapping {int list; int prepare_actions; TYPE_1__* tc; } ;
struct TYPE_2__ {struct pool* pool; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct pool*) ;

__attribute__((used)) static void FUNC_3(struct dm_thin_new_mapping *VAR_0)
{
 struct pool *VAR_1 = VAR_0->tc->pool;

 if (FUNC_0(&VAR_0->prepare_actions)) {
  FUNC_1(&VAR_0->list, &VAR_1->prepared_mappings);
  FUNC_2(VAR_1);
 }
}
