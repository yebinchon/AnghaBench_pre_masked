
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r5conf {int min_nr_stripes; int log; int empty_inactive_list_nr; int r5c_cached_full_stripes; int r5c_cached_partial_stripes; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

void FUNC_3(struct r5conf *VAR_0)
{
 int VAR_1;

 if (!FUNC_1(VAR_0->log))
  return;

 VAR_1 = FUNC_0(&VAR_0->r5c_cached_partial_stripes) +
  FUNC_0(&VAR_0->r5c_cached_full_stripes);
 if (VAR_1 > VAR_0->min_nr_stripes * 1 / 2 ||
     FUNC_0(&VAR_0->empty_inactive_list_nr) > 0)
  FUNC_2(VAR_0->log, 0);
}
