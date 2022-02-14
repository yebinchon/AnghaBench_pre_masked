
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int flr; int pnode; } ;
struct dev_pm_qos_request {int type; TYPE_2__ data; TYPE_3__* dev; } ;
struct dev_pm_qos {int flags; int latency_tolerance; int resume_latency; } ;
typedef int s32 ;
typedef enum pm_qos_req_action { ____Placeholder_pm_qos_req_action } pm_qos_req_action ;
struct TYPE_4__ {int (* set_latency_tolerance ) (TYPE_3__*,int ) ;struct dev_pm_qos* qos; } ;
struct TYPE_6__ {TYPE_1__ power; } ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int,int ) ;
 int FUNC_3 (int *,int *,int,int ) ;
 int FUNC_4 (TYPE_3__*,int ) ;

__attribute__((used)) static int FUNC_5(struct dev_pm_qos_request *VAR_2,
       enum pm_qos_req_action VAR_3, s32 VAR_4)
{
 struct dev_pm_qos *VAR_5 = VAR_2->dev->power.qos;
 int VAR_6;

 switch(VAR_2->type) {
 case 128:
  if (FUNC_0(VAR_3 != VAR_1 && VAR_4 < 0))
   VAR_4 = 0;

  VAR_6 = FUNC_3(&VAR_5->resume_latency,
        &VAR_2->data.pnode, VAR_3, VAR_4);
  break;
 case 129:
  VAR_6 = FUNC_3(&VAR_5->latency_tolerance,
        &VAR_2->data.pnode, VAR_3, VAR_4);
  if (VAR_6) {
   VAR_4 = FUNC_1(&VAR_5->latency_tolerance);
   VAR_2->dev->power.set_latency_tolerance(VAR_2->dev, VAR_4);
  }
  break;
 case 130:
  VAR_6 = FUNC_2(&VAR_5->flags, &VAR_2->data.flr,
       VAR_3, VAR_4);
  break;
 default:
  VAR_6 = -VAR_0;
 }

 return VAR_6;
}
