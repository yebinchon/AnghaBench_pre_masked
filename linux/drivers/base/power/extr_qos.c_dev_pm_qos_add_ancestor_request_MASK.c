
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int set_latency_tolerance; int ignore_children; } ;
struct device {struct device* parent; TYPE_1__ power; } ;
struct dev_pm_qos_request {int * dev; } ;
typedef int s32 ;
typedef enum dev_pm_qos_req_type { ____Placeholder_dev_pm_qos_req_type } dev_pm_qos_req_type ;




 int VAR_0 ;
 int FUNC_0 (struct device*,struct dev_pm_qos_request*,int,int ) ;

int FUNC_1(struct device *VAR_1,
        struct dev_pm_qos_request *VAR_2,
        enum dev_pm_qos_req_type VAR_3, s32 VAR_4)
{
 struct device *VAR_5 = VAR_1->parent;
 int VAR_6 = -VAR_0;

 switch (VAR_3) {
 case 128:
  while (VAR_5 && !VAR_5->power.ignore_children)
   VAR_5 = VAR_5->parent;

  break;
 case 129:
  while (VAR_5 && !VAR_5->power.set_latency_tolerance)
   VAR_5 = VAR_5->parent;

  break;
 default:
  VAR_5 = ((void*)0);
 }
 if (VAR_5)
  VAR_6 = FUNC_0(VAR_5, VAR_2, VAR_3, VAR_4);

 if (VAR_6 < 0)
  VAR_2->dev = ((void*)0);

 return VAR_6;
}
