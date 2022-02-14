
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ nvmlReturn_t ;
struct TYPE_7__ {scalar_t__ hm_nvml; } ;
typedef TYPE_1__ hwmon_ctx_t ;
struct TYPE_8__ {TYPE_1__* hwmon_ctx; } ;
typedef TYPE_2__ hashcat_ctx_t ;
struct TYPE_9__ {scalar_t__ (* nvmlDeviceGetCount ) (unsigned int*) ;} ;
typedef TYPE_3__ NVML_PTR ;


 scalar_t__ const VAR_0 ;
 int FUNC_0 (TYPE_2__*,char*,char const*) ;
 char* FUNC_1 (TYPE_3__*,scalar_t__ const) ;
 scalar_t__ FUNC_2 (unsigned int*) ;

__attribute__((used)) static int FUNC_3 (hashcat_ctx_t *VAR_1, unsigned int *VAR_2)
{
  hwmon_ctx_t *VAR_3 = VAR_1->hwmon_ctx;

  NVML_PTR *VAR_4 = (NVML_PTR *) VAR_3->hm_nvml;

  const nvmlReturn_t VAR_5 = VAR_4->nvmlDeviceGetCount (VAR_2);

  if (VAR_5 != VAR_0)
  {
    const char *VAR_6 = FUNC_1 (VAR_4, VAR_5);

    FUNC_0 (VAR_1, "nvmlDeviceGetCount(): %s", VAR_6);

    return -1;
  }

  return 0;
}
