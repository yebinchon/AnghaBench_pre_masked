
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scpi_pm_domain {int domain; TYPE_1__* ops; } ;
typedef enum scpi_power_domain_state { ____Placeholder_scpi_power_domain_state } scpi_power_domain_state ;
struct TYPE_2__ {int (* device_set_power_state ) (int ,int) ;int (* device_get_power_state ) (int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct scpi_pm_domain *VAR_2, bool VAR_3)
{
 int VAR_4;
 enum scpi_power_domain_state VAR_5;

 if (VAR_3)
  VAR_5 = VAR_1;
 else
  VAR_5 = VAR_0;

 VAR_4 = VAR_2->ops->device_set_power_state(VAR_2->domain, VAR_5);
 if (VAR_4)
  return VAR_4;

 return !(VAR_5 == VAR_2->ops->device_get_power_state(VAR_2->domain));
}
