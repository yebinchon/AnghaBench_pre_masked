
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct input_polled_dev {TYPE_2__* input; scalar_t__ devres_managed; } ;
struct TYPE_3__ {int parent; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ,struct input_polled_dev*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct input_polled_dev*) ;

void FUNC_4(struct input_polled_dev *VAR_2)
{
 if (VAR_2) {
  if (VAR_2->devres_managed)
   FUNC_0(FUNC_1(VAR_2->input->dev.parent,
      VAR_1,
      VAR_0,
      VAR_2));
  FUNC_2(VAR_2->input);
  FUNC_3(VAR_2);
 }
}
