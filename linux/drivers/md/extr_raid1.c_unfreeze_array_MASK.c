
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r1conf {int wait_barrier; int resync_lock; scalar_t__ array_frozen; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct r1conf *VAR_0)
{

 FUNC_0(&VAR_0->resync_lock);
 VAR_0->array_frozen = 0;
 FUNC_1(&VAR_0->resync_lock);
 FUNC_2(&VAR_0->wait_barrier);
}
