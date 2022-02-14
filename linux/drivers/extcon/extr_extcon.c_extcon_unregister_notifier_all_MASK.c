
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct extcon_dev {int lock; int nh_all; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct notifier_block*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

int FUNC_3(struct extcon_dev *VAR_1,
    struct notifier_block *VAR_2)
{
 unsigned long VAR_3;
 int VAR_4;

 if (!VAR_1 || !VAR_2)
  return -VAR_0;

 FUNC_1(&VAR_1->lock, VAR_3);
 VAR_4 = FUNC_0(&VAR_1->nh_all, VAR_2);
 FUNC_2(&VAR_1->lock, VAR_3);

 return VAR_4;
}
