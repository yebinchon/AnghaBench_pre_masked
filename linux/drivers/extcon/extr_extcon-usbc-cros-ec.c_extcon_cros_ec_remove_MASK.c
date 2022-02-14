
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct cros_ec_extcon_info {int notifier; TYPE_1__* ec; } ;
struct TYPE_2__ {int event_notifier; } ;


 int FUNC_0 (int *,int *) ;
 struct cros_ec_extcon_info* FUNC_1 (struct platform_device*) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_0)
{
 struct cros_ec_extcon_info *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(&VAR_1->ec->event_notifier,
        &VAR_1->notifier);

 return 0;
}
