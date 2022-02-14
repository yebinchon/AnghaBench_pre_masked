
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thin_c {int lock; int deferred_bio_list; struct pool* pool; } ;
struct pool {int dummy; } ;
struct dm_bio_prison_cell {int dummy; } ;


 int FUNC_0 (struct pool*,struct dm_bio_prison_cell*,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct pool*) ;

__attribute__((used)) static void FUNC_4(struct thin_c *VAR_0, struct dm_bio_prison_cell *VAR_1)
{
 struct pool *VAR_2 = VAR_0->pool;
 unsigned long VAR_3;

 FUNC_1(&VAR_0->lock, VAR_3);
 FUNC_0(VAR_2, VAR_1, &VAR_0->deferred_bio_list);
 FUNC_2(&VAR_0->lock, VAR_3);

 FUNC_3(VAR_2);
}
