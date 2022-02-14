
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct dev_pm_qos_request {int dummy; } ;
typedef int s32 ;
typedef enum dev_pm_qos_req_type { ____Placeholder_dev_pm_qos_req_type } dev_pm_qos_req_type ;


 int FUNC_0 (struct device*,struct dev_pm_qos_request*,int,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct device *VAR_1, struct dev_pm_qos_request *VAR_2,
      enum dev_pm_qos_req_type VAR_3, s32 VAR_4)
{
 int VAR_5;

 FUNC_1(&VAR_0);
 VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
 FUNC_2(&VAR_0);
 return VAR_5;
}
