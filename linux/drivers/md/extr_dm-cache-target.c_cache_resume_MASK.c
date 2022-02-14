
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_target {struct cache* private; } ;
struct TYPE_2__ {int work; } ;
struct cache {int need_tick_bio; TYPE_1__ waker; } ;


 int FUNC_0 (struct cache*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct dm_target *VAR_0)
{
 struct cache *VAR_1 = VAR_0->private;

 VAR_1->need_tick_bio = 1;
 FUNC_0(VAR_1);
 FUNC_1(&VAR_1->waker.work);
}
