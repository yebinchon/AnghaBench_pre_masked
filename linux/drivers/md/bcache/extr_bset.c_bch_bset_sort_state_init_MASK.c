
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
struct bset_sort_state {unsigned int page_order; int pool; int crit_factor; TYPE_1__ time; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int,unsigned int) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct bset_sort_state *VAR_0,
        unsigned int VAR_1)
{
 FUNC_2(&VAR_0->time.lock);

 VAR_0->page_order = VAR_1;
 VAR_0->crit_factor = FUNC_0(1 << VAR_1);

 return FUNC_1(&VAR_0->pool, 1, VAR_1);
}
