
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int mux_hwmon; } ;
typedef TYPE_1__ status_ctx_t ;
struct TYPE_8__ {int skipped; int skipped_warning; } ;
typedef TYPE_2__ hc_device_param_t ;
struct TYPE_9__ {TYPE_1__* status_ctx; TYPE_4__* backend_ctx; } ;
typedef TYPE_3__ hashcat_ctx_t ;
struct TYPE_10__ {TYPE_2__* devices_param; } ;
typedef TYPE_4__ backend_ctx_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*,int const) ;

int FUNC_3 (const hashcat_ctx_t *VAR_0, const int VAR_1)
{
  const backend_ctx_t *VAR_2 = VAR_0->backend_ctx;

  hc_device_param_t *VAR_3 = &VAR_2->devices_param[VAR_1];

  if (VAR_3->skipped == 1) return -1;

  if (VAR_3->skipped_warning == 1) return -1;

  status_ctx_t *VAR_4 = VAR_0->status_ctx;

  FUNC_0 (VAR_4->mux_hwmon);

  const int VAR_5 = FUNC_2 ((hashcat_ctx_t *) VAR_0, VAR_1);

  FUNC_1 (VAR_4->mux_hwmon);

  return VAR_5;
}
