
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct cros_ec_device {int event_notifier; } ;
struct TYPE_4__ {int notifier; } ;


 int FUNC_0 (int *,int *) ;
 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 struct cros_ec_device* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_2)
{
 struct cros_ec_device *VAR_3 = FUNC_2(VAR_2->dev.parent);

 FUNC_3(&VAR_1);

 FUNC_0(&VAR_3->event_notifier,
        &VAR_0.notifier);
 FUNC_1(((void*)0));

 FUNC_4(&VAR_1);
 return 0;
}
