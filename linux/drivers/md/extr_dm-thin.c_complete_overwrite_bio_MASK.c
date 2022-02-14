
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thin_c {int td; struct pool* pool; } ;
struct pool {int lock; int deferred_flush_completions; } ;
struct bio {int dummy; } ;


 int FUNC_0 (struct bio*) ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (int *,struct bio*) ;
 int FUNC_3 (struct thin_c*,struct bio*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct thin_c *VAR_0, struct bio *VAR_1)
{
 struct pool *VAR_2 = VAR_0->pool;
 unsigned long VAR_3;





 if (!FUNC_3(VAR_0, VAR_1)) {
  FUNC_0(VAR_1);
  return;
 }






 if (FUNC_4(VAR_0->td)) {
  FUNC_1(VAR_1);
  return;
 }





 FUNC_5(&VAR_2->lock, VAR_3);
 FUNC_2(&VAR_2->deferred_flush_completions, VAR_1);
 FUNC_6(&VAR_2->lock, VAR_3);
}
