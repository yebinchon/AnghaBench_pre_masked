
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dummy; } ;
struct ff_effect {int dummy; } ;
struct drv2665_data {int work; } ;


 struct drv2665_data* FUNC_0 (struct input_dev*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct input_dev *VAR_0, void *VAR_1,
    struct ff_effect *VAR_2)
{
 struct drv2665_data *VAR_3 = FUNC_0(VAR_0);

 FUNC_1(&VAR_3->work);

 return 0;
}
