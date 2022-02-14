
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_handle {struct input_dev* dev; } ;
struct input_dev {int mutex; scalar_t__ grab; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__,struct input_handle*) ;

int FUNC_3(struct input_handle *VAR_1)
{
 struct input_dev *VAR_2 = VAR_1->dev;
 int VAR_3;

 VAR_3 = FUNC_0(&VAR_2->mutex);
 if (VAR_3)
  return VAR_3;

 if (VAR_2->grab) {
  VAR_3 = -VAR_0;
  goto out;
 }

 FUNC_2(VAR_2->grab, VAR_1);

 out:
 FUNC_1(&VAR_2->mutex);
 return VAR_3;
}
