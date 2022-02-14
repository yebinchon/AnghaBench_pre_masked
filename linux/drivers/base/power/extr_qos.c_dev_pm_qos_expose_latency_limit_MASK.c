
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
struct TYPE_4__ {struct dev_pm_qos_request* resume_latency_req; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct dev_pm_qos_request*) ;
 int FUNC_2 (struct device*,struct dev_pm_qos_request*,int ,scalar_t__) ;
 int FUNC_3 (struct device*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct dev_pm_qos_request*) ;
 struct dev_pm_qos_request* FUNC_6 (int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct device*) ;

int FUNC_10(struct device *VAR_8, s32 VAR_9)
{
 struct dev_pm_qos_request *VAR_10;
 int VAR_11;

 if (!FUNC_4(VAR_8) || VAR_9 < 0)
  return -VAR_2;

 VAR_10 = FUNC_6(sizeof(*VAR_10), VAR_5);
 if (!VAR_10)
  return -VAR_4;

 VAR_11 = FUNC_2(VAR_8, VAR_10, VAR_0, VAR_9);
 if (VAR_11 < 0) {
  FUNC_5(VAR_10);
  return VAR_11;
 }

 FUNC_7(&VAR_7);

 FUNC_7(&VAR_6);

 if (FUNC_0(VAR_8->power.qos))
  VAR_11 = -VAR_3;
 else if (VAR_8->power.qos->resume_latency_req)
  VAR_11 = -VAR_1;

 if (VAR_11 < 0) {
  FUNC_1(VAR_10);
  FUNC_5(VAR_10);
  FUNC_8(&VAR_6);
  goto out;
 }
 VAR_8->power.qos->resume_latency_req = VAR_10;

 FUNC_8(&VAR_6);

 VAR_11 = FUNC_9(VAR_8);
 if (VAR_11)
  FUNC_3(VAR_8, VAR_0);

 out:
 FUNC_8(&VAR_7);
 return VAR_11;
}
