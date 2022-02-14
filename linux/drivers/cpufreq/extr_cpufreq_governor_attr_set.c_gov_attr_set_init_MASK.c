
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct gov_attr_set {int usage_count; int policy_list; int update_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct list_head*,int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct gov_attr_set *VAR_0, struct list_head *VAR_1)
{
 FUNC_0(&VAR_0->policy_list);
 FUNC_2(&VAR_0->update_lock);
 VAR_0->usage_count = 1;
 FUNC_1(VAR_1, &VAR_0->policy_list);
}
