
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ hm_adl; } ;
typedef TYPE_1__ hwmon_ctx_t ;
struct TYPE_7__ {TYPE_1__* hwmon_ctx; } ;
typedef TYPE_2__ hashcat_ctx_t ;
struct TYPE_8__ {int (* ADL_Overdrive5_FanSpeed_Get ) (int,int,int *) ;} ;
typedef TYPE_3__ ADL_PTR ;
typedef int ADLFanSpeedValue ;


 int const VAR_0 ;
 int const VAR_1 ;
 int FUNC_0 (TYPE_2__*,char*,int const) ;
 int FUNC_1 (int,int,int *) ;

__attribute__((used)) static int FUNC_2 (hashcat_ctx_t *VAR_2, int VAR_3, int VAR_4, ADLFanSpeedValue *VAR_5)
{
  hwmon_ctx_t *VAR_6 = VAR_2->hwmon_ctx;

  ADL_PTR *VAR_7 = (ADL_PTR *) VAR_6->hm_adl;

  const int VAR_8 = VAR_7->ADL_Overdrive5_FanSpeed_Get (VAR_3, VAR_4, VAR_5);

  if ((VAR_8 != VAR_1) && (VAR_8 != VAR_0))
  {
    FUNC_0 (VAR_2, "ADL_Overdrive5_FanSpeed_Get(): %d", VAR_8);

    return -1;
  }

  return 0;
}
