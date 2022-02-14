
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int enabled; int hm_device; int od_clock_mem_status; scalar_t__ hm_sysfs; scalar_t__ hm_adl; scalar_t__ hm_nvapi; scalar_t__ hm_nvml; } ;
typedef TYPE_1__ hwmon_ctx_t ;
struct TYPE_13__ {TYPE_1__* hwmon_ctx; } ;
typedef TYPE_2__ hashcat_ctx_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;

void FUNC_9 (hashcat_ctx_t *VAR_0)
{
  hwmon_ctx_t *VAR_1 = VAR_0->hwmon_ctx;

  if (VAR_1->enabled == 0) return;



  if (VAR_1->hm_nvml)
  {
    FUNC_3 (VAR_0);

    FUNC_7 (VAR_0);
  }

  if (VAR_1->hm_nvapi)
  {
    FUNC_4 (VAR_0);

    FUNC_6 (VAR_0);
  }

  if (VAR_1->hm_adl)
  {
    FUNC_2 (VAR_0);

    FUNC_0 (VAR_0);
  }

  if (VAR_1->hm_sysfs)
  {

    FUNC_8 (VAR_0);
  }



  FUNC_1 (VAR_1->od_clock_mem_status);

  FUNC_1 (VAR_1->hm_device);

  FUNC_5 (VAR_1, 0, sizeof (hwmon_ctx_t));
}
