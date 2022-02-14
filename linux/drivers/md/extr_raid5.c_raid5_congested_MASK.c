
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r5conf {int empty_inactive_list_nr; scalar_t__ quiesce; int cache_state; } ;
struct mddev {struct r5conf* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(struct mddev *VAR_2, int VAR_3)
{
 struct r5conf *VAR_4 = VAR_2->private;





 if (FUNC_1(VAR_1, &VAR_4->cache_state))
  return 1;


 if (FUNC_1(VAR_0, &VAR_4->cache_state))
  return 1;
 if (VAR_4->quiesce)
  return 1;
 if (FUNC_0(&VAR_4->empty_inactive_list_nr))
  return 1;

 return 0;
}
