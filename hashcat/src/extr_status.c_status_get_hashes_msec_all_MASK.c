
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* backend_ctx; } ;
typedef TYPE_1__ hashcat_ctx_t ;
struct TYPE_6__ {int backend_devices_cnt; } ;
typedef TYPE_2__ backend_ctx_t ;


 scalar_t__ FUNC_0 (TYPE_1__ const*,int) ;

double FUNC_1 (const hashcat_ctx_t *VAR_0)
{
  const backend_ctx_t *VAR_1 = VAR_0->backend_ctx;

  double VAR_2 = 0;

  for (int VAR_3 = 0; VAR_3 < VAR_1->backend_devices_cnt; VAR_3++)
  {
    VAR_2 += FUNC_0 (VAR_0, VAR_3);
  }

  return VAR_2;
}
