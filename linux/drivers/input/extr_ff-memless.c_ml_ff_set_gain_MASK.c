
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct ml_device {TYPE_2__* states; int gain; } ;
struct input_dev {TYPE_1__* ff; } ;
struct TYPE_4__ {int flags; } ;
struct TYPE_3__ {struct ml_device* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct ml_device*) ;

__attribute__((used)) static void FUNC_2(struct input_dev *VAR_2, u16 VAR_3)
{
 struct ml_device *VAR_4 = VAR_2->ff->private;
 int VAR_5;

 VAR_4->gain = VAR_3;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
  FUNC_0(VAR_0, &VAR_4->states[VAR_5].flags);

 FUNC_1(VAR_4);
}
