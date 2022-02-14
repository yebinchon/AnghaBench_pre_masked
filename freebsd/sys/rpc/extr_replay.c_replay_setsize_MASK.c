
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct replay_cache {size_t rc_maxsize; int rc_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct replay_cache*) ;

void
FUNC_3(struct replay_cache *VAR_0, size_t VAR_1)
{

 FUNC_0(&VAR_0->rc_lock);
 VAR_0->rc_maxsize = VAR_1;
 FUNC_2(VAR_0);
 FUNC_1(&VAR_0->rc_lock);
}
