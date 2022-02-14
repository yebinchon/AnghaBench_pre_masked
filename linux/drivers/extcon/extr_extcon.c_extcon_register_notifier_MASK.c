
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct extcon_dev {int lock; int * nh; } ;


 int VAR_0 ;
 int FUNC_0 (struct extcon_dev*,unsigned int) ;
 int FUNC_1 (int *,struct notifier_block*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

int FUNC_4(struct extcon_dev *VAR_1, unsigned int VAR_2,
        struct notifier_block *VAR_3)
{
 unsigned long VAR_4;
 int VAR_5, VAR_6 = -VAR_0;

 if (!VAR_1 || !VAR_3)
  return -VAR_0;

 VAR_6 = FUNC_0(VAR_1, VAR_2);
 if (VAR_6 < 0)
  return VAR_6;

 FUNC_2(&VAR_1->lock, VAR_4);
 VAR_5 = FUNC_1(&VAR_1->nh[VAR_6], VAR_3);
 FUNC_3(&VAR_1->lock, VAR_4);

 return VAR_5;
}
