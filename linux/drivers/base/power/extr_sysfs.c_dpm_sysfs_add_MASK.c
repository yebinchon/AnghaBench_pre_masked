
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ set_latency_tolerance; } ;
struct device {int kobj; TYPE_1__ power; } ;


 scalar_t__ FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (struct device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct device*) ;
 int VAR_3 ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *) ;

int FUNC_8(struct device *VAR_4)
{
 int VAR_5;


 if (FUNC_1(VAR_4))
  return 0;

 VAR_5 = FUNC_4(&VAR_4->kobj, &VAR_0);
 if (VAR_5)
  return VAR_5;

 if (FUNC_2(VAR_4)) {
  VAR_5 = FUNC_5(&VAR_4->kobj, &VAR_2);
  if (VAR_5)
   goto err_out;
 }
 if (FUNC_0(VAR_4)) {
  VAR_5 = FUNC_5(&VAR_4->kobj, &VAR_3);
  if (VAR_5)
   goto err_runtime;
 }
 if (VAR_4->power.set_latency_tolerance) {
  VAR_5 = FUNC_5(&VAR_4->kobj,
           &VAR_1);
  if (VAR_5)
   goto err_wakeup;
 }
 VAR_5 = FUNC_3(VAR_4);
 if (VAR_5)
  goto err_latency;
 return 0;

 err_latency:
 FUNC_7(&VAR_4->kobj, &VAR_1);
 err_wakeup:
 FUNC_7(&VAR_4->kobj, &VAR_3);
 err_runtime:
 FUNC_7(&VAR_4->kobj, &VAR_2);
 err_out:
 FUNC_6(&VAR_4->kobj, &VAR_0);
 return VAR_5;
}
