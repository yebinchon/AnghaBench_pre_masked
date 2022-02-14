
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thin_c {int lock; int deferred_bio_list; struct pool* pool; } ;
struct pool {int dummy; } ;
struct bio {int dummy; } ;


 int FUNC_0 (int *,struct bio*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct pool*) ;

__attribute__((used)) static void FUNC_4(struct thin_c *VAR_0, struct bio *VAR_1)
{
 unsigned long VAR_2;
 struct pool *VAR_3 = VAR_0->pool;

 FUNC_1(&VAR_0->lock, VAR_2);
 FUNC_0(&VAR_0->deferred_bio_list, VAR_1);
 FUNC_2(&VAR_0->lock, VAR_2);

 FUNC_3(VAR_3);
}
