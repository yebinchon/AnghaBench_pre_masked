
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_mt {int frame; } ;
struct input_dev {struct input_mt* mt; } ;


 int FUNC_0 (struct input_dev*,struct input_mt*) ;

void FUNC_1(struct input_dev *VAR_0)
{
 struct input_mt *VAR_1 = VAR_0->mt;

 if (VAR_1) {
  FUNC_0(VAR_0, VAR_1);
  VAR_1->frame++;
 }
}
