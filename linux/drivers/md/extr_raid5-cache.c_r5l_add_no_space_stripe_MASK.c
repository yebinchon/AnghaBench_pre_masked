
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stripe_head {int log_list; } ;
struct r5l_log {int no_space_stripes_lock; int no_space_stripes; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline void FUNC_3(struct r5l_log *VAR_0,
        struct stripe_head *VAR_1)
{
 FUNC_1(&VAR_0->no_space_stripes_lock);
 FUNC_0(&VAR_1->log_list, &VAR_0->no_space_stripes);
 FUNC_2(&VAR_0->no_space_stripes_lock);
}
