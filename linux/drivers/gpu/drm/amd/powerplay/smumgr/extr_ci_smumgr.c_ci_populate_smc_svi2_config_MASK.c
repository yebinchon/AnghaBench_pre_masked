
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct smu7_hwmgr {scalar_t__ voltage_control; } ;
struct pp_hwmgr {scalar_t__ backend; } ;
struct TYPE_3__ {int SVI2Enable; } ;
typedef TYPE_1__ SMU7_Discrete_DpmTable ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(struct pp_hwmgr *VAR_1,
         SMU7_Discrete_DpmTable *VAR_2)
{
 struct smu7_hwmgr *VAR_3 = (struct smu7_hwmgr *)(VAR_1->backend);

 if (VAR_0 == VAR_3->voltage_control)
  VAR_2->SVI2Enable = 1;
 else
  VAR_2->SVI2Enable = 0;
 return 0;
}
