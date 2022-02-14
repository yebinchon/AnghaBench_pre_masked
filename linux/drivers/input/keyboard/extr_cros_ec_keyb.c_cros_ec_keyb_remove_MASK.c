
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct cros_ec_keyb {int notifier; TYPE_1__* ec; } ;
struct TYPE_2__ {int event_notifier; } ;


 int FUNC_0 (int *,int *) ;
 struct cros_ec_keyb* FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_0)
{
 struct cros_ec_keyb *VAR_1 = FUNC_1(&VAR_0->dev);

 FUNC_0(&VAR_1->ec->event_notifier,
        &VAR_1->notifier);

 return 0;
}
