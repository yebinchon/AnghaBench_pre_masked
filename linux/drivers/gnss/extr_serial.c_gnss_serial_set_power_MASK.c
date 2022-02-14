
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gnss_serial {TYPE_1__* ops; } ;
typedef enum gnss_serial_pm_state { ____Placeholder_gnss_serial_pm_state } gnss_serial_pm_state ;
struct TYPE_2__ {int (* set_power ) (struct gnss_serial*,int) ;} ;


 int FUNC_0 (struct gnss_serial*,int) ;

__attribute__((used)) static int FUNC_1(struct gnss_serial *VAR_0,
     enum gnss_serial_pm_state VAR_1)
{
 if (!VAR_0->ops || !VAR_0->ops->set_power)
  return 0;

 return VAR_0->ops->set_power(VAR_0, VAR_1);
}
