
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pool {int lock; } ;
struct dm_thin_new_mapping {TYPE_1__* tc; } ;
struct TYPE_2__ {struct pool* pool; } ;


 int FUNC_0 (struct dm_thin_new_mapping*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct dm_thin_new_mapping *VAR_0)
{
 unsigned long VAR_1;
 struct pool *VAR_2 = VAR_0->tc->pool;

 FUNC_1(&VAR_2->lock, VAR_1);
 FUNC_0(VAR_0);
 FUNC_2(&VAR_2->lock, VAR_1);
}
