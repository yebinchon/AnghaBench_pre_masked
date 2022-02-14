
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct gov_attr_set {int update_lock; int policy_list; int usage_count; } ;


 int FUNC_0 (struct list_head*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct gov_attr_set *VAR_0, struct list_head *VAR_1)
{
 FUNC_1(&VAR_0->update_lock);
 VAR_0->usage_count++;
 FUNC_0(VAR_1, &VAR_0->policy_list);
 FUNC_2(&VAR_0->update_lock);
}
