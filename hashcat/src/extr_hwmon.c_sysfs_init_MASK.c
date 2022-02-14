
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


 int VAR_0 ;
 int FUNC_0 (char**,char*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int ,int) ;

__attribute__((used)) static bool FUNC_4 (hashcat_ctx_t *VAR_1)
{
  hwmon_ctx_t *VAR_2 = VAR_1->hwmon_ctx;

  SYSFS_PTR *VAR_3 = (SYSFS_PTR *) VAR_2->hm_sysfs;

  FUNC_3 (VAR_3, 0, sizeof (SYSFS_PTR));

  char *VAR_4;

  FUNC_0 (&VAR_4, "%s", VAR_0);

  const bool VAR_5 = FUNC_1 (VAR_4);

  FUNC_2 (VAR_4);

  return VAR_5;
}
