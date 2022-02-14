
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_target {struct cache* private; } ;
struct TYPE_2__ {int in_flight; } ;
struct cache {TYPE_1__ tracker; int wq; int waker; int nr_io_migrations; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct cache*) ;
 int FUNC_6 (struct cache*) ;
 int FUNC_7 (struct cache*) ;
 int FUNC_8 (struct cache*) ;

__attribute__((used)) static void FUNC_9(struct dm_target *VAR_1)
{
 struct cache *VAR_2 = VAR_1->private;

 FUNC_6(VAR_2);
 FUNC_0(FUNC_2(&VAR_2->nr_io_migrations));

 FUNC_3(&VAR_2->waker);
 FUNC_4(VAR_2->wq);
 FUNC_1(VAR_2->tracker.in_flight);





 FUNC_7(VAR_2);

 if (FUNC_5(VAR_2) == VAR_0)
  (void) FUNC_8(VAR_2);
}
