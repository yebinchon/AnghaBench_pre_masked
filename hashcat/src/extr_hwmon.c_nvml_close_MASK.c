
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ hm_nvml; } ;
typedef TYPE_1__ hwmon_ctx_t ;
struct TYPE_7__ {TYPE_1__* hwmon_ctx; } ;
typedef TYPE_2__ hashcat_ctx_t ;
struct TYPE_8__ {scalar_t__ lib; } ;
typedef TYPE_3__ NVML_PTR ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_2 (hashcat_ctx_t *VAR_0)
{
  hwmon_ctx_t *VAR_1 = VAR_0->hwmon_ctx;

  NVML_PTR *VAR_2 = (NVML_PTR *) VAR_1->hm_nvml;

  if (VAR_2)
  {
    if (VAR_2->lib)
      FUNC_0 (VAR_2->lib);

    FUNC_1 (VAR_2);
  }
}
