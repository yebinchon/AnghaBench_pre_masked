
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct input_handle {struct evdev* private; } ;
struct TYPE_3__ {int devt; } ;
struct evdev {TYPE_1__ dev; int cdev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (struct evdev*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct input_handle*) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_6(struct input_handle *VAR_0)
{
 struct evdev *VAR_1 = VAR_0->private;

 FUNC_1(&VAR_1->cdev, &VAR_1->dev);
 FUNC_2(VAR_1);
 FUNC_3(FUNC_0(VAR_1->dev.devt));
 FUNC_4(VAR_0);
 FUNC_5(&VAR_1->dev);
}
