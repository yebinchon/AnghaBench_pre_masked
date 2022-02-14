
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* qos; } ;
struct device {TYPE_2__ power; } ;
struct dev_pm_qos_request {int dummy; } ;
typedef enum dev_pm_qos_req_type { ____Placeholder_dev_pm_qos_req_type } dev_pm_qos_req_type ;
struct TYPE_3__ {struct dev_pm_qos_request* flags_req; struct dev_pm_qos_request* latency_tolerance_req; struct dev_pm_qos_request* resume_latency_req; } ;





 int FUNC_0 (int) ;
 int FUNC_1 (struct dev_pm_qos_request*) ;
 int FUNC_2 (struct dev_pm_qos_request*) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_0,
        enum dev_pm_qos_req_type VAR_1)
{
 struct dev_pm_qos_request *VAR_2 = ((void*)0);

 switch(VAR_1) {
 case 128:
  VAR_2 = VAR_0->power.qos->resume_latency_req;
  VAR_0->power.qos->resume_latency_req = ((void*)0);
  break;
 case 129:
  VAR_2 = VAR_0->power.qos->latency_tolerance_req;
  VAR_0->power.qos->latency_tolerance_req = ((void*)0);
  break;
 case 130:
  VAR_2 = VAR_0->power.qos->flags_req;
  VAR_0->power.qos->flags_req = ((void*)0);
  break;
 default:
  FUNC_0(1);
  return;
 }
 FUNC_1(VAR_2);
 FUNC_2(VAR_2);
}
