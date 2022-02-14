
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int skipped_warning; } ;
typedef TYPE_1__ hc_device_param_t ;
struct TYPE_6__ {TYPE_3__* backend_ctx; } ;
typedef TYPE_2__ hashcat_ctx_t ;
struct TYPE_7__ {TYPE_1__* devices_param; } ;
typedef TYPE_3__ backend_ctx_t ;



bool FUNC_0 (const hashcat_ctx_t *VAR_0, const int VAR_1)
{
  const backend_ctx_t *VAR_2 = VAR_0->backend_ctx;

  hc_device_param_t *VAR_3 = &VAR_2->devices_param[VAR_1];

  return VAR_3->skipped_warning;
}
