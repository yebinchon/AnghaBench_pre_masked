
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* backend_ctx; } ;
typedef TYPE_1__ hashcat_ctx_t ;
struct TYPE_5__ {int backend_devices_active; } ;
typedef TYPE_2__ backend_ctx_t ;



int FUNC_0 (const hashcat_ctx_t *VAR_0)
{
  const backend_ctx_t *VAR_1 = VAR_0->backend_ctx;

  return VAR_1->backend_devices_active;
}
