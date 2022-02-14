
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct input_dev {TYPE_1__ dev; scalar_t__ devres_managed; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct input_dev*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int ,struct input_dev*) ;
 int FUNC_3 (struct input_dev*) ;

void FUNC_4(struct input_dev *VAR_2)
{
 if (VAR_2->devres_managed) {
  FUNC_0(FUNC_2(VAR_2->dev.parent,
     VAR_1,
     VAR_0,
     VAR_2));
  FUNC_1(VAR_2);




 } else {
  FUNC_1(VAR_2);
  FUNC_3(VAR_2);
 }
}
