
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct devfreq {int transition_notifier_list; } ;



 int VAR_0 ;
 int FUNC_0 (int *,struct notifier_block*) ;

int FUNC_1(struct devfreq *VAR_1,
    struct notifier_block *VAR_2,
    unsigned int VAR_3)
{
 int VAR_4 = 0;

 if (!VAR_1)
  return -VAR_0;

 switch (VAR_3) {
 case 128:
  VAR_4 = FUNC_0(
    &VAR_1->transition_notifier_list, VAR_2);
  break;
 default:
  VAR_4 = -VAR_0;
 }

 return VAR_4;
}
