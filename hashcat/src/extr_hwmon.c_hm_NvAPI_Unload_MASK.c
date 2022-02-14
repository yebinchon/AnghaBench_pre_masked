
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ hm_nvapi; } ;
typedef TYPE_1__ hwmon_ctx_t ;
struct TYPE_11__ {TYPE_1__* hwmon_ctx; } ;
typedef TYPE_2__ hashcat_ctx_t ;
struct TYPE_13__ {int (* NvAPI_Unload ) () ;} ;
struct TYPE_12__ {int member_0; } ;
typedef scalar_t__ NvAPI_Status ;
typedef TYPE_3__ NvAPI_ShortString ;
typedef TYPE_4__ NVAPI_PTR ;


 scalar_t__ const VAR_0 ;
 int FUNC_0 (TYPE_2__*,char*,TYPE_3__) ;
 int FUNC_1 (TYPE_4__*,scalar_t__ const,TYPE_3__) ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3 (hashcat_ctx_t *VAR_1)
{
  hwmon_ctx_t *VAR_2 = VAR_1->hwmon_ctx;

  NVAPI_PTR *VAR_3 = (NVAPI_PTR *) VAR_2->hm_nvapi;

  const NvAPI_Status VAR_4 = (NvAPI_Status) VAR_3->NvAPI_Unload ();

  if (VAR_4 != VAR_0)
  {
    NvAPI_ShortString VAR_5 = { 0 };

    FUNC_1 (VAR_3, VAR_4, VAR_5);

    FUNC_0 (VAR_1, "NvAPI_Unload(): %s", VAR_5);

    return -1;
  }

  return 0;
}
