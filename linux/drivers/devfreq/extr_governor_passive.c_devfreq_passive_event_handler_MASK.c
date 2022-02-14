
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int notifier_call; } ;
struct devfreq_passive_data {struct devfreq* this; struct notifier_block nb; scalar_t__ parent; } ;
struct devfreq {scalar_t__ data; } ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct devfreq*,struct notifier_block*,int ) ;
 int FUNC_2 (struct devfreq*,struct notifier_block*,int ) ;

__attribute__((used)) static int FUNC_3(struct devfreq *VAR_3,
    unsigned int VAR_4, void *VAR_5)
{
 struct devfreq_passive_data *VAR_6
   = (struct devfreq_passive_data *)VAR_3->data;
 struct devfreq *VAR_7 = (struct devfreq *)VAR_6->parent;
 struct notifier_block *VAR_8 = &VAR_6->nb;
 int VAR_9 = 0;

 if (!VAR_7)
  return -VAR_1;

 switch (VAR_4) {
 case 129:
  if (!VAR_6->this)
   VAR_6->this = VAR_3;

  VAR_8->notifier_call = VAR_2;
  VAR_9 = FUNC_1(VAR_7, VAR_8,
     VAR_0);
  break;
 case 128:
  FUNC_0(FUNC_2(VAR_7, VAR_8,
     VAR_0));
  break;
 default:
  break;
 }

 return VAR_9;
}
