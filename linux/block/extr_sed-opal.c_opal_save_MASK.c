
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lr; } ;
struct TYPE_4__ {TYPE_1__ opal_key; } ;
struct opal_lock_unlock {TYPE_2__ session; } ;
struct opal_suspend_data {int lr; struct opal_lock_unlock unlk; } ;
struct opal_dev {int dev_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct opal_dev*,struct opal_suspend_data*) ;
 struct opal_suspend_data* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct opal_dev*) ;

__attribute__((used)) static int FUNC_5(struct opal_dev *VAR_2, struct opal_lock_unlock *VAR_3)
{
 struct opal_suspend_data *VAR_4;

 VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_4->unlk = *VAR_3;
 VAR_4->lr = VAR_3->session.opal_key.lr;

 FUNC_2(&VAR_2->dev_lock);
 FUNC_4(VAR_2);
 FUNC_0(VAR_2, VAR_4);
 FUNC_3(&VAR_2->dev_lock);

 return 0;
}
