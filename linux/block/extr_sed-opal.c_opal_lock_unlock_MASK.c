
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ who; } ;
struct opal_lock_unlock {TYPE_1__ session; } ;
struct opal_dev {int dev_lock; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct opal_dev*,struct opal_lock_unlock*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct opal_dev *VAR_2,
       struct opal_lock_unlock *VAR_3)
{
 int VAR_4;

 if (VAR_3->session.who > VAR_1)
  return -VAR_0;

 FUNC_1(&VAR_2->dev_lock);
 VAR_4 = FUNC_0(VAR_2, VAR_3);
 FUNC_2(&VAR_2->dev_lock);

 return VAR_4;
}
