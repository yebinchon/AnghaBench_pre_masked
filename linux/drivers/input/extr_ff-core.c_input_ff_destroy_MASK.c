
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {struct ff_device* ff; int evbit; } ;
struct ff_device {struct ff_device* effects; struct ff_device* private; int (* destroy ) (struct ff_device*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct ff_device*) ;
 int FUNC_2 (struct ff_device*) ;

void FUNC_3(struct input_dev *VAR_1)
{
 struct ff_device *VAR_2 = VAR_1->ff;

 FUNC_0(VAR_0, VAR_1->evbit);
 if (VAR_2) {
  if (VAR_2->destroy)
   VAR_2->destroy(VAR_2);
  FUNC_1(VAR_2->private);
  FUNC_1(VAR_2->effects);
  FUNC_1(VAR_2);
  VAR_1->ff = ((void*)0);
 }
}
