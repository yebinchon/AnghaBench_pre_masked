
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_target {TYPE_1__* type; } ;
struct dm_table {int depth; unsigned int num_targets; int mempools; int md; int devices; int highs; struct dm_target* targets; int * index; } ;
struct TYPE_2__ {int (* dtr ) (struct dm_target*) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct dm_table*) ;
 int FUNC_4 (struct dm_target*) ;
 int FUNC_5 (int ) ;

void FUNC_6(struct dm_table *VAR_0)
{
 unsigned int VAR_1;

 if (!VAR_0)
  return;


 if (VAR_0->depth >= 2)
  FUNC_5(VAR_0->index[VAR_0->depth - 2]);


 for (VAR_1 = 0; VAR_1 < VAR_0->num_targets; VAR_1++) {
  struct dm_target *VAR_2 = VAR_0->targets + VAR_1;

  if (VAR_2->type->dtr)
   VAR_2->type->dtr(VAR_2);

  FUNC_1(VAR_2->type);
 }

 FUNC_5(VAR_0->highs);


 FUNC_2(&VAR_0->devices, VAR_0->md);

 FUNC_0(VAR_0->mempools);

 FUNC_3(VAR_0);
}
