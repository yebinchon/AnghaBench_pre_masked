
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int skipped; int skipped_warning; } ;
typedef TYPE_1__ hc_device_param_t ;
struct TYPE_7__ {TYPE_3__* backend_ctx; } ;
typedef TYPE_2__ hashcat_ctx_t ;
struct TYPE_8__ {TYPE_1__* devices_param; } ;
typedef TYPE_3__ backend_ctx_t ;


 int VAR_0 ;
 double FUNC_0 (TYPE_1__*,int ) ;

double FUNC_1 (const hashcat_ctx_t *VAR_1, const int VAR_2)
{
  const backend_ctx_t *VAR_3 = VAR_1->backend_ctx;

  hc_device_param_t *VAR_4 = &VAR_3->devices_param[VAR_2];

  double VAR_5 = 0;

  if ((VAR_4->skipped == 0) && (VAR_4->skipped_warning == 0))
  {
    VAR_5 = FUNC_0 (VAR_4, VAR_0);
  }

  return VAR_5;
}
