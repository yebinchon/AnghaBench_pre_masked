
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ hm_sysfs; } ;
typedef TYPE_1__ hwmon_ctx_t ;
struct TYPE_5__ {TYPE_1__* hwmon_ctx; } ;
typedef TYPE_2__ hashcat_ctx_t ;
typedef int SYSFS_PTR ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1 (hashcat_ctx_t *VAR_0)
{
  hwmon_ctx_t *VAR_1 = VAR_0->hwmon_ctx;

  SYSFS_PTR *VAR_2 = (SYSFS_PTR *) VAR_1->hm_sysfs;

  if (VAR_2)
  {
    FUNC_0 (VAR_2);
  }
}
