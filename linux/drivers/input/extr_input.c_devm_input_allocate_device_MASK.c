
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct input_devres {struct input_dev* input; } ;
struct TYPE_2__ {struct device* parent; } ;
struct input_dev {int devres_managed; TYPE_1__ dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,struct input_devres*) ;
 struct input_devres* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (struct input_devres*) ;
 struct input_dev* FUNC_3 () ;

struct input_dev *FUNC_4(struct device *VAR_2)
{
 struct input_dev *VAR_3;
 struct input_devres *VAR_4;

 VAR_4 = FUNC_1(VAR_1,
         sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return ((void*)0);

 VAR_3 = FUNC_3();
 if (!VAR_3) {
  FUNC_2(VAR_4);
  return ((void*)0);
 }

 VAR_3->dev.parent = VAR_2;
 VAR_3->devres_managed = 1;

 VAR_4->input = VAR_3;
 FUNC_0(VAR_2, VAR_4);

 return VAR_3;
}
