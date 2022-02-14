
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* qos; } ;
struct device {TYPE_1__ power; } ;
struct dev_pm_qos_request {int dummy; } ;
typedef scalar_t__ s32 ;
struct TYPE_4__ {struct dev_pm_qos_request* latency_tolerance_req; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct device*,struct dev_pm_qos_request*,int ,scalar_t__) ;
 int FUNC_2 (struct device*,int ) ;
 int FUNC_3 (struct dev_pm_qos_request*,scalar_t__) ;
 int VAR_5 ;
 int FUNC_4 (struct dev_pm_qos_request*) ;
 struct dev_pm_qos_request* FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct device *VAR_6, s32 VAR_7)
{
 int VAR_8;

 FUNC_6(&VAR_5);

 if (FUNC_0(VAR_6->power.qos)
     || !VAR_6->power.qos->latency_tolerance_req) {
  struct dev_pm_qos_request *VAR_9;

  if (VAR_7 < 0) {
   if (VAR_7 == VAR_4)
    VAR_8 = 0;
   else
    VAR_8 = -VAR_1;
   goto out;
  }
  VAR_9 = FUNC_5(sizeof(*VAR_9), VAR_3);
  if (!VAR_9) {
   VAR_8 = -VAR_2;
   goto out;
  }
  VAR_8 = FUNC_1(VAR_6, VAR_9, VAR_0, VAR_7);
  if (VAR_8 < 0) {
   FUNC_4(VAR_9);
   goto out;
  }
  VAR_6->power.qos->latency_tolerance_req = VAR_9;
 } else {
  if (VAR_7 < 0) {
   FUNC_2(VAR_6, VAR_0);
   VAR_8 = 0;
  } else {
   VAR_8 = FUNC_3(VAR_6->power.qos->latency_tolerance_req, VAR_7);
  }
 }

 out:
 FUNC_7(&VAR_5);
 return VAR_8;
}
