
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
struct TYPE_8__ {int (* ADL_Adapter_AdapterInfo_Get ) (int ,int) ;} ;
typedef int LPAdapterInfo ;
typedef TYPE_3__ ADL_PTR ;


 int const VAR_0 ;
 int FUNC_0 (TYPE_2__*,char*,int const) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2 (hashcat_ctx_t *VAR_1, LPAdapterInfo VAR_2, int VAR_3)
{
  hwmon_ctx_t *VAR_4 = VAR_1->hwmon_ctx;

  ADL_PTR *VAR_5 = (ADL_PTR *) VAR_4->hm_adl;

  const int VAR_6 = VAR_5->ADL_Adapter_AdapterInfo_Get (VAR_2, VAR_3);

  if (VAR_6 != VAR_0)
  {
    FUNC_0 (VAR_1, "ADL_Adapter_AdapterInfo_Get(): %d", VAR_6);

    return -1;
  }

  return 0;
}
