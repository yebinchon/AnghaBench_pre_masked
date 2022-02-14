
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct scmi_power_ops {int (* state_set ) (TYPE_1__*,int ,scalar_t__) ;int (* state_get ) (TYPE_1__*,int ,scalar_t__*) ;} ;
struct scmi_pm_domain {int domain; TYPE_1__* handle; } ;
struct generic_pm_domain {int dummy; } ;
struct TYPE_3__ {struct scmi_power_ops* power_ops; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,scalar_t__) ;
 int FUNC_1 (TYPE_1__*,int ,scalar_t__*) ;
 struct scmi_pm_domain* FUNC_2 (struct generic_pm_domain*) ;

__attribute__((used)) static int FUNC_3(struct generic_pm_domain *VAR_3, bool VAR_4)
{
 int VAR_5;
 u32 VAR_6, VAR_7;
 struct scmi_pm_domain *VAR_8 = FUNC_2(VAR_3);
 const struct scmi_power_ops *VAR_9 = VAR_8->handle->power_ops;

 if (VAR_4)
  VAR_6 = VAR_2;
 else
  VAR_6 = VAR_1;

 VAR_5 = VAR_9->state_set(VAR_8->handle, VAR_8->domain, VAR_6);
 if (!VAR_5)
  VAR_5 = VAR_9->state_get(VAR_8->handle, VAR_8->domain, &VAR_7);
 if (!VAR_5 && VAR_6 != VAR_7)
  return -VAR_0;

 return VAR_5;
}
