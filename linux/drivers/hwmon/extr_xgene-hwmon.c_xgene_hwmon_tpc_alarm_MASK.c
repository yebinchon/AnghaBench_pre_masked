
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xgene_hwmon_dev {int temp_critical_alarm; TYPE_1__* dev; } ;
struct slimpro_resp_msg {int param2; } ;
struct TYPE_2__ {int kobj; } ;


 int FUNC_0 (int *,int *,char*) ;

__attribute__((used)) static int FUNC_1(struct xgene_hwmon_dev *VAR_0,
     struct slimpro_resp_msg *VAR_1)
{
 VAR_0->temp_critical_alarm = !!VAR_1->param2;
 FUNC_0(&VAR_0->dev->kobj, ((void*)0), "temp1_critical_alarm");

 return 0;
}
