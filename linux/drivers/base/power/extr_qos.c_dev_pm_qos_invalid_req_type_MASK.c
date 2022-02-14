
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int set_latency_tolerance; } ;
struct device {TYPE_1__ power; } ;
typedef enum dev_pm_qos_req_type { ____Placeholder_dev_pm_qos_req_type } dev_pm_qos_req_type ;


 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct device *VAR_1,
     enum dev_pm_qos_req_type VAR_2)
{
 return VAR_2 == VAR_0 &&
        !VAR_1->power.set_latency_tolerance;
}
