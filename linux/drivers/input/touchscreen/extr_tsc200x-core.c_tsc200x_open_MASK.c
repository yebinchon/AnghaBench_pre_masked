
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsc200x {int opened; int mutex; int suspended; } ;
struct input_dev {int dummy; } ;


 int FUNC_0 (struct tsc200x*) ;
 struct tsc200x* FUNC_1 (struct input_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct input_dev *VAR_0)
{
 struct tsc200x *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(&VAR_1->mutex);

 if (!VAR_1->suspended)
  FUNC_0(VAR_1);

 VAR_1->opened = 1;

 FUNC_3(&VAR_1->mutex);

 return 0;
}
