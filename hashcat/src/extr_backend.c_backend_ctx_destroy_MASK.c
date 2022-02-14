
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* backend_ctx; } ;
typedef TYPE_1__ hashcat_ctx_t ;
struct TYPE_9__ {int enabled; int opencl_platforms_version; int opencl_platforms_vendor_id; int opencl_platforms_vendor; int opencl_platforms_name; int opencl_platforms_devices_cnt; int opencl_platforms_devices; int opencl_platforms; scalar_t__ ocl; int devices_param; } ;
typedef TYPE_2__ backend_ctx_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

void FUNC_5 (hashcat_ctx_t *VAR_0)
{
  backend_ctx_t *VAR_1 = VAR_0->backend_ctx;

  if (VAR_1->enabled == 0) return;

  FUNC_1 (VAR_1->devices_param);

  if (VAR_1->ocl)
  {
    FUNC_1 (VAR_1->opencl_platforms);
    FUNC_1 (VAR_1->opencl_platforms_devices);
    FUNC_1 (VAR_1->opencl_platforms_devices_cnt);
    FUNC_1 (VAR_1->opencl_platforms_name);
    FUNC_1 (VAR_1->opencl_platforms_vendor);
    FUNC_1 (VAR_1->opencl_platforms_vendor_id);
    FUNC_1 (VAR_1->opencl_platforms_version);
  }

  FUNC_3 (VAR_0);
  FUNC_0 (VAR_0);
  FUNC_4 (VAR_0);

  FUNC_2 (VAR_1, 0, sizeof (backend_ctx_t));
}
