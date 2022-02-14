
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dev; struct ff_device* ff; } ;
struct file {int dummy; } ;
struct ff_device {int max_effects; int mutex; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct input_dev*,int,struct file*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct input_dev *VAR_0, struct file *VAR_1)
{
 struct ff_device *VAR_2 = VAR_0->ff;
 int VAR_3;

 FUNC_0(&VAR_0->dev, "flushing now\n");

 FUNC_2(&VAR_2->mutex);

 for (VAR_3 = 0; VAR_3 < VAR_2->max_effects; VAR_3++)
  FUNC_1(VAR_0, VAR_3, VAR_1);

 FUNC_3(&VAR_2->mutex);

 return 0;
}
