
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int evbit; struct ff_device* ff; } ;
struct file {int dummy; } ;
struct ff_device {int mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct input_dev*,int,struct file*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;

int FUNC_4(struct input_dev *VAR_2, int VAR_3, struct file *VAR_4)
{
 struct ff_device *VAR_5 = VAR_2->ff;
 int VAR_6;

 if (!FUNC_3(VAR_1, VAR_2->evbit))
  return -VAR_0;

 FUNC_1(&VAR_5->mutex);
 VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_4);
 FUNC_2(&VAR_5->mutex);

 return VAR_6;
}
