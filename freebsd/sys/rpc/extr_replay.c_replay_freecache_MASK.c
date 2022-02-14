
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct replay_cache {int rc_lock; int rc_all; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct replay_cache*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct replay_cache*,scalar_t__) ;

void
FUNC_5(struct replay_cache *VAR_1)
{

 FUNC_3(&VAR_1->rc_lock);
 while (FUNC_0(&VAR_1->rc_all))
  FUNC_4(VAR_1, FUNC_0(&VAR_1->rc_all));
 FUNC_2(&VAR_1->rc_lock);
 FUNC_1(VAR_1, VAR_0);
}
