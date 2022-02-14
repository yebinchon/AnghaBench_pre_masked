
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct gov_attr_set {unsigned int usage_count; int update_lock; int kobj; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct list_head*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

unsigned int FUNC_5(struct gov_attr_set *VAR_0, struct list_head *VAR_1)
{
 unsigned int VAR_2;

 FUNC_3(&VAR_0->update_lock);
 FUNC_1(VAR_1);
 VAR_2 = --VAR_0->usage_count;
 FUNC_4(&VAR_0->update_lock);
 if (VAR_2)
  return VAR_2;

 FUNC_0(&VAR_0->kobj);
 FUNC_2(&VAR_0->update_lock);
 return 0;
}
