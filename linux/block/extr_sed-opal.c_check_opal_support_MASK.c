
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opal_dev {int supported; int dev_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct opal_dev*) ;
 int FUNC_3 (struct opal_dev*) ;

__attribute__((used)) static int FUNC_4(struct opal_dev *VAR_0)
{
 int VAR_1;

 FUNC_0(&VAR_0->dev_lock);
 FUNC_3(VAR_0);
 VAR_1 = FUNC_2(VAR_0);
 VAR_0->supported = !VAR_1;
 FUNC_1(&VAR_0->dev_lock);

 return VAR_1;
}
