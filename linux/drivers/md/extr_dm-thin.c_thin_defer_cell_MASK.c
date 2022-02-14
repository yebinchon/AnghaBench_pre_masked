
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thin_c {int lock; int deferred_cells; struct pool* pool; } ;
struct pool {int throttle; } ;
struct dm_bio_prison_cell {int user_list; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct pool*) ;

__attribute__((used)) static void FUNC_6(struct thin_c *VAR_0, struct dm_bio_prison_cell *VAR_1)
{
 unsigned long VAR_2;
 struct pool *VAR_3 = VAR_0->pool;

 FUNC_3(&VAR_3->throttle);
 FUNC_1(&VAR_0->lock, VAR_2);
 FUNC_0(&VAR_1->user_list, &VAR_0->deferred_cells);
 FUNC_2(&VAR_0->lock, VAR_2);
 FUNC_4(&VAR_3->throttle);

 FUNC_5(VAR_3);
}
