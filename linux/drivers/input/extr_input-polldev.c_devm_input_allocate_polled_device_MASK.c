
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct input_polled_devres {struct input_polled_dev* polldev; } ;
struct input_polled_dev {int devres_managed; TYPE_2__* input; } ;
struct device {int dummy; } ;
struct TYPE_3__ {struct device* parent; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,struct input_polled_devres*) ;
 struct input_polled_devres* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (struct input_polled_devres*) ;
 struct input_polled_dev* FUNC_3 () ;

struct input_polled_dev *FUNC_4(struct device *VAR_2)
{
 struct input_polled_dev *VAR_3;
 struct input_polled_devres *VAR_4;

 VAR_4 = FUNC_1(VAR_1, sizeof(*VAR_4),
         VAR_0);
 if (!VAR_4)
  return ((void*)0);

 VAR_3 = FUNC_3();
 if (!VAR_3) {
  FUNC_2(VAR_4);
  return ((void*)0);
 }

 VAR_3->input->dev.parent = VAR_2;
 VAR_3->devres_managed = 1;

 VAR_4->polldev = VAR_3;
 FUNC_0(VAR_2, VAR_4);

 return VAR_3;
}
